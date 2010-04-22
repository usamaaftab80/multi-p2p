//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#ifndef MULTISENDERAPP_H_
#define MULTISENDERAPP_H_

#include "BaseApp.h"
#include "StatisticsCollector.h"
#include "HoangGlobalObject.h"

typedef struct dataPacket{
			int id;
			simtime_t time;
			int length;
		} dataPacket;


typedef std::vector<dataPacket> dataPacketVector;

class MultiSenderApp : public BaseApp
{
    // module parameters
    simtime_t sendPeriod;     // we'll store the "sendPeriod" parameter here

    bool isSender;

    // statistics
    int numSent;              //number of packets sent
    int numReceived;          //number of packets received

    StatisticsCollector *stats;
    HoangGlobalObject *global;

    // our timer
    cMessage *timerMsg;

    // application routines
    void initializeApp(int stage);                 // called when the module is being created
    void finishApp();                              // called when the module is about to be destroyed
    void handleTimerEvent(cMessage* msg);          // called when we received a timer message

    void handleLowerMessage(cMessage* msg);          // called when we receive a message from lowertier

    void encapAndSendCbrAppMsg(cMessage* msg);

	double lastPacketTime;

	//timers
    cMessage* sendDataTimer;
    cMessage* stateTimer;

private:

	uint16_t nodeID;


    dataPacket* sd;

    std::map <uint16_t, dataPacketVector> buf;

    int videoSize;
    uint16_t loopTimes;

    int dataSize;

    simtime_t beginSendDataTime;
    int byteSent;

    bool beginSend;

public:
	uint16 getNodeID(){return nodeID;};


};

#endif /* MULTISENDERAPP_H_ */
