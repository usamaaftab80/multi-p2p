/*
 * EXOSIP.h
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_H_
#define EXOSIP_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <syslog.h>
#include <pthread.h>
#include <eXosip2/eXosip.h>

class EXOSIP {


public :
	//EXOSIP();
	//~EXOSIP( );
	int initsip();
	int sendmessage(osip_message_t *message, char *typeMessage ,char *uriTo, char *uriFrom, char *buf);
	void *listensip(void *parameters);
	void wait();

};

#endif /* EXOSIP_H_ */
