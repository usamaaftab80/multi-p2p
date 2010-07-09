/*
 * ConferenceApp.cpp
 *
 *  Created on: Jun 21, 2010
 *      Author: admin
 */

#include "ConferenceApp.h"

#include <sstream>
#include <stdio.h>
#include <string.h>

template <class T>
inline std::string to_string (const T& t)
{
    std::stringstream ss;
    ss << t;
    return ss.str();
}

#include "UnderlayConfigurator.h"
#include "GlobalStatistics.h"
#include "ConferenceAppMsg_m.h"

#include  "NiceMessage_m.h"

#include "TransportAddress.h"

using namespace std;

//Define_Module(BaseApp);

Define_Module(ConferenceApp);

// initializeApp is called when the module is being created.
// Use this function instead of the constructor for initializing variables.

void ConferenceApp::initializeApp(int stage)
{

    // initializeApp will be called twice, each with a different stage.
    // stage can be either MIN_STAGE_APP (this module is being created), or MAX_STAGE_APP (all modules were created).
    // We only care about MIN_STAGE_APP here.

    if (stage != MIN_STAGE_APP) return;

	//nodeID indexing
    const char *globalModulePath = par("globalModulePath");
	cModule *modp2 = simulation.getModuleByPath(globalModulePath);
	global = check_and_cast<HoangGlobalObject *>(modp2);

	nodeID = global->getNumNodeJoined();

	cModule* thisOverlayTerminal = check_and_cast<cModule*>(getParentModule()->getParentModule());
	cCompoundModule* overlayModule = check_and_cast<cCompoundModule*> (thisOverlayTerminal->getSubmodule("overlay"));
	BaseOverlay* overlay = check_and_cast<BaseOverlay*> (overlayModule->getSubmodule("nice"));
	overlay->setNodeID(nodeID);

	global->incNumNodeJoined();

	/* open files to write: Sent_{NodeID}.txt, Received_{NodeID}.txt */

//	string str1 = "sent_" + to_string(nodeID);
//	sentFile = fopen (str1.c_str() , "w");

//	string str2 = "received_" + to_string(nodeID);
//	receivedFile = fopen (str2.c_str() , "w");

	/* get parameters from config file */
    stateTimerPeriod = 1;

//    loopTimes = par("loopTimes");

    isSender = par("isSender");

    beginSend = false;

    numSent = 0;

    totalNumSent = 0;

    currentLoop = 0;

    videoSize = 0;

    if(isSender){
//        cout << "senderrrrrrr " << thisNode.getAddress() << " nodeID " << nodeID << endl;

    	/* read trace file */
		FILE * pFile;

		float time;
		uint id;
		uint length;
		uint lengthUDP;

		const char* sdFile = par("sdFile");
		uint P_sid; //number of packet in the dump file
		const char * format;

		switch (nodeID % 4){
			case 2:
				sdFile = "sd_paris";
				format = "12548667%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 192.168.0.12.41674 > 157.159.16.152.12346: UDP, length %d\n"; //sd_paris:32632
				P_sid = 32632;
				loopTimes = 1;
				break;
			case 0:
				sdFile = "sd_snr";
				format = "12720243%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.196.49355 > 192.168.1.2.12346: UDP, length %d\n"; //sd_snr:1200
				P_sid = 1200;
				loopTimes = 27;
				break;
//			case 1:
//				sdFile = "sd_sl_svc";
//				format = "127064935%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.52.56586 > 157.159.16.50.12346: UDP, length %d\n"; //sd_sl_svc:293
//				P_sid = 293;
//				loopTimes = 112;
//				break;
			case 3:
				sdFile = "sd_combined_svc";
				format = "127064915%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.52.57994 > 157.159.16.50.12346: UDP, length %d\n"; //sd_combined_svc:1696
				P_sid = 1696;
				loopTimes = 20;
				break;
			case 1:
				sdFile = "sd_spatial";
				format = "12549485%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 192.168.0.12.53144 > 157.159.16.152.12346: UDP, length %d\n"; //sd_spatial:4835
				P_sid = 4385;
				loopTimes = 7;
				break;
		}


/*

		if(strcmp(sdFile,"sd_paris") == 0){
			format = "12548667%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 192.168.0.12.41674 > 157.159.16.152.12346: UDP, length %d\n"; //sd_paris:32632
		}
		else if(strcmp(sdFile,"sd_snr") == 0){
			format = "12720243%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.196.49355 > 192.168.1.2.12346: UDP, length %d\n"; //sd_snr:1200
		}
		else if(strcmp(sdFile,"sd_spatial") == 0){
			format = "12549485%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 192.168.0.12.53144 > 157.159.16.152.12346: UDP, length %d\n"; //sd_spatial:4835
		}
		else if(strcmp(sdFile,"sd_combined_svc") == 0){
			format = "127064915%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.52.57994 > 157.159.16.50.12346: UDP, length %d\n"; //sd_combined_svc:1696
		}
		else if(strcmp(sdFile,"sd_sl_svc") == 0){
			format = "127064935%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.52.56586 > 157.159.16.50.12346: UDP, length %d\n"; //sd_sl_svc:293
		}

*/
		/* Read SD and write a new SD file */

		pFile = fopen (sdFile , "r");

		if (pFile == NULL) perror ("Error opening original SD file ");

		while ( ! feof (pFile) ){
			fscanf(pFile,format,&time,&id,&lengthUDP,&length);
			videoSize++;
		}
		maxDataTime = time;
		maxDataID = id;
		sd = new dataPacket [videoSize];

//		cout << "Node " << nodeID << " :There are " << videoSize << " packets in dump file" << endl;

		rewind(pFile);

		int i = 0;
		while ( ! feof (pFile) ){

			fscanf(pFile , format,&time,&id,&length);
			sd[i].time = time;
			sd[i].length = length;
			sd[i].id = i;
//			cout << "SD packet " << i << " length " << length << " at time " << time << endl;
			i++;

		}
//		cout << "Read SD done" << endl;

		fclose(pFile);

		/* Cung tru di cho smallest time de bat dau gui ngay sau 1s */

		simtime_t startTime = 1000;
		for(int i=0; i<videoSize; i++){
			if(sd[i].time < startTime){
				startTime = sd[i].time ;
			}
		}

//		startTime = startTime -1;

		for(int i=0; i<videoSize; i++){
			sd[i].time -= startTime;
		}

		/* Sap xep lai mang sd theo time tang dan */
		dataPacket temp;   // holding variable

		for (int i=0; i< (videoSize -1); i++)    // element to be compared
		{
			for(int j = (i+1); j < videoSize; j++)   // rest of the elements
			{
				if (sd[i].time > sd[j].time)          // ascending order
			    {
					temp = sd[i];          // swap
					sd[i] = sd[j];
					sd[j] = temp;
			    }
			}
		}

		/* schedule */

		sendDataTimer = new cMessage("sendDataTimer");

		stateTimer = new cMessage("stateTimer");
		scheduleAt(simTime() + stateTimerPeriod, stateTimer);

    }
    bindToPort(2000);
    cout << "Node " << nodeID << " IP " << thisNode.getAddress() << " APP init done " << endl;
}


// finish is called when the module is being destroyed

void ConferenceApp::finishApp()
{

}

ConferenceApp::~ConferenceApp()
{
//	fclose(receivedFile);
//	fclose(sentFile);
}


// handleTimerEvent is called when a timer event triggers

void ConferenceApp::handleTimerEvent(cMessage* msg)
{

    if (msg->isName("stateTimer")) {    // is this our timer?

        scheduleAt(simTime() + stateTimerPeriod, stateTimer); // reschedule our message

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) {

        	return;

        } else {
        	/*if(isSender){

				if((global->getNumNodeJoined() > 1) && (numSent<1) && (!beginSend)){
					cout<< "Node " << nodeID << " begin send data at "<< simTime() << " co " << global->getNumNodeJoined() << " peers trong mang" << endl;

					beginSendDataTime = simTime();

					scheduleAt(beginSendDataTime + sd[0].time, sendDataTimer);

					beginSend = true;

				}
			}
*/
        	cancelAndDelete(stateTimer);

        	beginSendDataTime = simTime();

			scheduleAt(beginSendDataTime + sd[0].time, sendDataTimer);

			cout<< "Node " << nodeID << " begin send data at "<< simTime() << endl;

        }

    } else if (msg->isName("sendDataTimer")){

    	/* check finish sending video */

//        if(!(currentLoop < loopTimes)){
    	if(totalNumSent > videoSize*loopTimes - 1){
        	cout << "Node " << nodeID << " Truyennnnnnnnnnnn hettttttttttttttt " << totalNumSent << " video packets of "<< currentLoop << " loopTimes " << " at " << simTime() << endl;

        	global->incNumNodeSentDone();

        	delete [] sd;

        	cancelAndDelete(sendDataTimer);

        	return;
        }

        else if(numSent < videoSize){

			scheduleAt(beginSendDataTime + sd[numSent].time, sendDataTimer);

			/* send data */

			ConferenceAppMsg *pingPongPkt;                            // the message we'll send
			pingPongPkt = new ConferenceAppMsg();

			//cout << "IP " << thisNode.getAddress() << " created a msg at " << simTime()<< endl;

			pingPongPkt->setType(MYMSG_PING);

			pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own

			pingPongPkt->setSenderID(nodeID);

			int length = sd[numSent].length;

			pingPongPkt->setByteLength(length);

//			pingPongPkt->setId(maxDataID * currentLoop + sd[numSent].id);
			pingPongPkt->setId(totalNumSent);

			//hoang
			encapAndSendCbrAppMsg(pingPongPkt);

			//format:  Time		pid
	//		const char * format = "%f\t%d\n";
	//		fprintf(sentFile,format,simTime().dbl(),sd[numSent].id);
        }

        else {

//        	if(currentLoop%10 == 0){
//        		cout << "node " << nodeID << " truyen het " << numSent << " packets cua lan " << currentLoop << endl;
//        	}

        	numSent = 0;

        	currentLoop++;

        	beginSendDataTime = simTime();

        	scheduleAt(beginSendDataTime + sd[numSent].time, sendDataTimer);
        }

    }

    else
        delete msg; // who knows what this packet is?
}


// hoang: called when we receive a message from lower tier
// (handle overlay message)
// this is end-point of an CBRdata msg
void ConferenceApp::handleLowerMessage(cMessage* msg)
{

    if (dynamic_cast<CbrAppMessage*>(msg)){

        CbrAppMessage* cbrMsg =  check_and_cast<CbrAppMessage*>(msg);

        int hopCount = cbrMsg->getHopCount();

        if (cbrMsg->getCommand() == CBR_DATA) {

            cbrMsg->setCommand(-1); //not CBR_DATA anymore, prevent NiceOwnMessage

            global->recordReceived(nodeID,cbrMsg->getNodeID(),cbrMsg->getSeqNo(),hopCount);

            /* data handle */

            /*cPacket* hoang_msg = cbrMsg->decapsulate();

			if(dynamic_cast<ConferenceAppMsg*> (hoang_msg)){

				ConferenceAppMsg* myMsg = check_and_cast<ConferenceAppMsg*>(hoang_msg);

				if (myMsg->getType() == MYMSG_PING) {
					//write log file: nodeID receives a packet (sid,pid) at simTime()
					//write to: Received_{NodeID}.txt
					//format:  Time		sid		pid		hopcount	ttl
//					const char * format = "%f\t%d\t%d\t%d\n";
//					fprintf(receivedFile,format,simTime().dbl(),myMsg->getSenderID(),myMsg->getId(),hopCount);
					global->recordReceived(nodeID,myMsg->getSenderID(),myMsg->getId(),hopCount);

				}
				delete myMsg; //no need anymore if not forward or reply it

			}*/

        }

    }

    delete msg;
}


//hoangnq: encapsulate data packet into CBRappMsg to send
//down to the lower layer (overlay)
void ConferenceApp::encapAndSendCbrAppMsg(cMessage* msg)
{
    if(dynamic_cast<ConferenceAppMsg*>(msg)){
        ConferenceAppMsg* pingPongPkt = check_and_cast<ConferenceAppMsg*>(msg);

        CbrAppMessage *cbrMsg;
        cbrMsg = new CbrAppMessage();

        cbrMsg->setCommand(0); //CBR_DATA

//        cbrMsg->setSeqNo(maxDataID * currentLoop + sd[numSent].id);

        cbrMsg->setSeqNo(totalNumSent);

        cbrMsg->setNodeID(nodeID);

        cbrMsg->setSrcNode(thisNode.getAddress());

        cbrMsg->encapsulate(pingPongPkt);

        send(cbrMsg,"to_lowerTier");

        numSent++;

        totalNumSent++;

    }

}
