/*
 * sample2.cc
 *
 *  Created on: Jul 22, 2010
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
  osip_message_t *invite;
  int i;
  void *reference;
  eXosip_event_t *event;
  unsigned short port = 5080;
  char tmp[4096];
  char localip[128];
  char port2[10];

// For trace
//  osip_trace_initialize(6, stdout);

  if (eXosip_init ()) {
      printf("eXosip_init failed\n");
      exit (1);
  }


  i = eXosip_listen_addr (IPPROTO_UDP, NULL, port, AF_INET, 0);
  if (i!=0) {
    eXosip_quit();
    printf("could not initialize transport layer\n");
      exit (1);
  }

//  eXosip_force_masquerade_contact("127.0.0.1");

  i = eXosip_call_build_initial_invite (&invite, "<sip:sip-servlets-conference@157.159.16.91:5080>",
                                        "<sip:hoang@157.159.16.122>",
                                        NULL, // optionnal route header
                                        "This is a call for a conversation");
  if (i != 0) {
      printf("eXosip_call_build_initial_invite failed\n");
      exit (1);
  }


  osip_message_set_supported (invite, "100rel");

  /* add sdp body */
  snprintf (port2, 10, "%i", 10502);

  eXosip_guess_localip (AF_INET, localip, 128);

  snprintf (tmp, 4096,
              "v=0\r\n"
              "o=josua 0 0 IN IP4 %s\r\n"
              "s=conversation\r\n"
              "c=IN IP4 %s\r\n"
              "t=0 0\r\n"
              "m=audio %s RTP/AVP 0 8 101\r\n"
              "a=rtpmap:0 PCMU/8000\r\n"
              "a=rtpmap:8 PCMA/8000\r\n"
              "a=rtpmap:101 telephone-event/8000\r\n"
              "a=fmtp:101 0-11\r\n"
               , localip, localip, port2);
  printf("%s", tmp); fflush(stdout);

  osip_message_set_body (invite, tmp, strlen (tmp));
  osip_message_set_content_type (invite, "application/sdp");

  eXosip_lock ();
  i = eXosip_call_send_initial_invite (invite);
  if (i > 0) {
      eXosip_call_set_reference (i, reference);
  }
  eXosip_unlock ();

  while(1) {
      if (!(event = eXosip_event_wait (0, 0))) {
          usleep (10000);
          continue;
        }

    eXosip_automatic_action ();

	 switch (event->type) {
		case  EXOSIP_CALL_INVITE:
		printf("EXOSIP_CALL_INVITE:\n");
					break;
		case  EXOSIP_CALL_REINVITE:
		printf("EXOSIP_CALL_REINVITE:\n");
					break;
		case  EXOSIP_CALL_NOANSWER:
		printf("EXOSIP_CALL_NOANSWER:\n");
					break;
		case  EXOSIP_CALL_PROCEEDING:
		printf("EXOSIP_CALL_PROCEEDING:\n");
					break;
		case  EXOSIP_CALL_RINGING:
		printf("EXOSIP_CALL_RINGING:\n");
					break;
		case  EXOSIP_CALL_ANSWERED:
		printf("EXOSIP_CALL_ANSWERED:\n");
					break;
		case  EXOSIP_CALL_REDIRECTED:
		printf("EXOSIP_CALL_REDIRECTED:\n");
					break;
		case  EXOSIP_CALL_REQUESTFAILURE:
		printf("EXOSIP_CALL_REQUESTFAILURE:\n");
					break;
		case  EXOSIP_CALL_SERVERFAILURE:
		printf("EXOSIP_CALL_SERVERFAILURE:\n");
					break;
		case  EXOSIP_CALL_GLOBALFAILURE:
		printf("EXOSIP_CALL_GLOBALFAILURE:\n");
					break;
		case  EXOSIP_CALL_ACK:
		printf("EXOSIP_CALL_ACK:\n");
					break;
		case  EXOSIP_CALL_CANCELLED:
		printf("EXOSIP_CALL_CANCELLED:\n");
					break;
		case  EXOSIP_CALL_TIMEOUT:
		printf("EXOSIP_CALL_TIMEOUT:\n");
					break;
		case  EXOSIP_CALL_MESSAGE_NEW:
		printf("EXOSIP_CALL_MESSAGE_NEW:\n");
					break;
		case  EXOSIP_CALL_MESSAGE_PROCEEDING:
		printf("EXOSIP_CALL_MESSAGE_PROCEEDING:\n");
					break;
		case  EXOSIP_CALL_MESSAGE_ANSWERED:
		printf("EXOSIP_CALL_MESSAGE_ANSWERED:\n");
					break;
		case  EXOSIP_CALL_MESSAGE_REDIRECTED:
		printf("EXOSIP_CALL_MESSAGE_REDIRECTED:\n");
					break;
		case  EXOSIP_CALL_MESSAGE_REQUESTFAILURE:
		printf("EXOSIP_CALL_MESSAGE_REQUESTFAILURE:\n");
					break;
		case  EXOSIP_CALL_MESSAGE_SERVERFAILURE:
		printf("EXOSIP_CALL_MESSAGE_SERVERFAILURE:\n");
					break;
		case  EXOSIP_CALL_MESSAGE_GLOBALFAILURE:
		printf("EXOSIP_CALL_MESSAGE_GLOBALFAILURE:\n");
					break;
		case  EXOSIP_CALL_CLOSED:
		printf("EXOSIP_CALL_CLOSED:\n");
					break;
		case  EXOSIP_CALL_RELEASED:
		printf("EXOSIP_CALL_RELEASED:\n");
					break;
				  default:
					printf("received eXosip event (type, did, cid) = (%d, %d,%d)", event->type, event->did, event->cid);
				break;
      }
      eXosip_event_free (event);
  }
}
