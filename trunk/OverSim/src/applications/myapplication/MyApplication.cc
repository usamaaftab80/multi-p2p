//
// Copyright (C) 2009 Institut fuer Telematik, Universitaet Karlsruhe (TH)
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

/**
 * @author Antonio Zea
 */


#include "MyApplication.h"
#include "UnderlayConfigurator.h"
#include "GlobalStatistics.h"
#include "MyMessage_m.h"
#include <string>

using namespace std;

//Define_Module(BaseApp);

Define_Module(MyApplication);

// initializeApp is called when the module is being created.
// Use this function instead of the constructor for initializing variables.

void MyApplication::initializeApp(int stage)
{

    // initializeApp will be called twice, each with a different stage.
    // stage can be either MIN_STAGE_APP (this module is being created), or MAX_STAGE_APP (all modules were created).
    // We only care about MIN_STAGE_APP here.

    if (stage != MIN_STAGE_APP) return;

    // copy the module parameter values to our own variables

    sendPeriod = par("sendPeriod");
    numToSend = par("numToSend");
    largestKey = par("largestKey");

    // initialize our statictics variables

    numSent = 0;
    numReceived = 0;

    // tell the GUI to display our variables

    WATCH(numSent);
    WATCH(numReceived);

    // start our timer!

    timerMsg = new cMessage("MyApplication Timer");
    scheduleAt(simTime() + sendPeriod, timerMsg);

    bindToPort(2000);
}


// finish is called when the module is being destroyed

void MyApplication::finishApp()
{

    // first we'll delete our timer

    //delete timerMsg;
    cancelAndDelete(timerMsg);

    // finish() is usually used to save the module's statistics.
    // We'll use globalStatistics->addStdDev(), which will calculate min, max, mean and deviation values.
    // The first parameter is a name for the value, you can use any name you like (use a name you can find quickly!).
    // In the end, the simulator will mix together all values, from all nodes, with the same name.

    globalStatistics->addStdDev("MyApplication: Sent packets", numSent);
    globalStatistics->addStdDev("MyApplication: Received packets", numReceived);
}


// handleTimerEvent is called when a timer event triggers

void MyApplication::handleTimerEvent(cMessage* msg)
{

    if (msg == timerMsg) {    // is this our timer?

        scheduleAt(simTime() + sendPeriod, timerMsg); // reschedule our message

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) return;

        for (int i = 0; i < numToSend; i++) {

            OverlayKey randomKey(intuniform(1, largestKey)); // let's create a random key

            MyMessage *myMessage;                            // the message we'll send
            myMessage = new MyMessage();
            myMessage->setType(MYMSG_PING);                  // set the message type to PING
            myMessage->setSenderAddress(thisNode);   // set the sender address to our own
            myMessage->setByteLength(100);                       // set the message length to 100 bytes

            numSent++;                       // update statistics

            //std::cout << thisNode.ip << ": Sending packet to " << randomKey << "!" << std::endl;
            callRoute(randomKey, myMessage); // send it to the overlay

        }

    } else {

        delete msg; // who knows what this packet is?

    }
}

// deliver is called when we receive a message from the overlay.
// Unhandled or unknown packets can be safely deleted here.

void MyApplication::deliver(OverlayKey& key, cMessage* msg)
{

    // we are only expecting messages of type MyMessage, throw away any other

    MyMessage *myMsg = dynamic_cast<MyMessage*>(msg);
    if (myMsg == 0) {
        delete msg;     // unknown!
        return;
    }

    // are we a PING? send a PONG!

    if (myMsg->getType() == MYMSG_PING) {

       myMsg->setType(MYMSG_PONG);                         // change type
       std::cout << thisNode.getAddress() << ": Got packet from " << myMsg->getSenderAddress() << ", sending back!" << std::endl;
       sendMessageToUDP(myMsg->getSenderAddress(), myMsg); // send it back to its owner

       //hoang
       simtime_t eed = simTime() - myMsg->getCreationTime();
       globalStatistics->recordOutVector("End to end delay",eed.dbl());


    } else {

       delete msg;     // unhandled!

    }
}

// handleUDPMessage is called when we receive a message from UDP.
// Unhandled or unknown packets can be safely deleted here.

void MyApplication::handleUDPMessage(cMessage* msg)
{

    // we are only expecting messages of type MyMessage

    MyMessage *myMsg = dynamic_cast<MyMessage*>(msg);

    if (myMsg && myMsg->getType() == MYMSG_PONG) {

       //cout << thisNode.getAddress() << ": Got reply!" << endl;
       numReceived++;
       //globalStatistics->recordOutVector("numReceived",numReceived);
       //cout<< "HOANG HOANG "<< numReceived << endl;

    }

    // Whatever msg was, we won't need it anymore.

    delete msg;
}

