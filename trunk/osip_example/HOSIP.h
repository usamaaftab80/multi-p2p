/*
 * HOSIP.h
 *
 *  Created on: Jul 20, 2010
 *      Author: admin
 */

#ifndef HOSIP_H_
#define HOSIP_H_

class HOSIP {

public:

	/*int networkInit();

//	int networkMsgSend(int sock,char *msgP,int msgLen,char *host,int port);

//	int networkMsgRecv(int sock,char *msgP,int msgLen,struct sockaddr_in *address);

//	int SendMsg(osip_transaction_t *tr,osip_message_t *sip, char *host,int port, int out_socket);

	void setCallbacks(osip_t *osip);

	int AddSupportedMethods(osip_message_t *msgPtr);

	int bSipSend(osip_message_t *msgPtr, osip_fsm_type_t transactionType);

	int bSipRegisterBuild(osip_message_t **regMsgPtrPtr);

	int bSipRegister();

	void processSipMsg();*/

	int principe();
};

#endif /* HOSIP_H_ */
