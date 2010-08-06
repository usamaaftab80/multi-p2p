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
	void sendSipMessageTo(string uriTo_var, string body);
	void sendSipMessageToAS(string body);

};
#endif /* EXOSIP_H_ */
