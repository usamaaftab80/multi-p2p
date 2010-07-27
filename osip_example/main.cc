/*
 * main.cc
 *
 *  Created on: Jul 20, 2010
 *      Author: admin
 */
#include "EXOSIP.h"
#include "pthread.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	//HOSIP * o = new HOSIP();
	//o->principe();
	EXOSIP *o = new EXOSIP();
	int i = 0;
	i = o->initsip();
	o->wait();
	osip_message_t *message;
	o->sendmessage(message,"MESSAGE","<sip:root@157.159.16.91:5080>", "<sip:hoang@157.159.16.160:5080>","abc");
//	printf("ngon vl");
	while(1);

	//int i = o->initsip();
	//int i = o->initsip();
	//o->initsip();
	//pthread_t thread_id;
	//thread_id = (pthread_t)malloc(sizeof(pthread_t));
	//pthread_create(&thread_id, NULL, &(o->listen), NULL);
	//pthread_create(&thread_id,NULL, &o->listen(),NULL);
	return 0;
}
