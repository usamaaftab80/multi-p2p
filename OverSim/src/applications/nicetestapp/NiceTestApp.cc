/*
 * NiceTestApp.cc
 *
 *  Created on: Feb 22, 2010
 *      Author: admin
 */

#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <string.h>

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

#include  "NiceMessage_m.h"

#include "TransportAddress.h"

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

	global->incNumNodeJoined();
	global->updateNumLinkArray();

    sendPeriod = par("sendPeriod");
    sendDataPeriod = par("sendDataPeriod");
    loopTimes = par("loopTimes");

    //TODO:if(get this overlayterminal'id = global->senderId) isSender = true
    isSender = par("isSender");

    if(isSender){
        cout << "senderrrrrrr " << thisNode.getAddress() << endl;

        global->setSourceSenderAddress(thisNode.getAddress());

        globalStatistics->recordOutVector("HOANG num sender",1);
    }

    // initialize our statictics variables

    numSent = 0;
    numReceived = 0;

    videoSize = 0;

	//lastPacketTime = simTime().dbl();

    if(isSender){
    	// start state timer!

    	/* read trace file */
		FILE * pFile;
		FILE * newFile;

		float time;
		unsigned int id;
		unsigned int length;
		unsigned int lengthUDP;
//		char type;
//		unsigned int frag;
//
//		const char* traceFileName = par("traceFileName");
		const char* sdFile = par("sdFile");

		const char * format;

/*
		if(strcmp(sdFile,"sd_paris") == 0){
			format = "1254866%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 192.168.0.12.41674 > 157.159.16.152.12346: UDP, length %d\n"; //sd_paris:32632
		}
		else if(strcmp(sdFile,"sd_snr") == 0){
			format = "1256917%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 192.168.0.12.60301 > 192.168.0.11.12346: UDP, length %d\n"; //sd_snr:7296
		}
		else if(strcmp(sdFile,"sd_spatial") == 0){
			format = "1254948%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 192.168.0.12.53144 > 157.159.16.152.12346: UDP, length %d\n"; //sd_spatial:4835
		}
		else if(strcmp(sdFile,"sd_combined_svc") == 0){
			format = "1270649%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.52.57994 > 157.159.16.50.12346: UDP, length %d\n"; //sd_combined_svc:1696
		}
		else if(strcmp(sdFile,"sd_sl_svc") == 0){
			format = "1270649%f IP (tos 0x0, ttl 64, id %d, offset 0, flags [DF], proto UDP (17), length %d) 157.159.16.52.56586 > 157.159.16.50.12346: UDP, length %d\n"; //sd_sl_svc:293
		}
*/

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
			//fscanf(pFile , "%16f id %16d udp %16d\n",&time,&id,&length);
			//fscanf(pFile , "%u\t%c\t%u\t%u\t%f\n", &id, &type, &length, &frag, &time);
			//videoPacket[id-1].time = time; //id-1 because ST file begins by 1, not 0
			//fscanf(pFile,format,&time,&id,&lengthUDP,&length);
			fscanf(pFile , format,&time,&id,&length);
			sd[i].time = time;
			sd[i].length = length;
			sd[i].id = i;
			fprintf(newFile , "%-16f id %-16d udp %-16d\n",time,i,length);
			//cout << "SD packet " << i << " length " << length << " at time " << time << endl;
			i++;

		}
		cout << "Read SD done" << endl;

		fclose(pFile);
		fclose(newFile);

		/* Sap xep lai mang sd theo time tang dan */
/*
		dataPacket temp;   // holding variable
		int numLength = videoSize;
		for (int i=0; i< (numLength -1); i++)    // element to be compared
		{
			for(int j = (i+1); j < numLength; j++)   // rest of the elements
			{
				if (sd[i].time > sd[j].time)          // ascending order
			    {
					temp= sd[i];          // swap
					sd[i] = sd[j];
					sd[j] = temp;
			    }
			}
		}

		 Init first XW
		byteSent = sd[0].length;
		int ii = 1;
		while (!(sd[ii].time > sd[ii-1].time)){
			byteSent += sd[ii].length;
			ii++;
		}
		xw = 8*byteSent / (sd[ii].time - sd[ii-1].time);
		stats->setXw(xw);
		byteSent = 0; //reset bytesent

		for (int i=0; i< (numLength -1); i++){
			cout << "time " << sd[i].time << " id " << sd[i].id << " length " << sd[i].length << endl;
		}
*/

		/* Read RD */
		FILE * rFile;
		const char* rdFile = par("rdFile");
		rFile = fopen (rdFile , "r");
		if (rFile == NULL) perror ("Error opening file");

		i = 0;
		while ( ! feof (rFile) ){

			//fscanf(rFile , "1256917%f IP (tos 0x0, ttl  64, id %d, offset 0, flags [DF], proto: UDP (17), length: %d) 192.168.0.12.60301 > 192.168.0.11.12346: UDP, length %d\n",&time,&id,&lengthUDP,&length);
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

		for(int i=0; i<videoSize ; i++){
			double offset = (rd[i].time - sd[i].time).dbl();
			if(!(offset > 0)){
				cout << "packet " << i << " rd time " << rd[i].time << " sd time " << sd[i].time << endl;
			}
			int rate = (int)(sd[i].length * 8 / offset);
			for(int j=0; j< loopTimes; j++){
				periodicData[j*videoSize + i].rate = rate;
				periodicData[j*videoSize + i].length = (int)(rate * sendDataPeriod.dbl());
			}

		}


		/* init XD and schedule */

		stats->setXw(periodicData[0].rate);

		//sendDataTimer = new cMessage("sendDataTimer");

		sendDataPeriodTimer = new cMessage("sendDataPeriodTimer");

		stateTimer = new cMessage("stateTimer");
		scheduleAt(simTime() + sendPeriod, stateTimer);

    }

    else { //not sender, just receiver
    	buf = new dataPacket [global->getVideoSize()];
    }

    bindToPort(2000);
    //cout << "Init App done" << endl;
}


// finish is called when the module is being destroyed

void NiceTestApp::finishApp()
{
//	if(!isSender){

		//cout << "finish ne" << endl;
		/* Resort buf[] by id, eliminate 0 */
		/*dataPacket temp;   // holding variable
		int numLength = global->getVideoSize();
		for (int i=0; i< (numLength -1); i++)    // element to be compared
		{
			for(int j = (i+1); j < numLength; j++)   // rest of the elements
			{
				if (buf[i].id > buf[j].id)          // ascending order
				{
					temp= buf[i];          // swap
					buf[i] = buf[j];
					buf[j] = temp;
				}
			}
		}*/

		/* Write to receiver dump file */
		/*FILE *f;
		string terminalID = getParentModule()->getParentModule()->getFullName();
		string str = "rd_" + terminalID ;
		f = fopen (str.c_str() , "w");

		for(int i=0; i<global->getVideoSize(); i++){
			//cout << "is nhau" << i << endl;
			float time = (buf[i].time).dbl();
			int id = buf[i].id;
			int length = buf[i].length;
			int lengthUDP = length + 28;
			if(time>0){
				fprintf(f , "%-16f id %-16d udp %-16d\n",time,id,length);
				//fprintf(f , "1256917%f IP (tos 0x0, ttl  64, id %d, offset 0, flags [DF], proto: UDP (17), length: %d) 192.168.0.12.60301 > 192.168.0.11.12346: UDP, length %d\n",time,id,lengthUDP,length);
			}
			else{
				//cout << thisNode.getAddress() << " Received at " << buf[i].time << " id " << buf[i].id << " length " << buf[i].length << endl;
			}

		}

		fclose(f);*/

		//delete [] buf;

//	}



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

    if (msg->isName("stateTimer")) {    // is this our timer?

        scheduleAt(simTime() + sendPeriod, stateTimer); // reschedule our message

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) {
        	if(isSender){
        		if(global->getNumNodeJoined() > 1 && numSent<1){
					scheduleAt(simTime() + sendDataPeriod, sendDataPeriodTimer);
        		}
        	}
        	return;

        } else {

        	cancelAndDelete(stateTimer);
        	//cout << thisNode.getAddress() << " vua init xong at " << simTime() << endl;


        	/* Begin send data timer*/
        	if(isSender){
        		cout << "Sender Init finish at " << simTime() << endl;
//				beginSendDataTime = simTime() + par("timeSendAfterInit");
//				scheduleAt(beginSendDataTime + sd[0].time, sendDataTimer);
//				scheduleAt(simTime() + sendDataPeriod, sendDataPeriodTimer);

			}

        }

    } else if (msg->isName("sendDataTimer")){

    	/* check finish sending video */
        if(numSent > videoSize-1){
        	cout << "Truyennnnnnnnnnnnnn hetttttttttt video packet at " << simTime() << endl;
        	delete [] sd;

        	cancelAndDelete(sendDataTimer);

        	//endSimulation();
        	return;
        }

    	scheduleAt(beginSendDataTime + sd[numSent].time, sendDataTimer);

		/* send data */

		NiceTestAppMsg *pingPongPkt;                            // the message we'll send
		pingPongPkt = new NiceTestAppMsg();

		//cout << "IP " << thisNode.getAddress() << " created a msg at " << simTime()<< endl;

		pingPongPkt->setType(MYMSG_PING);

		pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own

		int length = sd[numSent].length;

		pingPongPkt->setByteLength(length);

		pingPongPkt->setId(sd[numSent].id);

		byteSent += length;

		if(sd[numSent].length > sd[numSent-1].length){

			//double thisPacketTime = simTime().dbl(); //or read from trace file

			//xw = (double)length * 8 / (thisPacketTime - lastPacketTime); //datarate for this packet (bit/s)

			simtime_t timeRange = sd[numSent].length - sd[numSent-1].length;

			xw = byteSent * 8 / timeRange;

			//cout << "generate packet length=" << length << " xw=" << xw << " timeperiod=" << thisPacketTime - lastPacketTime << "s" << endl;

			stats->setXw(xw);

			byteSent = 0;
		}

		//hoang
		encapAndSendCbrAppMsg(pingPongPkt);

    }

	else if (msg->isName("sendDataPeriodTimer")){

		/* check finish sending data */
		if(numSent > loopTimes*videoSize -1){
			cout << "Truyennnnnnnnnnnnnn hetttttttttt data packet at " << simTime() << endl;
			delete [] periodicData;

			cancelAndDelete(sendDataPeriodTimer);

			//endSimulation();
			return;
		}

		scheduleAt(simTime() + sendDataPeriod, sendDataPeriodTimer);

		/* send data */

		NiceTestAppMsg *pingPongPkt;                            // the message we'll send
		pingPongPkt = new NiceTestAppMsg();

		pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own

		int length = periodicData[numSent].length;

		pingPongPkt->setBitLength(length);

//		stats->setDeltaXw(periodicData[numSent].rate - periodicData[numSent-1].rate);

		stats->setXw(periodicData[numSent].rate);

		encapAndSendCbrAppMsg(pingPongPkt);

//		cout << "Vua send data: length=" << length << " numSent=" << numSent << " || xw=" << periodicData[numSent].rate << " at " << simTime() << endl;

	}
    else
        delete msg; // who knows what this packet is?
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

            /* statistics */

            simtime_t eed = simTime() - msg->getCreationTime();

            globalStatistics->recordOutVector("4 e2e delay",eed.dbl());

            globalStatistics->recordOutVector("3 ALM Hop count",hopCount);

            /*
			 * hoang
			 * calculate small xd
			 * get bigKD : from App (this layer) = eed (1-n)
			 * get last hop kd from baseOverlay
			 * get bigXD from stats
			 */

			double kd = cbrMsg->getLastHopKd();

			globalStatistics->recordOutVector("6 lasthop kd ",kd);

			//just 1-n video transmission
			double bigKD = cbrMsg->getBigKD();
			globalStatistics->recordOutVector("6 bigKD ",bigKD);

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

            /* data handle */

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
