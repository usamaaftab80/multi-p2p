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
private:
	int portListen;
	int currentSentPacketId;
public :
	EXOSIP(int PORT_LISTEN_var, int ueIDbegin_var, string cardEthernetIP_var);

	void setCurrentSentPacketId(int value){currentSentPacketId = value;};
//	~EXOSIP();

	void pollBufferOfNode(int nodeID, string &msgBody);
	int initsip(void* n, int nodeID);
	int sendmessage(char *typeMessage ,char *uriTo, char *uriFrom, char *buf);

};
#endif /* EXOSIP_H_ */
