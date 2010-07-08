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

typedef struct dataPacket{
			uint id;
			simtime_t time;
			uint length;
		} dataPacket;


typedef std::vector<dataPacket> dataPacketVector;

class ConferenceApp : public BaseApp
{
	~ConferenceApp();

    // module parameters
    simtime_t stateTimerPeriod;     // we'll store the "sendPeriod" parameter here

    bool isSender;

    HoangGlobalObject *global;

    // statistics
    int numSent;              //number of packets sent
    int numReceived;          //number of packets received

    // our timer
    cMessage *timerMsg;

    // application routines
    void initializeApp(int stage);                 // called when the module is being created
    void finishApp();                              // called when the module is about to be destroyed
    void handleTimerEvent(cMessage* msg);          // called when we received a timer message

    void handleLowerMessage(cMessage* msg);          // called when we receive a message from lowertier

    void encapAndSendCbrAppMsg(cMessage* msg);

	//timers
    cMessage* sendDataTimer;
    cMessage* stateTimer;

private:

	FILE * sentFile;
	FILE * receivedFile;

	uint16_t nodeID;

    dataPacket* sd;

    std::map <uint16_t, dataPacketVector> buf;

    int videoSize;
    uint16_t loopTimes;

    int dataSize;

    simtime_t beginSendDataTime;
    int byteSent;

    bool beginSend;

    bool NICE_is_ready;

public:
	uint16 getNodeID(){return nodeID;};
	void set_NICE_ready(){NICE_is_ready = true;};


};


#endif /* CONFERENCEAPP_H_ */
