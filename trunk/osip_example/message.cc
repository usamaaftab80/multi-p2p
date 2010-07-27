/*
 * main4.cc
 *
 *  Created on: Jul 23, 2010
 *      Author: admin
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <syslog.h>
#include <pthread.h>
#include <eXosip2/eXosip.h>


int main (int argc, char *argv[])
{
  char buf[256] = "Alarm from sensor x";
  osip_message_t *message;
  int i;
  eXosip_event_t *event;
  int pos = 0;
// For trace
//  osip_trace_initialize(6, stdout);

  if (eXosip_init ()) {
      perror("eXosip_init failed");
      exit (1);
  }

  i = eXosip_listen_addr (IPPROTO_UDP, NULL, 5080, AF_INET, 0);
  if (i!=0) {
      eXosip_quit();
      printf("could not initialize transport layer\n");
      exit (1);
  }

//  eXosip_force_masquerade_contact ("localhost");

  i = eXosip_message_build_request (&message, "MESSAGE",
"<sip:root@157.159.16.91:5080>", "<sip:hoang@157.159.16.160:5080>", NULL);
  if (i != 0) {
      printf("eXosip_message_build_request failed");
      exit (1);
  }

  osip_message_set_expires (message, "120");
  osip_message_set_body (message, buf, strlen (buf));
  osip_message_set_content_type (message, "text/plain");

  eXosip_lock ();
  i = eXosip_message_send_request (message);
  if (i != 0) {
      printf("eXosip_message_send_request failed");
      exit (1);
  }
  eXosip_unlock ();

  int j=0;
  int num=0;

  while(1) {
     if (!(event = eXosip_event_wait (0, 1000))) {
          usleep (10000);
//          printf("%d\n",++j);
          continue;
        }
          eXosip_automatic_action ();
          pos = 0;
     switch (event->type) {
			case EXOSIP_MESSAGE_NEW:
				printf ("\nEXOSIP_MESSAGE_NEW Event detected! %d\n",++num);
//				printf("1. msg->status_code: %d\n",event->request->status_code);
//				printf("1. msg->from->displayname: %s\n",event->request->message);

				 osip_body_t * oldbody;
				   while (!osip_list_eol (&event->request->bodies, pos))
				     {

				       oldbody = (osip_body_t *) osip_list_get (&event->request->bodies, pos);
				       pos++;

				       printf("body:%s\nbodysize:%d\n",oldbody->body,oldbody->length);

				     }


				//send an answer for 200
				  eXosip_lock ();
				  i = eXosip_message_send_answer(event->tid, 200, NULL);
//				  printf("aaa %d\n",i);
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

//				osip_message_t * msg = NULL;
//				msg= event->response;

/*				printf("1. msg->status_code: %d\n",event->response->status_code);
				printf("1. msg->from->displayname: %s\n",event->response->from->url->host);
				printf("1. msg->from->displayname: %s\n",event->response->from->url->port);
				printf("1. msg->from->displayname: %s\n",event->response->to->url->host);
				printf("1. msg->from->displayname: %s\n",event->response->to->url->port);
				printf("1. msg->from->displayname: %s\n",event->response->from->displayname);
				printf("1. msg->from->displayname: %s\n",event->response->from->url->username);
				printf("1. msg->from->displayname: %s\n",event->response->to->displayname);
				printf("1. msg->from->displayname: %s\n",event->response->to->url->username);

				//send an answer for 200
				osip_message_t *answer;
				i = eXosip_message_build_answer(event->tid, 200, &answer);

				  if (i != 0) {
				      printf("eXosip_message_build_answer failed");
				      exit (1);
				  }

				  printf("1. answer->status_code: %d\n",answer->status_code);
				  printf("1. answer->from->displayname: %s\n",answer->from->url->host);
				  printf("1. answer->from->displayname: %s\n",answer->from->url->port);
				  printf("1. answer->from->displayname: %s\n",answer->to->url->host);
				  printf("1. answer->from->displayname: %s\n",answer->to->url->port);
				  printf("1. msg->from->displayname: %s\n",answer->from->displayname);
				printf("1. msg->from->displayname: %s\n",answer->from->url->username);
				printf("1. msg->from->displayname: %s\n",answer->to->displayname);
				printf("1. msg->from->displayname: %s\n",answer->to->url->username);
///				  printf("1. answer->from->displayname: %s\n",answer->headers);

//				  osip_message_set_expires (answer, "120");
//				  osip_message_set_body (answer, buf, strlen (buf));
//				  osip_message_set_content_type (answer, "text/plain");

				  printf("2. answer->message: %s\n",answer->message);

				  eXosip_lock ();
				  i = eXosip_message_send_answer(1, 200, answer);
				  printf("aaa %d\n",i);
				  if (i != 0) {
				      printf("eXosip_message_send_answer failed");
				      exit (1);
				  }
				  eXosip_unlock ();*/
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

