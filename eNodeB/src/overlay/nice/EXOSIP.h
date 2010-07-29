/*
 * EXOSIP.h
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_H_
#define EXOSIP_H_

namespace oversim
{

class EXOSIP;

}

#include "Nice.h"

namespace oversim
{
class EXOSIP {

public :
	EXOSIP();
	~EXOSIP();
	int initsip(Nice* n, int nodeID);
	int sendmessage(char *typeMessage ,char *uriTo, char *uriFrom, char *buf);
	static void *listensip(void *parameters);
	void wait();
	static void handleMESSAGE(int nodeID);

};
static Nice * nicePointer[10];
}; //namespace
#endif /* EXOSIP_H_ */
