/*
 * EXOSIP.h
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_H_
#define EXOSIP_H_

//#include "Nice.h"

class EXOSIP {

//private:
//	static Nice * nicePointer;
public :
	EXOSIP();
//	EXOSIP(Nice* nn);
	virtual ~EXOSIP();
//	void initsip(Nice* nn, int nodeID);
	int sendmessage(char *typeMessage ,char *uriTo, char *uriFrom, char *buf);
	static void *listensip(void *parameters);
	void wait();
	void handleMESSAGE();

};
//static Nice * nicePointer[10];

#endif /* EXOSIP_H_ */
