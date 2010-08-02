/*
 * EXOSIP.h
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_H_
#define EXOSIP_H_
#include <string>
using namespace std;

class EXOSIP {

public :
	EXOSIP();
//	~EXOSIP();
//	void wait();
	void pollBufferOfNode(int nodeID, string &msgBody);
	int initsip(void* n, int nodeID);
	int sendmessage(char *typeMessage ,char *uriTo, char *uriFrom, char *buf);
	void * nicePointer[100];

//	void handleMESSAGE(int ueID,char* msgBody);
//	void *listensip(void *parameters);
//	void wait();
//	void handleMESSAGE(int ueID, char* msgBody);


};

#endif /* EXOSIP_H_ */
