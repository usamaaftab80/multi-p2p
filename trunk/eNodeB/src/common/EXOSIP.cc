/*
 * EXOSIP.cc
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_CC_
#define EXOSIP_CC_

#include "EXOSIP.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <syslog.h>
#include <pthread.h>
#include <eXosip2/eXosip.h>

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
#define PORT_LISTEN 5080


//static osip_t *osip;
//static int sipSock;
EXOSIP::EXOSIP()
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
//	  return i;
}
EXOSIP::~EXOSIP()
{

}

/*
 * Constructor with a mapped pointer to the Nice instance
 * which has an EXOSIP object
 */
//EXOSIP::EXOSIP(Nice* nn)
//{
//	nicePointer = nn;
//}

//***********************************************************************************
//Init for preparation eXoSIP
//void EXOSIP::initsip(Nice* nn, int nodeID){
//	nicePointer[nodeID] = nn;
//}
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
void *EXOSIP::listensip (void *parameters){


	  //int j=0;
	  int i=0;
	  int num=0;
	  int pos = 0;
	  eXosip_event_t *event;
	  while(1) {
	     if (!(event = eXosip_event_wait (0, 1000))) {
	          usleep (10000);
	          continue;
	        }
	          eXosip_automatic_action ();
	          pos = 0;
	     switch (event->type) {
				case EXOSIP_MESSAGE_NEW:
					printf ("\nEXOSIP_MESSAGE_NEW Event detected! %d\n",++num);

//					nicePointer[0]->hoang();

					// fetch MESSAGE's bodies
					osip_body_t * oldbody;
					while (!osip_list_eol (&event->request->bodies, pos))
					{

						oldbody = (osip_body_t *) osip_list_get (&event->request->bodies, pos);
						pos++;

						printf("body:%s\nbodysize:%d\n",oldbody->body,oldbody->length);

					}

					//send a 200 msg
					eXosip_lock ();
					i = eXosip_message_send_answer(event->tid, 200, NULL);
					if (i != 0) {
						printf("eXosip_message_send_answer failed");
						exit (1);
					}
					eXosip_unlock ();

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
void EXOSIP::wait(){
	pthread_t thread_id;
	thread_id = (pthread_t)malloc(sizeof(pthread_t));
	pthread_create(&thread_id,NULL, &EXOSIP::listensip,NULL);
}

void EXOSIP::handleMESSAGE()
{
//	nicePointer[0]->hoang();
}


#endif /* EXOSIP_CC_ */
