/*
 * EXOSIP.cc
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_CC_
#define EXOSIP_CC_

#include "EXOSIP.h"

#include <iostream>
#include <fstream>
// Required by for routine
#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <syslog.h>
#include <pthread.h>
#include <eXosip2/eXosip.h>

#include "HoangGlobalObject.h"

#include <queue>

typedef queue<string> stringQueue_t;

#define MESSAGE_MAX_LENGTH 4000
#define MAX_ADDR_STR 128
#define MESSAGE_ENTRY_MAX_LENGTH 256
#define SIP_PORT 5080
#define EXPIRES_TIME_INSECS "3600"

#define USER_ID "7929"
#define SIP_PROXY "sip:157.159.16.91"
#define SIP_FROM "sip:singlehost@157.159.16.91"
#define SIP_FROM_PORT "5080"
#define SIP_TO "sip:AS@157.159.16.91"
#define SIP_TO_PORT "5080"
#define SIP_CONTACT "sip:singlehost@157.159.16.91"
#define LOCAL_IP = "157.159.16.91";

int PORT_LISTEN = 5080;
int ueIDbegin = 5000;
int ueIDavailable = 5000;
bool activatedByAS = false;
char hoangFrom[100];
string localSocket;
HoangGlobalObject * globalObject;
void *listensip (void *parameters);
void handleMESSAGE(int ueID,char* msgBody);
void sendMemberListToAS();
void sendMESSAGEtoAS(string body);
void sendMESSAGEto(string uriTo_var, string body);
stringQueue_t sipReceiveBuffer[10]; //for max 10 UEs

template <class T>
inline std::string to_string (const T& t)
{
    std::stringstream ss;
    ss << t;
    return ss.str();
}

EXOSIP::EXOSIP(int PORT_LISTEN_var, int ueIDbegin_var, string cardEthernetIP_var)
{
	PORT_LISTEN = PORT_LISTEN_var;
	portListen = PORT_LISTEN_var;
	ueIDbegin = ueIDbegin_var;
	ueIDavailable = ueIDbegin_var;
	localSocket = cardEthernetIP_var + ":" + to_string(portListen);

	string body = "<sip:hoang@" + cardEthernetIP_var + ":" + to_string(portListen) + ">";
	hoangFrom[0] = '\0';
	strcat(hoangFrom,body.c_str());

	 if (eXosip_init ()) {
		  perror("eXosip_init failed");
		  exit (1);
	  }

	  int i = eXosip_listen_addr (IPPROTO_UDP, NULL, portListen, AF_INET, 0);
	  if (i!=0) {
		  eXosip_quit();
		  printf("could not initialize transport layer\n");
		  exit (1);
	  }

	  pthread_t thread_id;
	  thread_id = (pthread_t)malloc(sizeof(pthread_t));
	  pthread_create(&thread_id,NULL, &listensip,NULL);

	  printf("osip thread constructed!\n");
}
//***********************************************************************************
void EXOSIP::assignHoangGlobalObject(void* n)
{
	globalObject = (HoangGlobalObject*)n;
}
//***********************************************************************************
//Send a message out of Call: MESSAGE, OPTIONS, ...
void EXOSIP::sendSipMessageTo(string uriTo_var, string body){
	osip_message_t *message;

	//Build request before send

	char buf[80];
	buf[0] = '\0';
	strcat(buf, body.c_str());

	char uriTo[80];
	uriTo[0] = '\0';
	strcat(uriTo, uriTo_var.c_str());


	int i = eXosip_message_build_request (&message, "MESSAGE", uriTo, hoangFrom, NULL);

	if (i != 0) {
		printf("eXosip_message_build_request failed");
		exit (1);
	}

	osip_message_set_expires (message, EXPIRES_TIME_INSECS);
	osip_message_set_body (message, buf, strlen (buf));
	osip_message_set_content_type (message, "text/plain");
    // Send this request
	eXosip_lock ();
	i = eXosip_message_send_request (message);
	if (i != 0) {
		printf("eXosip_message_send_request failed");
	    exit (1);
	}
	eXosip_unlock ();
}


//***********************************************************************************
void EXOSIP::sendSipMessageToAS(string body)
{
	string uriTo = "<sip:as@157.159.16.91:5080>";
//	string uriTo = "<sip:as@157.159.16.57:5080>";
	sendSipMessageTo(uriTo, body);
}


//***********************************************************************************
void EXOSIP::pollBufferOfNode(int nodeID, string &str)
{
//	string ret;
	if(!sipReceiveBuffer[nodeID - ueIDbegin].empty()){
		str = sipReceiveBuffer[nodeID - ueIDbegin].front();
		sipReceiveBuffer[nodeID - ueIDbegin].pop();
	}else{
		str = "nothing";
	}

//	return ret;
}

//***********************************************************************************
void EXOSIP::queryAS()
{
	sendSipMessageToAS(string("REQ_QUERY"));
}

//***********************************************************************************
void *listensip (void *parameters){

	  int j=0;
	  int i=0;
	  int num=0;
	  int pos = 0;
	  eXosip_event_t *event;
	  while(1) {
	     if (!(event = eXosip_event_wait (0, 0))) {
	          usleep (10000);
	          continue;
	        }
	          eXosip_automatic_action ();
	          pos = 0;
	     switch (event->type) {
				case EXOSIP_MESSAGE_NEW:
//					printf ("\nEXOSIP_MESSAGE_NEW Event detected! %d\n",++num);
					if(!activatedByAS)
					{
						activatedByAS = true;
						cout << "eNodeB SIP port " << PORT_LISTEN << " activated by AS\n";
					}
					//send an answer for 200
					  eXosip_lock ();
					  i = eXosip_message_send_answer(event->tid, 200, NULL);
					  if (i != 0) {
						  printf("eXosip_message_send_answer failed");
						  exit (1);
					  }
					  eXosip_unlock ();

					// fetch MESSAGE body, get nodeID to handle
					  char type[80];
					  int ueID;
					  char str[80];
					  const char* format;
					  format = "%s\nIDNode:%d\n%s\n";

					 osip_body_t * oldbody;
					   while (!osip_list_eol (&event->request->bodies, pos))
					   {
					       oldbody = (osip_body_t *) osip_list_get (&event->request->bodies, pos);

					       sscanf(oldbody->body,"%s\n%s\n",type,str);
					       if( string(type) == "REQ_HANDOVER_NOTIFY" ){
							   cout << "oldEnodeB " << str << endl;
							   //query oldEnodeB about packetID
							   string uriTo = "<sip:enodeb@" + string(str) + ">";
							   string body = string("REQ_INFO_HANDOVER_NOTIFY\n") + localSocket;
							   sendMESSAGEto(uriTo, body);
							   //reply to AS
							   sendMESSAGEtoAS(string("REP_HANDOVER_NOTIFY"));
						   }
					       else if( string(type) == "REQ_INFO_HANDOVER_NOTIFY" ){
							   //reply newEnodeB about packetID
					    	   string uriTo = "<sip:enodeb@" + string(str) + ">";
					    	   string body = string("REP_INFO_HANDOVER_NOTIFY\n") + to_string(globalObject->getNumAppMsgOfNode(5000));
					    	   cout << simTime() << endl;
					    	   sendMESSAGEto(uriTo, body);
						   }
					       else if( string(type) == "REP_INFO_HANDOVER_NOTIFY" ){
							   cout << "get a REP_INFO_HANDOVER_NOTIFY.\ncurrentPacketID=" << str << endl;
							   ofstream f;
							   f.open ("numAppMsgSent.txt");
							   f << str << endl;
							   f.close();
						   }
					       else if( string(type) == "HOANG_SERVER_BEGIN" ){
							   cout << localSocket << " get a HOANG_SERVER_BEGIN at " << globalObject->getRealTime() << endl;
							   globalObject->setServerBeginTime(globalObject->getRealTime());
						   }
					       else
					       {
					    	   sscanf(oldbody->body,format,type,&ueID,str);
//					       printf("OSIP: type=%s\tnodeID=%d\n",type,ueID);
							   if( (string(type) == "REQ_JOIN" || string(type) == "REQ_HANDOVER_JOIN") && ueID == 0){
								   char username[80];
								   sscanf(oldbody->body,"%s\nIDNode:%d\nUserURI:%s\n%s\n",type,&ueID,username,str);
								   //provide an ID
								   ueID = ueIDavailable;
								   cout << "vua cap id " << ueID << " cho user " << username << endl;
								   ueIDavailable++;
							   }
					       }

					       handleMESSAGE(ueID, oldbody->body);
					       pos++;

					   }


					break;
				case EXOSIP_MESSAGE_PROCEEDING:
					printf ("EXOSIP_MESSAGE_PROCEEDING Event detected!\n");
					break;
				case EXOSIP_MESSAGE_ANSWERED:
//					printf ("EXOSIP_MESSAGE_ANSWERED Event detected! from event tid=%d\n",event->tid);
					break;
				case EXOSIP_MESSAGE_REDIRECTED:
					printf ("EXOSIP_MESSAGE_REDIRECTED Event detected!\n");
					break;
				case EXOSIP_MESSAGE_REQUESTFAILURE:
					printf ("EXOSIP_MESSAGE_REQUESTFAILURE Event detected!\n");
					break;
				case EXOSIP_MESSAGE_SERVERFAILURE:
					printf ("EXOSIP_MESSAGE_SERVERFAILURE Event detected!\n");
					break;
				case EXOSIP_MESSAGE_GLOBALFAILURE:
					printf ("EXOSIP_MESSAGE_GLOBALFAILURE Event detected!\n");
					break;
				default:
					printf("received eXosip event (type, did, cid) = (%d, %d, %d)\n", event->type, event->did, event->cid);
					break;
	      }

	  }
	  eXosip_event_free (event);
}

//***********************************************************************************
void handleMESSAGE(int ueID,char* msgBody)
{
//	printf("osip handleMESSAGE for node %d\n",ueID);
	if(ueID > ueIDbegin - 1){
		sipReceiveBuffer[ueID - ueIDbegin].push(string(msgBody));
	}
	else{
		printf("ERROR: ueID=%d < %d body:%s\n", ueID, ueIDbegin, msgBody);
	}

}

//***********************************************************************************
void sendMemberListToAS()
{
	if(!activatedByAS)
		return;
	//fetch member_list.txt
	//add to body
	string body = "MEMBER_LIST\n";
	string line;
	ifstream myfile ("member_list.txt");
	if (myfile.is_open())
	{
		while (! myfile.eof() )
		{
			getline (myfile,line);
			body += line + "\n";
		}
		myfile.close();
	}

	//send SIP to AS
	sendMESSAGEtoAS(body);
}


//***********************************************************************************
void sendMESSAGEtoAS(string body)
{
	string uriTo = "<sip:as@157.159.16.91:5080>";
//	string uriTo = "<sip:as@157.159.16.57:5080>";
	sendMESSAGEto(uriTo, body);
}

void sendMESSAGEto(string uriTo_var, string body)
{
	osip_message_t *message;
	//Build request before send
	char uriTo[80];
	uriTo[0] = '\0';
	strcat(uriTo, uriTo_var.c_str());

//	int i = eXosip_message_build_request (&message, "MESSAGE", "<sip:as@157.159.16.91:5080>", hoangFrom, NULL);
	int i = eXosip_message_build_request (&message, "MESSAGE", uriTo, hoangFrom, NULL);

	//int i = eXosip_message_build_request (&message, "MESSAGE",
	//		"<sip:as@157.159.16.91:5080>", "<sip:hoang@157.159.16.160:5080>", NULL);
	if (i != 0) {
		printf("eXosip_message_build_request failed");
		exit (1);
	}
	char buf[1000];
	buf[0] = '\0';

	strcat(buf,body.c_str());
	osip_message_set_expires (message, EXPIRES_TIME_INSECS);
	osip_message_set_body (message, buf, strlen (buf));
	osip_message_set_content_type (message, "text/plain");
	// Send this request
	eXosip_lock ();
	i = eXosip_message_send_request (message);
	if (i != 0) {
		printf("eXosip_message_send_request failed");
		exit (1);
	}
	eXosip_unlock ();
}
#endif /* EXOSIP_CC_ */
