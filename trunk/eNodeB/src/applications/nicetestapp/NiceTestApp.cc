/*
 * NiceTestApp.cc
 *
 *  Created on: Feb 22, 2010
 *      Author: admin
 */

#include <sstream>
#include <algorithm>
#include <stdio.h>

#include "NiceTestApp.h"
#include "UnderlayConfigurator.h"
#include "GlobalStatistics.h"
#include "NiceTestAppMsg_m.h"

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

/*
    const char *statsModulePath = par("statsModulePath");
	cModule *modp = simulation.getModuleByPath(statsModulePath);
	stats = check_and_cast<StatisticsCollector *>(modp);
*/

	const char *globalModulePath = par("globalModulePath");
	cModule *modp2 = simulation.getModuleByPath(globalModulePath);
	global = check_and_cast<HoangGlobalObject *>(modp2);

	cModule* thisOverlayTerminal = check_and_cast<cModule*>(getParentModule()->getParentModule());
	cCompoundModule* overlayModule = check_and_cast<cCompoundModule*> (thisOverlayTerminal->getSubmodule("overlay"));
	overlay = check_and_cast<BaseOverlay*> (overlayModule->getSubmodule("nice"));
	nodeID = overlay->getNodeID();

	global->incNumNodeJoined();

    sendPeriod = par("sendPeriod");
    sendDataPeriod = par("sendDataPeriod");
    loopTimes = par("loopTimes");
    numUEpreviewed = par("numUEpreviewed");

//    isSender = false;
//    if(nodeID == 0)
    	isSender = true;

/*    if(isSender){
        cout << "senderrrrrrr " << thisNode.getAddress() << endl;

//        global->setSourceSenderAddress(thisNode.getAddress());
//
//        globalStatistics->recordOutVector("HOANG num sender",1);
    }*/

    // initialize our statictics variables

    numSent = 0;
    numReceived = 0;

    videoSize = 0;

    if(isSender){
    	beginSend = false;
    	// start state timer!

    	/* read trace file */
		FILE * pFile;
		FILE * newFile;

		float time;
		unsigned int id;
		unsigned int length;
		const char* sdFile = par("sdFile");

		const char * format;

		format = "%16f id %16d udp %16d\n";

		/* Read SD and write a new SD file*/
		pFile = fopen (sdFile , "r");
		newFile = fopen ("sd_oversim" , "w");
		if (pFile == NULL) perror ("Error opening file");

		while ( ! feof (pFile) ){
			//fscanf(pFile,format,&time,&id,&lengthUDP,&length);
			fscanf(pFile , format,&time,&id,&length);
			videoSize++;
		}

		//global->setVideoSize(videoSize);
		sd = new dataPacket [videoSize];
		rd = new dataPacket [videoSize];

		cout << "There are " << videoSize << " packets in dump file" << endl;

		rewind(pFile);

		int i = 0;
		while ( ! feof (pFile) ){
			fscanf(pFile , format,&time,&id,&length);
			sd[i].time = time;
			sd[i].length = length;
			sd[i].id = i;
			fprintf(newFile , "%-16f id %-16d udp %-16d\n",time,i,length);
			i++;

		}
		cout << "Read SD done" << endl;

		fclose(pFile);
		fclose(newFile);

		/* Read RD */
		FILE * rFile;
		const char* rdFile = par("rdFile");
		rFile = fopen (rdFile , "r");
		if (rFile == NULL) perror ("Error opening RD file");

		i = 0;
		while ( ! feof (rFile) ){

			fscanf(rFile , format,&time,&id,&length);
			rd[i].time = time;
			rd[i].length = length;
			rd[i].id = id;
			//cout << "RD packet " << i << " length " << length << " at time " << time << endl;
			i++;

		}
		cout << "Read RD done" << endl;

		fclose(rFile);

/*
		for(int i=0; i<videoSize; i++){
			sd[i].time -= sd[0].time;
			rd[i].time -= rd[0].time + 0.018;
		}
*/

		periodicData = new rateData [videoSize * loopTimes];

		/*for(int i=0; i<videoSize ; i++){
//			double offset = (rd[i].time - sd[i].time).dbl();
//			if(!(offset > 0)){
//				cout << "packet " << i << " rd time " << rd[i].time << " sd time " << sd[i].time << endl;
//			}
//			int rate = (int)(sd[i].length * 8 / offset);
			for(int j=0; j< loopTimes; j++){
//				periodicData[j*videoSize + i].rate = rate;
//				periodicData[j*videoSize + i].length = (int)(rate * sendDataPeriod.dbl());
				periodicData[j*videoSize + i].length = sd[i].length * 8;
			}

		}*/

		for(int i=0; i<videoSize ; i++){
			for(int j=0; j< loopTimes; j++){
				periodicData[j*videoSize + i].length = sd[i].length * 8;
			}
		}
		/* init XD and schedule */

//		stats->setXw(periodicData[0].rate);

		//sendDataTimer = new cMessage("sendDataTimer");

		sendDataPeriodTimer = new cMessage("sendDataPeriodTimer");

		stateTimer = new cMessage("stateTimer");
		scheduleAt(simTime() + sendPeriod, stateTimer);

		delete [] sd;
		delete [] rd;

    }
//
//    else { //not sender, just receiver
//    	buf = new dataPacket [global->getVideoSize()];
//    }

    bindToPort(2000);
    global->updateMemberList(nodeID,thisNode.getAddress());
}


// finish is called when the module is being destroyed

void NiceTestApp::finishApp()
{
//	cout << "node " << nodeID <<  " Received " << numReceived << endl;
}


// handleTimerEvent is called when a timer event triggers

void NiceTestApp::handleTimerEvent(cMessage* msg)
{

    if (msg->isName("stateTimer")) {    // is this our timer?

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase() || (overlay->getUEcounter() < numUEpreviewed) || (overlay->getState() != 4)) {
//		if (underlayConfigurator->isInInitPhase()) {
        	cout << "node " << nodeID << " global->getUEcounter() : " << overlay->getUEcounter() << endl;
    		scheduleAt(simTime() + sendPeriod, stateTimer);
        	return;

        } else {

        	cancelAndDelete(stateTimer);

        	/* Begin send data timer*/
			FILE* f;
			f = fopen("numAppMsgSent.txt","r");
			fscanf(f,"%d\n",&numSent);
			fclose(f);
			cout << "Node " << nodeID << " begins send data from packetID=" << numSent <<" at time " << simTime() << "s"<< endl<< endl<< endl<< endl<< endl;
			scheduleAt(simTime() + sendDataPeriod, sendDataPeriodTimer);
        }

    }

	else if (msg->isName("sendDataPeriodTimer")){

		/* check finish sending data */
		if((numSent > loopTimes*videoSize -1)){
			cout << "Node " << nodeID <<" Truyennnnnnnnnnnnnn hetttttttttt data packet at " << simTime() << endl<< endl<< endl<< endl<< endl;
			delete [] periodicData;

			cancelAndDelete(sendDataPeriodTimer);

			//endSimulation();
			return;
		}

		if(overlay->getState() != 4){
//			cancelEvent(sendDataTimer);
			cout << "APP: overlay->getState()=" << overlay->getState() << " at numSent=" << numSent << endl;
			return;
		}
		else
			scheduleAt(simTime() + sendDataPeriod, sendDataPeriodTimer);

		/* send data */

		/*NiceTestAppMsg *pingPongPkt;                            // the message we'll send
		pingPongPkt = new NiceTestAppMsg();

		pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own

		int length = periodicData[numSent].length;

		pingPongPkt->setBitLength(length);

		pingPongPkt->setPacketID(numSent);*/

		ALMMulticastMessage* msg = new ALMMulticastMessage("Multicast message");

		/*msg->setPacketID(pingPongPkt->getPacketID());

		msg->setXw(periodicData[numSent].rate);

		msg->setBitLength(length);*/

//		msg->encapsulate(pingPongPkt);

		send(msg, "to_lowerTier");

		numSent++;

	}
    else
        delete msg; // who knows what this packet is?
}


// hoang: called when we receive a message from lower tier
// (handle overlay message)
// this is end-point of an CBRdata msg
void NiceTestApp::handleLowerMessage(cMessage* msg)
{
/*
    if (dynamic_cast<CbrAppMessage*>(msg)){

        CbrAppMessage* cbrMsg =  check_and_cast<CbrAppMessage*>(msg);

        int hopCount = cbrMsg->getHopCount();

        if (cbrMsg->getCommand() == CBR_DATA) {

            cbrMsg->setCommand(-1); //not CBR_DATA anymore, prevent NiceOwnMessage

             statistics

            simtime_t eed = simTime() - msg->getCreationTime();

//            globalStatistics->recordOutVector("4 e2e delay",eed.dbl());

            globalStatistics->recordOutVector("3 ALM Hop count",hopCount);


			 * hoang
			 * calculate small xd
			 * get bigKD : from App (this layer) = eed (1-n)
			 * get last hop kd from baseOverlay
			 * get bigXD from stats


			double kd = cbrMsg->getLastHopKd();

//			globalStatistics->recordOutVector("6 lasthop kd ",kd);

			//just 1-n video transmission
			double bigKD = cbrMsg->getBigKD();
//			globalStatistics->recordOutVector("6 bigKD ",bigKD);

			//TODO: (m-n): bigKD = appPeerMap.find(sender)->second


			if(stats->getMaxKd() < bigKD){
				stats->setMaxKd(bigKD);
				stats->generateXD();
			}

			if(!(stats->getMaxKd() < stats->getXd())){
				stats->generateXD();
			}

			double bigXD = stats->getXd();

			xd = bigXD * kd / bigKD;

			//--end of calculate xd

             data handle

            cPacket* hoang_msg = cbrMsg->decapsulate();

			if(dynamic_cast<NiceTestAppMsg*> (hoang_msg)){

				NiceTestAppMsg* myMsg = check_and_cast<NiceTestAppMsg*>(hoang_msg);

				if (myMsg->getType() == MYMSG_PING) {
//					buf[numReceived].time = simTime();
//					buf[numReceived].id = myMsg->getId();
//					buf[numReceived].length = myMsg->getByteLength();

					//cout << thisNode.getAddress() << " Received at " << buf[numReceived].time << " id " << buf[numReceived].id << " length " << buf[numReceived].length << endl;

					numReceived++;
				}
				delete myMsg; //no need anymore if not forward or reply it

			}

        }

    }

    delete msg;*/

	/*ALMMulticastMessage* mcast = dynamic_cast<ALMMulticastMessage*>(msg);
	if ( mcast != 0 ) {
		cPacket * pkt = mcast->decapsulate();
		NiceTestAppMsg *pingPongPkt = dynamic_cast<NiceTestAppMsg *>(pkt);
		numReceived++;
//		cout << "node " << nodeID << " vua nhan pkt " << pingPongPkt->getId() << " from " << pingPongPkt->getSenderID() << endl;

		delete pkt;
	}

    delete msg;*/
}

/*

//hoangnq: encapsulate data packet into CBRappMsg to send
//down to the lower layer (overlay)
void NiceTestApp::encapAndSendCbrAppMsg(cMessage* msg)
{
    if(dynamic_cast<NiceTestAppMsg*>(msg)){
        NiceTestAppMsg* pingPongPkt = check_and_cast<NiceTestAppMsg*>(msg);

        CbrAppMessage *cbrMsg;
        cbrMsg = new CbrAppMessage();

        cbrMsg->setCommand(0); //CBR_DATA

        string payload = "CBR_DATA " + to_string(numSent);

        cbrMsg->setName(payload.c_str());

        //cbrMsg->setName("CBR_DATA");

        cbrMsg->setSrcNode(thisNode.getAddress());

        cbrMsg->encapsulate(pingPongPkt);

        //lastPacketTime = simTime().dbl();

        //send(pingPongPkt,"to_lowerTier");
        //cout << "Source.IP: " << cbrMsg->getSrcNode() << " length: " << cbrMsg->getByteLength() << endl;

        //cout << "xd=" << stats->getXd() << " xw=" << stats->getXw() << endl;
        //cout << "xd=" << xd << " xw=" << xw << endl;

        send(cbrMsg,"to_lowerTier");

        //cout << "Vua send packet: length=" << periodicData[numSent].length << " numSent=" << numSent << " || xw=" << xw << " at " << simTime() << endl;

        global->incNumSent();
        numSent++;

    }

}
*/
