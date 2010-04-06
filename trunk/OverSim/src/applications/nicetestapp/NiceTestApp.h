/*
 * NiceTestApp.h
 *
 *  Created on: Feb 22, 2010
 *      Author: admin
 */

#ifndef NICETESTAPP_H_
#define NICETESTAPP_H_


#include "BaseApp.h"
#include "StatisticsCollector.h"
#include "HoangGlobalObject.h"

class NiceTestApp : public BaseApp
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
	double xw,xd;

	//timers
    cMessage* changeXdTimer;
    simtime_t changeXdInterval;

    cMessage* sendDataTimer;
    cMessage* stateTimer;

    double getXw(){return xw;};
    double getXd(){return xd;};
    void setXw(double xw_var){ xw = xw_var ;};
    void setXd(double xd_var){ xd = xd_var ;};

    void generateXd();

    struct dataPacket{
    	int id;
    	simtime_t time;
    	int length;
    };

    struct rateData{
		int rate;
		int length;
	};

    dataPacket* videoPacket;
    dataPacket* sd;
    //dataPacket* rd;
    dataPacket* buf;
    int videoSize;

    rateData* periodicData;
    int dataSize;

    cMessage* sendDataPeriodTimer;
    simtime_t sendDataPeriod;


    simtime_t beginSendDataTime;
    int byteSent;
};

#endif /* NICETESTAPP_H_ */
