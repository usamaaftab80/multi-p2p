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
	//int i = o->initsip();
	//int i = o->initsip();
	//o->initsip();
	//pthread_t thread_id;
	//thread_id = (pthread_t)malloc(sizeof(pthread_t));
	//pthread_create(&thread_id, NULL, &(o->listen), NULL);
	//pthread_create(&thread_id,NULL, &o->listen(),NULL);
	return 0;
}
