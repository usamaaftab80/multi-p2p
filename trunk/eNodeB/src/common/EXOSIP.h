/*
 * EXOSIP.h
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_H_
#define EXOSIP_H_

#include "BaseOverlay.h"


class EXOSIP {

public :
	EXOSIP();
	~EXOSIP();
	int initsip(BaseOverlay* n, int nodeID);
	int sendmessage(char *typeMessage ,char *uriTo, char *uriFrom, char *buf);
//	void *listensip(void *parameters);
//	void wait();
//	void handleMESSAGE(int ueID, char* msgBody);


};
static BaseOverlay * nicePointer[100];

#endif /* EXOSIP_H_ */
