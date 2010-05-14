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

#include "MultiSenderApp.h"

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
#include "MultiSenderAppMsg_m.h"

#include  "NiceMessage_m.h"

#include "TransportAddress.h"

using namespace std;

//Define_Module(BaseApp);

Define_Module(MultiSenderApp);

// initializeApp is called when the module is being created.
// Use this function instead of the constructor for initializing variables.

void MultiSenderApp::initializeApp(int stage)
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

	nodeID = global->getNumNodeJoined();
	cout << "Node " << nodeID << " join" << endl;

	global->incNumNodeJoined();

//	global->updateNumLinkArray();

    sendPeriod = par("sendPeriod");

    loopTimes = par("loopTimes");
    isSender = par("isSender");
    beginSend = false;

    numSent = 0;

    videoSize = 0;

	//lastPacketTime = simTime().dbl();

    if(isSender){
        cout << "senderrrrrrr " << thisNode.getAddress() << " nodeID " << nodeID << endl;

    	/* read trace file */
		FILE * pFile;

		float time;
		unsigned int id;
		unsigned int length;
		unsigned int lengthUDP;

		const char* sdFile = par("sdFile");

		switch (nodeID % 5){
			case 0:
				sdFile = "sd_paris";
				break;
			case 1:
				sdFile = "sd_snr";
				break;
			case 2:
				sdFile = "sd_sl_svc";
				break;
			case 3:
				sdFile = "sd_combined_svc";
				break;
			case 4:
				sdFile = "sd_spatial";
				break;
			default:
				sdFile = "sd_sl_svc";
		}

		const char * format;

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

		/* Read SD and write a new SD file*/

		pFile = fopen (sdFile , "r");

		if (pFile == NULL) perror ("Error opening original SD file ");

		while ( ! feof (pFile) ){
			fscanf(pFile,format,&time,&id,&lengthUDP,&length);
//			fscanf(pFile , format,&time,&id,&length);
			videoSize++;
		}

		sd = new dataPacket [videoSize];
		global->setVideoLengthOfNode(nodeID,videoSize);

		cout << "Node " << nodeID << " :There are " << videoSize << " packets in dump file" << endl;

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

		startTime = startTime -1;

		for(int i=0; i<videoSize; i++){
			sd[i].time -= startTime;
		}

		FILE * newFile;
		string newfilename = "sd_" + to_string(nodeID);
		newFile = fopen (newfilename.c_str() , "w");
		if (newFile == NULL) perror ("Error opening new SD file to write");
		for(int i=0; i<videoSize ;i++){
			fprintf(newFile , "%-16f id %-16d udp %-16d\n", (sd[i].time).dbl() ,i ,sd[i].length);
		}

		fclose(newFile);

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



		/* Init first XW */
		byteSent = sd[0].length;
		int ii = 1;
		while (!(sd[ii].time > sd[ii-1].time)){
			byteSent += sd[ii].length;
			ii++;
		}
		double xw = 8*byteSent / (sd[ii].time - sd[ii-1].time);
		stats->setXw(xw);
		byteSent = 0; //reset bytesent

		/*for (int i=0; i< (numLength -1); i++){
			cout << "time " << sd[i].time << " id " << sd[i].id << " length " << sd[i].length << endl;
		}*/


		/* init XD and schedule */

		sendDataTimer = new cMessage("sendDataTimer");

		stateTimer = new cMessage("stateTimer");
		scheduleAt(simTime() + sendPeriod, stateTimer);

//		beginSendDataTime = simTime() + par("timeSendAfterInit");
//		scheduleAt(beginSendDataTime + sd[0].time, sendDataTimer);

    }



    bindToPort(2000);
    //cout << "Init App done" << endl;
}


// finish is called when the module is being destroyed

void MultiSenderApp::finishApp()
{
	//Resort buf[] by id, eliminate 0
	map <uint16_t, dataPacketVector>::iterator it;

	for(it=buf.begin(); it!=buf.end(); it++)
	{
//		cout << " Node " << nodeID << " received from node " << it->first << " : " << it->second.size() << " packets"<< endl;
		int numLength = it->second.size();
		//pop vector -> array
		dataPacket * rd = new dataPacket [numLength];

		for(int i=0; i<numLength; i++)
		{
			rd[i] =  it->second.at(i);
		}
		it->second.clear();

		//resort array by id
		dataPacket temp;   // holding variable

		for (int i=0; i< (numLength -1); i++)    // element to be compared
		{
			for(int j = (i+1); j < numLength; j++)   // rest of the elements
			{
				if (rd[i].id > rd[j].id)          // ascending order
				{
					temp = rd[i];          // swap
					rd[i] = rd[j];
					rd[j] = temp;
				}
			}
		}

		//Write to receiver dump file
		/*FILE *f;

		string str = "rd_" + to_string(it->first) + "_at_" + to_string(nodeID);

		f = fopen (str.c_str() , "w");

		for(int i=0; i<numLength; i++)
		{
			//cout << "is nhau" << i << endl;
			float time = (rd[i].time - global->getBeginSendTimeOfNode(it->first)).dbl();
			int id = rd[i].id;
			int length = rd[i].length;

			fprintf(f , "%-16f id %-16d udp %-16d\n",time,id,length);

		}
		delete [] rd;

		fclose(f);*/
	}

	buf.clear();

}


// handleTimerEvent is called when a timer event triggers

void MultiSenderApp::handleTimerEvent(cMessage* msg)
{

    if (msg->isName("stateTimer")) {    // is this our timer?

        scheduleAt(simTime() + sendPeriod, stateTimer); // reschedule our message

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) {

        	return;

        } else {
        	cancelAndDelete(stateTimer);
        	if(isSender){

				if((global->getNumNodeJoined() > 1) && (numSent<1) && (!beginSend)){
					cout<< "Node " << nodeID << " begin send data at "<< simTime() <<endl;

					beginSendDataTime = simTime() + par("timeSendAfterInit");

					global->setBeginSendTimeOfNode(nodeID,beginSendDataTime);

					scheduleAt(beginSendDataTime + sd[0].time, sendDataTimer);
					beginSend = true;

				}
			}
        }

    } else if (msg->isName("sendDataTimer")){

    	/* check finish sending video */
        if(numSent > videoSize*loopTimes - 1){
        	cout << "Node " << nodeID << " Truyennnnnnnnnnnnnn hetttttttttt video packet at " << simTime() << endl;
        	delete [] sd;

        	cancelAndDelete(sendDataTimer);

        	//endSimulation();
        	return;
        }

    	scheduleAt(beginSendDataTime + sd[numSent].time, sendDataTimer);

		/* send data */

		MultiSenderAppMsg *pingPongPkt;                            // the message we'll send
		pingPongPkt = new MultiSenderAppMsg();

		//cout << "IP " << thisNode.getAddress() << " created a msg at " << simTime()<< endl;

		pingPongPkt->setType(MYMSG_PING);

		pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own

		pingPongPkt->setSenderID(nodeID);

		int length = sd[numSent].length;

		pingPongPkt->setByteLength(length);

		pingPongPkt->setId(sd[numSent].id);

		byteSent += length;

		if(sd[numSent].length > sd[numSent-1].length){

			//double thisPacketTime = simTime().dbl(); //or read from trace file

			//xw = (double)length * 8 / (thisPacketTime - lastPacketTime); //datarate for this packet (bit/s)

			simtime_t timeRange = sd[numSent].length - sd[numSent-1].length;

			double xw = byteSent * 8 / timeRange;

			//cout << "generate packet length=" << length << " xw=" << xw << " timeperiod=" << thisPacketTime - lastPacketTime << "s" << endl;

			stats->setXw(xw);

			byteSent = 0;
		}

		//hoang
		encapAndSendCbrAppMsg(pingPongPkt);

    }

    else
        delete msg; // who knows what this packet is?
}


// hoang: called when we receive a message from lower tier
// (handle overlay message)
// this is end-point of an CBRdata msg
void MultiSenderApp::handleLowerMessage(cMessage* msg)
{

    if (dynamic_cast<CbrAppMessage*>(msg)){

        CbrAppMessage* cbrMsg =  check_and_cast<CbrAppMessage*>(msg);

        int hopCount = cbrMsg->getHopCount();

        if (cbrMsg->getCommand() == CBR_DATA) {

            cbrMsg->setCommand(-1); //not CBR_DATA anymore, prevent NiceOwnMessage

            /* statistics */

            simtime_t eed = simTime() - msg->getCreationTime();

//            globalStatistics->recordOutVector("4 e2e delay",eed.dbl());

            globalStatistics->recordOutVector("3 ALM Hop count",hopCount);

            /* data handle */

            cPacket* hoang_msg = cbrMsg->decapsulate();

			if(dynamic_cast<MultiSenderAppMsg*> (hoang_msg)){

				MultiSenderAppMsg* myMsg = check_and_cast<MultiSenderAppMsg*>(hoang_msg);

				if (myMsg->getType() == MYMSG_PING) {
					dataPacket dp;
					dp.id = myMsg->getId();
					dp.length = myMsg->getByteLength();
					dp.time = simTime();
					std::map<uint16_t, dataPacketVector>::iterator it = buf.find(myMsg->getSenderID());
					if(it != buf.end()){
						it->second.push_back(dp);
					}
					else{
//						cout << "Node " << nodeID << " cannot find id " << myMsg->getSenderID() << " in map" << endl;
						dataPacketVector vec;
						vec.clear();
						vec.push_back(dp);
						buf.insert(make_pair(myMsg->getSenderID(),vec));

					}

//					cout << thisNode.getAddress() << " Received at " << dp.time << " id " << dp.id << " length " << dp.length << endl;

				}
				delete myMsg; //no need anymore if not forward or reply it

			}

        }

    }

    delete msg;
}


//hoangnq: encapsulate data packet into CBRappMsg to send
//down to the lower layer (overlay)
void MultiSenderApp::encapAndSendCbrAppMsg(cMessage* msg)
{
    if(dynamic_cast<MultiSenderAppMsg*>(msg)){
        MultiSenderAppMsg* pingPongPkt = check_and_cast<MultiSenderAppMsg*>(msg);

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


        send(cbrMsg,"to_lowerTier");

        //cout << "Vua send packet: length=" << periodicData[numSent].length << " numSent=" << numSent << " || xw=" << xw << " at " << simTime() << endl;

        global->incNumSent();
        numSent++;

    }

}
