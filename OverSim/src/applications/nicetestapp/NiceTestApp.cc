/*
 * NiceTestApp.cc
 *
 *  Created on: Feb 22, 2010
 *      Author: admin
 */

#include <sstream>

template <class T>
inline std::string to_string (const T& t)
{
    std::stringstream ss;
    ss << t;
    return ss.str();
}

#include "NiceTestApp.h"
#include "UnderlayConfigurator.h"
#include "GlobalStatistics.h"
#include "NiceTestAppMsg_m.h"
#include "IPDatagram_m.h"

#include <crng.h>

#include  "NiceMessage_m.h"



#include <string>

using namespace std;

//Define_Module(BaseApp);

Define_Module(NiceTestApp);

// initializeApp is called when the module is being created.
// Use this function instead of the constructor for initializing variables.

void NiceTestApp::initializeApp(int stage)
{

    // initializeApp will be called twice, each with a different stage.
    // stage can be either MIN_STAGE_APP (this module is being created), or MAX_STAGE_APP (all modules were created).
    // We only care about MIN_STAGE_APP here.

    if (stage != MIN_STAGE_APP) return;

    // copy the module parameter values to our own variables

    sendPeriod = par("sendPeriod");
    numToSend = par("numToSend");
    //largestKey = par("largestKey");
    isSender = par("isSender");

    if(isSender){
        cout << "senderrrrrrr " << thisNode.getAddress() << endl;
        globalStatistics->recordOutVector("HOANG num sender",1);
    }


    //int maxNode = par("**.targetOverlayTerminalNum");

    /*int maxNode = 128;
    int random = intrand(maxNode);
    //cout << "random=" << random << endl;
    while (!(random > 0)){
        random = intrand(maxNode);
    }
    //cout << "random=" << random << endl;
    string srcIpAdd = "1.0.0." + to_string(random);
    //cout << " aaaaaaaaaaaaaaaaaaaaaa " << srcIpAdd << endl;*/

    //string srcIpAdd = "1.0.0.1";
    //hoang - sender specify
    /*
    if((thisNode.getAddress()).str() == srcIpAdd){
        isSender = true;
        cout << " Senderrrrrrrrrrrr " << srcIpAdd << endl;
    }*/
    // initialize our statictics variables

    numSent = 0;
    numReceived = 0;

    const char *statsModulePath = par("statsModulePath");
	cModule *modp = simulation.getModuleByPath(statsModulePath);
	stats = check_and_cast<StatisticsCollector *>(modp);

	lastPacketTime = simTime().dbl();

    // tell the GUI to display our variables

    WATCH(numSent);
    WATCH(numReceived);

    // start our timer!

    timerMsg = new cMessage("NiceTestAppTimer");
    scheduleAt(simTime() + sendPeriod, timerMsg);

    if(isSender){
    	xd = dblrand();
    	stats->setXd(xd);
		//changeXdInterval = par("changeXdInterval");
		changeXdInterval = 10;
		changeXdTimer = new cMessage("changeXdTimer");
		scheduleAt(simTime() + changeXdInterval, changeXdTimer);
    }

    bindToPort(2000);
}


// finish is called when the module is being destroyed

void NiceTestApp::finishApp()
{

    // first we'll delete our timer

    //delete timerMsg;
    cancelAndDelete(timerMsg);

    // finish() is usually used to save the module's statistics.
    // We'll use globalStatistics->addStdDev(), which will calculate min, max, mean and deviation values.
    // The first parameter is a name for the value, you can use any name you like (use a name you can find quickly!).
    // In the end, the simulator will mix together all values, from all nodes, with the same name.

    /*globalStatistics->addStdDev("HOANG NiceTestApp: Sent packets", numSent);
    globalStatistics->addStdDev("HOANG NiceTestApp: Received packets", numReceived);

    globalStatistics->recordOutVector("HOANG NiceTestApp: Sent packets", numSent);
    globalStatistics->recordOutVector("HOANG NiceTestApp: Received packets", numReceived);*/


    //globalStatistics->recordOutVector("HOANG So lan goi finishApp",1);
}


// handleTimerEvent is called when a timer event triggers

void NiceTestApp::handleTimerEvent(cMessage* msg)
{

    if (msg->isName("NiceTestAppTimer")) {    // is this our timer?

    	//cout << thisNode.getAddress() << " xd=" << xd << " xw=" << xw << endl;

        scheduleAt(simTime() + sendPeriod, timerMsg); // reschedule our message

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) return;

        if(isSender){

        	//hoang
        	// record AvgLinkStress of previous packet
        	// and reset StressSum counter
        	// before send a new packet

        	stats->recordLinkStress();

        	stats->resetStressSum();

			//send data

            for (int i = 0; i < numToSend; i++) {

                NiceTestAppMsg *pingPongPkt;                            // the message we'll send
                pingPongPkt = new NiceTestAppMsg();

                //cout << "IP " << thisNode.getAddress() << " created a msg at " << simTime()<< endl;

                pingPongPkt->setType(MYMSG_PING);                  // set the message type to PING
                pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own

                //string data = (thisNode.getAddress()).str() + " HOANG ";
                //char* data = strcat((thisNode.getAddress()).str()," HOANG ");

                /*char* data = " HOANG ";
                pingPongPkt->setData(data);*/

                RECORD_STATS(numSent++);                       // update statistics
                //cout << ". I created " << numSent << " msg" << endl;
                //hoang

                int maxByte = 1000;
                int length = intrand(maxByte); //random length
                //cout << "length=" << length << endl;
                while (!(length > 0)){
                    length = intrand(maxByte);
                }

                //pingPongPkt->setByteLength(length);
                pingPongPkt->setBitLength(length);

                double thisPacketTime = simTime().dbl(); //or read from trace file

                xw = (double)length / (thisPacketTime - lastPacketTime); //datarate for this packet

                stats->setXw(xw);

                //hoang
                encapAndSendCbrAppMsg(pingPongPkt);
            }
        }

    }

    else if (msg->isName("changeXdTimer")){

    	scheduleAt(simTime() + changeXdInterval, changeXdTimer);

    	//xd = cRNG::doubleRand(0.5);
    	xd = dblrand();

    	stats->setXd(xd);

    }

    else
        delete msg; // who knows what this packet is?
}

// handleUDPMessage is called when we receive a message from UDP.
// Unhandled or unknown packets can be safely deleted here.

void NiceTestApp::handleUDPMessage(cMessage* msg)
{
    // we are only expecting messages of type NiceTestAppMsg

    NiceTestAppMsg *myMsg = dynamic_cast<NiceTestAppMsg*>(msg);

    if (myMsg && myMsg->getType() == MYMSG_PONG) {

        cout << thisNode.getAddress() << ": Got reply!" << endl;
       //numReceived++;
    }

    // Whatever msg was, we won't need it anymore.

    delete msg;
}


// hoang: called when we receive a message from lower tier
// (handle overlay message)
// this is end-point of an CBRdata msg
void NiceTestApp::handleLowerMessage(cMessage* msg)
{

    if (dynamic_cast<CbrAppMessage*>(msg)){

        CbrAppMessage* cbrMsg =  check_and_cast<CbrAppMessage*>(msg);

        int hopCount = cbrMsg->getHopCount();

        if (cbrMsg->getCommand() == CBR_DATA) {

            cbrMsg->setCommand(-1); //not CBR_DATA anymore, prevent NiceOwnMessage

            cPacket* hoang_msg = cbrMsg->decapsulate();

            if(dynamic_cast<NiceTestAppMsg*> (hoang_msg)){

                NiceTestAppMsg* myMsg = check_and_cast<NiceTestAppMsg*>(hoang_msg);

                if (myMsg->getType() == MYMSG_PING) {

                    numReceived++;

                    globalStatistics->recordOutVector("HOANG numReceive cbrMsg",1);

                    globalStatistics->recordOutVector("HOANG ALM Hop count",hopCount);

                   //myMsg->setType(MYMSG_PONG);                         // change type
                   //hoang
                   /*std::cout << thisNode.getAddress() << ": Got packet from " << myMsg->getSenderAddress().getAddress()
                   << " .Last hop: " << cbrMsg->getLastHop()
                   << " data content: " << myMsg->getData() << endl;*/

                   //myMsg->setSenderAddress(thisNode);
                   //sendMessageToUDP(myMsg->getSenderAddress(), myMsg); // send it back to its owner

                   //hoang
                   simtime_t eed = simTime() - msg->getCreationTime();
                   //cout << "simTime " << simTime() << " creationTime " << msg->getCreationTime() << endl;

                   globalStatistics->recordOutVector("HOANG e2e delay",eed.dbl());

                   //globalStatistics->addStdDev("HOANG e2e delay",eed.dbl());

                }

                delete myMsg; //no need anymore if not forward or reply it

            }

        }

    }

    delete msg;
}

//hoangnq: encapsulate data packet into CBRappMsg to send
//down to the lower layer (overlay)
void NiceTestApp::encapAndSendCbrAppMsg(cMessage* msg)
{
    if(dynamic_cast<NiceTestAppMsg*>(msg)){
        NiceTestAppMsg* pingPongPkt = check_and_cast<NiceTestAppMsg*>(msg);

        CbrAppMessage *cbrMsg;
        cbrMsg = new CbrAppMessage();

        cbrMsg->setCommand(0); //CBR_DATA
        cbrMsg->setName("CBR_DATA");
        cbrMsg->setSrcNode(thisNode.getAddress());

        cbrMsg->encapsulate(pingPongPkt);

        lastPacketTime = simTime().dbl();

        //send(pingPongPkt,"to_lowerTier");
        //cout << "Source.IP: " << cbrMsg->getSrcNode() << " length: " << cbrMsg->getByteLength() << endl;

        //cout << "xd=" << stats->getXd() << " xw=" << stats->getXw() << endl;
        //cout << "xd=" << xd << " xw=" << xw << endl;

        send(cbrMsg,"to_lowerTier");
    }

}
