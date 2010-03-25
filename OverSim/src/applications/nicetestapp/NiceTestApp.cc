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

#include "TransportAddress.h"

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

    const char *statsModulePath = par("statsModulePath");
	cModule *modp = simulation.getModuleByPath(statsModulePath);
	stats = check_and_cast<StatisticsCollector *>(modp);

	const char *globalModulePath = par("globalModulePath");
	cModule *modp2 = simulation.getModuleByPath(globalModulePath);
	global = check_and_cast<HoangGlobalObject *>(modp2);


    sendPeriod = par("sendPeriod");
    numToSend = par("numToSend");
    //largestKey = par("largestKey");
    isSender = par("isSender");
    stressPeriod = par("stressPeriod");


    if(isSender){
        cout << "senderrrrrrr " << thisNode.getAddress() << endl;
        TransportAddress *ta = new TransportAddress (thisNode.getAddress(), 1024, TransportAddress::UNKNOWN_NAT);
        global->setSourceSenderAddress(*ta);
        cout << "global ::: sender ::: " << global->getSourceSenderAddress() << endl;
        globalStatistics->recordOutVector("HOANG num sender",1);
    }

    // initialize our statictics variables

    numSent = 0;
    numReceived = 0;
    byteSent = 0;
    videoSize = 0;

	lastPacketTime = simTime().dbl();

    // tell the GUI to display our variables

    WATCH(numSent);
    WATCH(numReceived);


    if(isSender){
    	// start our timer!

		stateTimer = new cMessage("NiceTestAppTimer");
		scheduleAt(simTime() + sendPeriod, stateTimer);

		stressTimer = new cMessage("stressTimer");
		//scheduleAt(simTime() + stressPeriod, stressTimer);


    	/* read trace file */
		FILE * pFile;
		float time;
		unsigned int id;
		unsigned int length;
		char type;
		unsigned int frag;

		const char* traceFileName = par("traceFileName");

		pFile = fopen (traceFileName , "r");
		if (pFile == NULL) perror ("Error opening file");

		while ( ! feof (pFile) ){
			//fscanf(pFile , "%16f id %16d udp %16d\n",&time,&id,&length);
			fscanf(pFile , "%u\t%c\t%u\t%u\t%f\n", &id, &type, &length, &frag, &time);
			videoSize++;
		}
		//cout << "There are " << videoSize << " packet in trace file" << endl;

		videoPacket = new dataPacket[videoSize];

		//videoPacket = (dataPacket*)malloc(i+1);

		cout << "There are " << videoSize << " packet in trace file" << endl;

		rewind(pFile);

		while ( ! feof (pFile) ){
			//fscanf(pFile , "%16f id %16d udp %16d\n",&time,&id,&length);
			fscanf(pFile , "%u\t%c\t%u\t%u\t%f\n", &id, &type, &length, &frag, &time);
			videoPacket[id-1].time = time;
			videoPacket[id-1].length = length;
			//cout << id << "  " << time << "   " << length << endl;
		}
		cout << "Read trace done" << endl;

		fclose(pFile);

		cout << "Close trace file done" << endl;

		/* init XD and schedule */

		//xd = dblrand() * 1.5;

    	//generateXd();

		//changeXdInterval = par("changeXdInterval");
		changeXdInterval = 10;
		changeXdTimer = new cMessage("changeXdTimer");

		sendDataTimer = new cMessage("sendDataTimer");

    }
    bindToPort(2000);
    //cout << "Init App done" << endl;
}


// finish is called when the module is being destroyed

void NiceTestApp::finishApp()
{

    // first we'll delete our timer

    //delete timerMsg;
/*	if(isSender){
		//cancelAndDelete(timerMsg);
		cancelAndDelete(changeXdTimer);
		cancelAndDelete(sendDataTimer);
		//cancelAndDelete(stressTimer);
	}*/

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

        scheduleAt(simTime() + sendPeriod, stateTimer); // reschedule our message

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) {
        	return;

        } else {
        	/* Begin send data timer*/
        	cancelAndDelete(stateTimer);

        	if(isSender){
        		cout << "Init network finish at " << simTime() << endl;
				beginSendDataTime = simTime() + par("timeSendAfterInit");
				scheduleAt(beginSendDataTime + videoPacket[0].time, sendDataTimer);
				generateXd();
				scheduleAt(simTime() + changeXdInterval, changeXdTimer);
				scheduleAt(simTime() + stressPeriod, stressTimer);
				//numSent++;
        	}

        }

    } else if (msg->isName("sendDataTimer")){

    	/* check finish sending video */
        if(numSent > videoSize-1){
        	cout << "Truyennnnnnnnnnnnnn hetttttttttt video packet at " << simTime() << endl;
        	delete [] videoPacket;

        	cancelAndDelete(sendDataTimer);
        	cancelAndDelete(changeXdTimer);
        	cancelAndDelete(stressTimer);
        	endSimulation();
        	return;
        }

    	scheduleAt(beginSendDataTime + videoPacket[numSent].time, sendDataTimer);
		//hoang
		// record AvgLinkStress of previous packet
		// and reset StressSum counter
		// before send a new packet

		//stats->recordLinkStress();

		//stats->resetStressSum();

    	/*if(videoPacket[numSent+1].time > videoPacket[numSent].time){ //prepare to send a new packet at greater time
    		global->recordStress();
    		global->resetStressSum();
    	}*/

		//send data

		NiceTestAppMsg *pingPongPkt;                            // the message we'll send
		pingPongPkt = new NiceTestAppMsg();

		//cout << "IP " << thisNode.getAddress() << " created a msg at " << simTime()<< endl;

		pingPongPkt->setType(MYMSG_PING);                  // set the message type to PING
		pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own

		//string data = (thisNode.getAddress()).str() + " HOANG ";
		//char* data = strcat((thisNode.getAddress()).str()," HOANG ");

		/*char* data = " HOANG ";
		pingPongPkt->setData(data);*/

		int length = videoPacket[numSent].length;

		pingPongPkt->setByteLength(length);

		byteSent += length;

		if(videoPacket[numSent].length > videoPacket[numSent-1].length){

			//double thisPacketTime = simTime().dbl(); //or read from trace file

			//xw = (double)length * 8 / (thisPacketTime - lastPacketTime); //datarate for this packet (bit/s)

			simtime_t timeRange = videoPacket[numSent].length - videoPacket[numSent-1].length;

			xw = byteSent * 8 / timeRange;

			//cout << "generate packet length=" << length << " xw=" << xw << " timeperiod=" << thisPacketTime - lastPacketTime << "s" << endl;

			stats->setXw(xw);

			//stats->resetStressSum();

			byteSent = 0;
		}

		//hoang
		encapAndSendCbrAppMsg(pingPongPkt);

    } else if (msg->isName("changeXdTimer")){

    	if (underlayConfigurator->isInInitPhase()) return;

    	scheduleAt(simTime() + changeXdInterval, changeXdTimer);

    	generateXd();

    	cout << " vua change xd=" << xd << endl;

    } else if (msg->isName("stressTimer")){

    	//if(isSender){

    	scheduleAt(simTime() + stressPeriod, stressTimer);

    	stats->recordLinkStress();

    	stats->resetStressSum();

    	global->recordStress();

    	global->resetStressSum();

    	//send stress measurement packet

		NiceTestAppMsg *stressPkt;                            // the message we'll send
		stressPkt = new NiceTestAppMsg();

		/*int maxByte = 1336;
		int length = intrand(maxByte); //random length
		//cout << "length=" << length << endl;
		while (!(length > 0)){
			length = intrand(maxByte);
		}
		stressPkt->setByteLength(length);*/

		stressPkt->setSenderAddress(thisNode);   // set the sender address to our own

		encapAndSendCbrAppMsg(stressPkt,"HOANG_STRESS");

    	//}

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

            simtime_t eed = simTime() - msg->getCreationTime();

            globalStatistics->recordOutVector("HOANG e2e delay",eed.dbl());

            globalStatistics->recordOutVector("HOANG ALM Hop count",hopCount);

            /*cPacket* hoang_msg = cbrMsg->decapsulate();

            if(dynamic_cast<NiceTestAppMsg*> (hoang_msg)){

                NiceTestAppMsg* myMsg = check_and_cast<NiceTestAppMsg*>(hoang_msg);

                if (myMsg->getType() == MYMSG_PING) {

                    numReceived++;

                    globalStatistics->recordOutVector("HOANG numReceive cbrMsg",1);

                    globalStatistics->recordOutVector("HOANG ALM Hop count",hopCount);

                   //myMsg->setType(MYMSG_PONG);                         // change type
                   //hoang
                   std::cout << thisNode.getAddress() << ": Got packet from " << myMsg->getSenderAddress().getAddress()
                   << " .Last hop: " << cbrMsg->getLastHop()
                   << " data content: " << myMsg->getData() << endl;

                   //myMsg->setSenderAddress(thisNode);
                   //sendMessageToUDP(myMsg->getSenderAddress(), myMsg); // send it back to its owner

                   //hoang
                   simtime_t eed = simTime() - msg->getCreationTime();
                   //cout << "simTime " << simTime() << " creationTime " << msg->getCreationTime() << endl;

                   globalStatistics->recordOutVector("HOANG e2e delay",eed.dbl());

                   //globalStatistics->addStdDev("HOANG e2e delay",eed.dbl());

                }

                delete myMsg; //no need anymore if not forward or reply it

            }*/

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

        //cout << "Vua send packet: length=" << videoPacket[numSent].length << " numSent=" << numSent << " || xw=" << xw << " at " << simTime() << endl;

        //if(!( videoPacket[numSent+1].time > 0 )){
        //if( videoPacket[numSent+1] == NULL){

        RECORD_STATS(numSent++);                       // update statistics

    }

}


void NiceTestApp::encapAndSendCbrAppMsg(cMessage* msg, const char* name)
{
    if(dynamic_cast<NiceTestAppMsg*>(msg)){
        NiceTestAppMsg* pingPongPkt = check_and_cast<NiceTestAppMsg*>(msg);

        CbrAppMessage *cbrMsg;
        cbrMsg = new CbrAppMessage();

        cbrMsg->setCommand(0); //CBR_DATA
        cbrMsg->setName(name);
        cbrMsg->setSrcNode(thisNode.getAddress());

        cbrMsg->encapsulate(pingPongPkt);

        send(cbrMsg,"to_lowerTier");

    }

}


void NiceTestApp::generateXd()
{
	cModule* thisOverlayTerminal = check_and_cast<cModule*>(getParentModule()->getParentModule());

	//BaseOverlay* overlay = check_and_cast<BaseOverlay*> (thisOverlayTerminal->getModuleByRelativePath("**.overlayType"));

	cCompoundModule* overlayModule = check_and_cast<cCompoundModule*> (thisOverlayTerminal->getSubmodule("overlay"));

	//cout << "overlayModule full name: " << overlayModule->getFullName() << endl;

	BaseOverlay* overlay = check_and_cast<BaseOverlay*> (overlayModule->getSubmodule("nice"));

	double kd_var = overlay->getMaxKd();

	double xd_var = dblrand() * 1.5; //random double in range [0,1.5)

/*
	if(!(kd_var < xd_var)){
		xd_var = kd_var + 0.001;
	}
*/

	while(!(xd_var > kd_var)){

		std::cout << "xd=" << xd_var << " < maxKd=" << kd_var << endl;

		xd_var = dblrand() * 1.5;

	}

	stats->setXd(xd_var);

	cout << "Vua change xd=" << xd_var << endl;

	xd = xd_var;
}
