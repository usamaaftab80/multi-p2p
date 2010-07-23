/*
 * init.cc
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

int main(){
	printf("main\n");
	int i;
//	TRACE_INITIALIZE (6, stdout);
	i=eXosip_init();
	printf("eXosip_init\n");
	if (i!=0)
		return -1;
	i = eXosip_listen_addr (IPPROTO_UDP, NULL, 5080, AF_INET, 0);
	if (i!=0)
	{
	eXosip_quit();
	fprintf (stderr, "could not initialize transport layer\n");
	return -1;
	}



	eXosip_event_t *event;
	for (;;)
	{
		event = eXosip_event_wait (0, 50);
		eXosip_lock();
		eXosip_automatic_action ();

		osip_message_t *info;
			char dtmf_body[1000];
		//	int i;
			eXosip_lock ();
			i = eXosip_call_build_info (event->did, &info);
//			printf("eXosip_call_build_info\n");
			i = eXosip_call_build_info (1111, &info);
			if (i == 0)
			{
				snprintf (dtmf_body, 999, "Signal=%c\r\nDuration=250\r\n", 99);
				osip_message_set_content_type (info, "application/dtmf-relay");
				osip_message_set_body (info, dtmf_body, strlen (dtmf_body));
				i = eXosip_call_send_request (event->did, info);
			}
			eXosip_unlock ();
			printf("send info\n");

		eXosip_unlock();
		if (event == NULL)
		break;
//		if (!(event = eXosip_event_wait (0, 0))) {
//		  usleep (10000);
//		  continue;
//		}

		switch(event->type){
			case EXOSIP_MESSAGE_NEW:
				printf("EXOSIP_MESSAGE_NEW\n");
				break;
			case EXOSIP_CALL_ACK:
				break;
			case EXOSIP_CALL_ANSWERED:
				break;
			default:
				printf("received eXosip event (type, did, cid) = (%d, %d,%d)", event->type, event->did, event->cid);
				break;
		}


		eXosip_event_free(event);
	}
}
