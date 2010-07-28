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

//private:
//	static Nice * nicePointer;
public :
	EXOSIP();
//	EXOSIP(Nice* nn);
	virtual ~EXOSIP();
	int initsip(Nice* nn);
	int sendmessage(char *typeMessage ,char *uriTo, char *uriFrom, char *buf);
	static void *listensip(void *parameters);
	void wait();
	void handleMESSAGE();

};
static Nice * nicePointer = NULL;
}; //namespace
#endif /* EXOSIP_H_ */
