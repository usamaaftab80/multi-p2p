/*
 * main3.cc
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
#include <eXosip2/eX_message.h>

int main(){
	eXosip_init();
	osip_message_t* message; //= eXosip_message ("sip:mikko at 192.168.0.1","sip:mikko at 192.168.0.2", NULL, "Hello");
	const char *to = "157.159.16.91";
	const char *from = "157.159.16.51";
	int i;
	i = eXosip_message_build_request (&message, "MESSAGE", to, from, NULL);
	if (i != 0)
	{
	    return -1;
	}
	osip_message_set_expires (message, "120");
	const char * buf = "hoang";
	osip_message_set_body (message, buf, strlen (buf));
	osip_message_set_content_type (message, "text/plain");
	eXosip_lock ();
	i = eXosip_message_send_request (message);
	eXosip_unlock ();

	/*For 200 OK :-
	     int i;

	      if (je->tid > 0)
	      {
	       osip_message_t *answer;
	       eXosip_lock ();
	       i = eXosip_message_build_answer (je->tid, 200, &answer);
	        if (i == 0)
	        {
	         eXosip_message_send_answer (je->tid, 200, answer);
	        }
	        eXosip_unlock ();
	      }*/

}
