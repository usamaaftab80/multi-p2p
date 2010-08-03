/*
 * ConferenceApp.h
 *
 *  Created on: Jun 21, 2010
 *      Author: admin
 */

#ifndef CONFERENCEAPP_H_
#define CONFERENCEAPP_H_

#include "BaseApp.h"
#include "HoangGlobalObject.h"
#include "CommonMessages_m.h"

typedef struct dataPacket{
			uint id;
			simtime_t time;
			uint length;
		} dataPacket;

class ConferenceApp : public BaseApp
{

    bool isSender;

    HoangGlobalObject *global;

    // statistics
    int numSent;              //number of packets sent
    int numReceived;          //number of packets received

    // application routines
    void initializeApp(int stage);                 // called when the module is being created
    void finishApp();                              // called when the module is about to be destroyed
    void handleTimerEvent(cMessage* msg);          // called when we received a timer message

    void handleLowerMessage(cMessage* msg);          // called when we receive a message from lowertier

    void encapAndSendCbrAppMsg(cMessage* msg);

	//timers
    cMessage* sendDataTimer;
    simtime_t sendDataPeriod;

    cMessage* stateTimer;
    simtime_t stateTimerPeriod;

private:

	uint16_t nodeID;

    dataPacket* sd;

    int videoSize;
    uint16_t loopTimes;

    int dataSize;

    simtime_t beginSendDataTime;
    int byteSent;
    int totalNumSent;

    bool beginSend;

    int currentLoop;

public:
	uint16 getNodeID(){return nodeID;};


};


#endif /* CONFERENCEAPP_H_ */
