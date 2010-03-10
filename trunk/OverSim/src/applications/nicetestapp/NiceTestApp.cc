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

    // tell the GUI to display our variables

    WATCH(numSent);
    WATCH(numReceived);

    // start our timer!

    timerMsg = new cMessage("NiceTestApp Timer");
    scheduleAt(simTime() + sendPeriod, timerMsg);

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

    if (msg == timerMsg) {    // is this our timer?

        scheduleAt(simTime() + sendPeriod, timerMsg); // reschedule our message

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) return;

        if(isSender){

        	//tinh so link cua cac node //hoang

        	int numLink = 0;

        	cTopology topo;

        	//topo.extractByProperty("node");
        	topo.extractByModulePath(cStringTokenizer("**.overlayTerminal[*] **.accessRouter[*] **.backboneRouter[*]").asVector());

			std::cout << "\nIP " << thisNode.getAddress() << " has a topo of " << topo.getNumNodes() << " nodes" << endl;

			for (int i=0; i<topo.getNumNodes(); i++)
			{
			  cTopology::Node *node = topo.getNode(i);
			  numLink += node->getNumOutLinks();

			  /*std::cout << "\nNode i=" << i << " is " << node->getModule()->getFullPath() << endl;
			  std::cout << " It has " << node->getNumOutLinks() << " conns to other nodes\n";
			  std::cout << " and " << node->getNumInLinks() << " conns from other nodes\n";

			  std::cout << " Connections to other modules are:\n";
			  for (int j=0; j<node->getNumOutLinks(); j++)
			  {
				cTopology::Node *neighbour = node->getLinkOut(j)->getRemoteNode();
				cGate *gate = node->getLinkOut(j)->getLocalGate();
				std::cout << " " << neighbour->getModule()->getFullPath()
				   << " through gate " << gate->getFullName() << endl;
			  }*/

			}

			stats->setNumPhysicalLink(numLink);

			/*globalStatistics->recordOutVector("HOANG num physical links",numLink / 2);
			globalStatistics->addStdDev("HOANG num physical links",numLink / 2);*/



			//send data

            for (int i = 0; i < numToSend; i++) {

                //OverlayKey randomKey(intuniform(1, largestKey)); // let's create a random key

                NiceTestAppMsg *pingPongPkt;                            // the message we'll send
                pingPongPkt = new NiceTestAppMsg();

                //cout << "IP " << thisNode.getAddress() << " created a msg at " << simTime()<< endl;

                pingPongPkt->setType(MYMSG_PING);                  // set the message type to PING
                pingPongPkt->setSenderAddress(thisNode);   // set the sender address to our own
                //pingPongPkt->setByteLength(100);                       // set the message length to 100 bytes

                //string data = (thisNode.getAddress()).str() + " HOANG ";
                //char* data = strcat((thisNode.getAddress()).str()," HOANG ");

                char* data = " HOANG ";
                pingPongPkt->setData(data);


                RECORD_STATS(numSent++);                       // update statistics
                //cout << ". I created " << numSent << " msg" << endl;
                //hoang
                //pingPongPkt->setByteLength(100+numSent);
                //std::cout << thisNode.ip << ": Sending packet to " << randomKey << "!" << std::endl;
                //callRoute(randomKey, myMessage); // send it to the overlay

                //hoang
                encapAndSendCbrAppMsg(pingPongPkt);
            }
        }

    } else {

        delete msg; // who knows what this packet is?

    }

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

            //hoang_msg->get

            if(dynamic_cast<NiceTestAppMsg*> (hoang_msg)){

                /*if(dynamic_cast<IPDatagram*> (hoang_msg)){

                    IPDatagram datagram = check_and_cast<IPDatagram*>(hoang_msg);

                    std::cout<< "HOANG timeToLive IPdataGram " << datagram->getTimeToLive() << endl;

                }*/


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
        //cbrMsg->setByteLength(100);

        cbrMsg->encapsulate(pingPongPkt);

        //send(pingPongPkt,"to_lowerTier");
        //cout << "Source.IP: " << cbrMsg->getSrcNode() << " length: " << cbrMsg->getByteLength() << endl;
        send(cbrMsg,"to_lowerTier");
    }

}
