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

#include "BaseOverlay.h"

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
#define LOCAL_IP "157.159.16.91"
//#define PORT_LISTEN 5080

void *listensip (void *parameters);
void handleMESSAGE(int ueID,char* msgBody);

stringQueue_t sipReceiveBuffer[10]; //for max 10 UEs

EXOSIP::EXOSIP(int PORT_LISTEN, int ueIDbegin_var)
{
	ueIDbegin = ueIDbegin_var;

	 if (eXosip_init ()) {
		  perror("eXosip_init failed");
		  exit (1);
	  }

	  int i = eXosip_listen_addr (IPPROTO_UDP, NULL, PORT_LISTEN, AF_INET, 0);
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

/*EXOSIP::~EXOSIP()
{
	  printf("osip destructed!\n");
}*/

/*void EXOSIP::wait()
{
	pid_t pID = fork();

  if (pID == 0)                // child
   {
	  if (eXosip_init ()) {
			  perror("eXosip_init failed");
			  exit (1);
		  }

		  int i = eXosip_listen_addr (IPPROTO_UDP, NULL, PORT_LISTEN, AF_INET, 0);
		  if (i!=0) {
			  eXosip_quit();
			  printf("could not initialize transport layer\n");
			  exit (1);
		  }
	  // Code only executed by child process

//		  sIdentifier = "Child Process: ";
//		  globalVariable++;
//		  iStackVariable++;
//		  while(1);
	  int j=0;
//		  int i=0;
	  int num=0;
	  int pos = 0;
	  eXosip_event_t *event;
	  while(1) {
		 if (!(event = eXosip_event_wait (0, 1000))) {
			  usleep (10000);
			  printf("loop %d\n",j++);
			  continue;
			}
		 printf("hoang test b4 eXosip_automatic_action ();");
			  eXosip_automatic_action ();
			  pos = 0;
			  printf("hoang test");
		 switch (event->type) {
				case EXOSIP_MESSAGE_NEW:
					printf ("\nEXOSIP_MESSAGE_NEW Event detected! %d\n",++num);
					//send an answer for 200
					  eXosip_lock ();
					  i = eXosip_message_send_answer(event->tid, 200, NULL);
					  printf("i=%d\n",i);
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
						   printf("body content:\n%s\n",oldbody->body);
						   sscanf(oldbody->body,format,type,&ueID,str);
						   printf("OSIP: type=%s\tnodeID=%d\n",type,ueID);
						   handleMESSAGE(ueID, oldbody->body);
						   pos++;
						 }
					break;
				case EXOSIP_MESSAGE_PROCEEDING:
					printf ("EXOSIP_MESSAGE_PROCEEDING Event detected!\n");
					break;
				case EXOSIP_MESSAGE_ANSWERED:
					printf ("EXOSIP_MESSAGE_ANSWERED Event detected! from event tid=%d\n",event->tid);
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
// Code only executed by parent process
//			return;
//		  sIdentifier = "Parent Process:";
//		  iStackVariable+=2;

	}
	else if (pID < 0)            // failed to fork
	{
//			cerr << "Failed to fork" << endl;
		exit(1);
		// Throw exception
	}
	else                                   // parent
	{
		printf("parent process b4 return\n");
			return;
//			exit(1);
		printf("parent process after return\n");
	}
}*/


//***********************************************************************************
//Init for preparation eXoSIP
int EXOSIP::initsip(void* nn, int nodeID){
//	printf("node %d initsip\n",nodeID);
//	nicePointer[nodeID - 5000] = (BaseOverlay*)nn;
}
//***********************************************************************************
//Send a message out of Call: MESSAGE, OPTIONS, ...
int EXOSIP::sendmessage(char *typeMessage ,char *uriTo, char *uriFrom, char *buf){
	osip_message_t *message;
	//Build request before send
	int i = eXosip_message_build_request (&message, typeMessage, uriTo, uriFrom, NULL);

	//int i = eXosip_message_build_request (&message, "MESSAGE",
	//		"<sip:root@157.159.16.91:5080>", "<sip:hoang@157.159.16.160:5080>", NULL);
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
	return i;
}
//***********************************************************************************
void *listensip (void *parameters){

	  int j=0;
	  int i=0;
	  int num=0;
	  int pos = 0;
	  eXosip_event_t *event;
	  while(1) {
	     if (!(event = eXosip_event_wait (0, 1000))) {
	          usleep (10000);
//	          printf("loop %d\n",j++);
	          continue;
	        }
	          eXosip_automatic_action ();
	          pos = 0;
	     switch (event->type) {
				case EXOSIP_MESSAGE_NEW:
					printf ("\nEXOSIP_MESSAGE_NEW Event detected! %d\n",++num);
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
//					       printf("body content:\n%s\n",oldbody->body);
					       sscanf(oldbody->body,format,type,&ueID,str);
//					       printf("OSIP: type=%s\tnodeID=%d\n",type,ueID);
					       handleMESSAGE(ueID, oldbody->body);
					       pos++;


					     }


					break;
				case EXOSIP_MESSAGE_PROCEEDING:
					printf ("EXOSIP_MESSAGE_PROCEEDING Event detected!\n");
					break;
				case EXOSIP_MESSAGE_ANSWERED:
					printf ("EXOSIP_MESSAGE_ANSWERED Event detected! from event tid=%d\n",event->tid);
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
//void EXOSIP::wait(){
//	pthread_t thread_id;
//	thread_id = (pthread_t)malloc(sizeof(pthread_t));
//	pthread_create(&thread_id,NULL, &listensip,NULL);
//}

void handleMESSAGE(int ueID,char* msgBody)
{
//	printf("osip handleMESSAGE for node %d\n",ueID);
	if(ueID > ueIDbegin - 1){
//		((BaseOverlay*)(nicePointer[ueID - 5000]))->hoangHandleSIP(msgBody);
		sipReceiveBuffer[ueID - ueIDbegin].push(string(msgBody));
	}
	else{
		printf("ERROR: ueID=%d < %d\n", ueID, ueIDbegin);
	}
//	return;
}

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

#endif /* EXOSIP_CC_ */
