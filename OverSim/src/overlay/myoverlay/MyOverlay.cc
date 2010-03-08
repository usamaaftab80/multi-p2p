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

#include "MyOverlay.h"
#include "UnderlayConfigurator.h"
#include <GlobalStatistics.h>
#include <iostream>
#include "MyOverlay_m.h"

using namespace std;

// Important! This line must be present for each module you extend (see BaseApp)
Define_Module(MyOverlay);

// To convert between IP addresses (which have bit 24 active), and keys (which don't), we'll need to set or remove this bit.
#define BIGBIT (1 << 24)


// Called when the module is being initialized
void MyOverlay::initializeOverlay(int stage)
{

    if (stage != MIN_STAGE_OVERLAY) return;         // see BaseApp.cc

    //myKey = thisNode.ip.get4().getInt() & ~BIGBIT;  // get our key from our IP address
    myKey = thisNode.getAddress().get4().getInt() & ~BIGBIT;  // get our key from our IP address

    // initialize the rest of variables
    numDropped = 0;
    if (!(par("enableDrops"))) {
        dropChance = 0;
    } else {
        dropChance = par("dropChance");
    }

    rpcTimer = new cMessage("RPC timer");
    scheduleAt(simTime() + 5, rpcTimer);
}

// Called to set our own overlay key (optional)
void MyOverlay::setOwnNodeID()
{
    thisNode.key = OverlayKey(myKey);   // create the corresponding overlay key
}


// Called when the module is ready to join the overlay
void MyOverlay::joinOverlay()
{

    // Set the information of the previous step in the chain
    //prevNode.ip = IPAddress(BIGBIT | (myKey - 1));
    //prevNode.port = thisNode.port;
    prevNode.setAddress(IPAddress(BIGBIT | (myKey - 1)));
    prevNode.setPort(thisNode.getPort());
    prevNode.key = OverlayKey(myKey - 1);

    // Set the information of the next step in the chain
    //nextNode.ip = IPAddress(BIGBIT | (myKey + 1));
    //nextNode.port = thisNode.port;
    nextNode.setAddress(IPAddress(BIGBIT | (myKey + 1)));
    nextNode.setPort(thisNode.getPort());
    nextNode.key = OverlayKey(myKey + 1);

    // tell the simulator that we're ready
    setOverlayReady(true);

}

void MyOverlay::handleTimerEvent(cMessage *msg)
{

    if (msg == rpcTimer) {

        // reschedule the timer
        scheduleAt(simTime() + 5, rpcTimer);

        // if the simulator is still busy creating the network, let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) return;

        // pick either or next neighbor, or our previous neighbor, and request their neighbors
        OverlayKey key;
        int neighborToAsk = intuniform(0, 1);

        if (neighborToAsk == 0) key = prevNode.key;
        else key = nextNode.key;

        getNeighbors(key);
    }

}

// Return whether the given node is responsible for the key
bool MyOverlay::isSiblingFor(const NodeHandle& node,
                                 const OverlayKey& key,
                                 int numSiblings,
                                 bool* err)
{
    if (node == thisNode && key == thisNode.key) { // is it our node and our key?
        return true;
    }
    return false;  // we don't know otherwise
}

// Return the next step for the routing of the given message
NodeVector *MyOverlay::findNode(const OverlayKey& key,
                                 int numRedundantNodes,
                                 int numSiblings,
                                 BaseOverlayMessage* msg)
{

    NodeVector* nextHops;

    if (uniform(0, 1) < dropChance) {          // do we drop the packet?
        nextHops = new NodeVector(0);          // if yes, return an empty node vector
        numDropped++;
        return nextHops;
    }

    nextHops = new NodeVector(1);              // else, set the response vector with one node

    if (key == thisNode.key) {                 // are we responsible? next step is this node
        nextHops->add(thisNode);
    } else if (key < thisNode.key) {           // is the key behind us? next step is the previous node
        nextHops->add(prevNode);
    } else {                                   // otherwise, the next step is the next node
        nextHops->add(nextNode);
    }
    return nextHops;
}

// Called when the module is about to be destroyed
void MyOverlay::finishOverlay()
{

    // delete the timer
    //delete rpcTimer;
    cancelAndDelete(rpcTimer);

    // remove this node from the overlay
    setOverlayReady(false);

    // save the statistics (see BaseApp)
    globalStatistics->addStdDev("MyOverlay: Dropped packets", numDropped);
    //globalStatistics->recordOutVector("MyOverlay: Dropped packets", numDropped);
}

// Return the max amount of siblings that can be queried about
int MyOverlay::getMaxNumSiblings()
{
    return 1;
}

// Return the max amount of redundant that can be queried about
int MyOverlay::getMaxNumRedundantNodes()
{
    return 1;
}



void MyOverlay::getNeighbors(const OverlayKey &neighborKey)
{
    MyNeighborCall *msg = new MyNeighborCall();
    msg->setDestinationKey(neighborKey);

    // The function we'll be using to send an RPC is sendRouteRpcCall.
    // The first value is to which tier we'll be talking. Can be either OVERLAY_COMP, TIER1_COMP, TIER2_COMP, and so on.
    // The second parameter is the node to which we'll send the message. Can be either an OverlayKey or a TransportAddress.
    // The third parameter is the message.

    //std::cout << thisNode << ": (RPC) Sending query to " << neighborKey << "!" << std::endl;
    sendRouteRpcCall(OVERLAY_COMP, neighborKey, msg);
}

// Handle an incoming Call message
// Only delete msg if the RPC is handled here, and you won't respond using sendRpcResponse!

bool MyOverlay::handleRpcCall(BaseCallMessage *msg)
{

    // There are many macros to simplify the handling of RPCs. The full list is in <OverSim>/src/common/RpcMacros.h.

    // start a switch
    RPC_SWITCH_START(msg);

    // enters the following block if the message is of type MyNeighborCall (note the shortened parameter!)
    RPC_ON_CALL(MyNeighbor) {
        MyNeighborCall *mrpc = (MyNeighborCall*)msg;          // get Call message

        MyNeighborResponse *rrpc = new MyNeighborResponse();  // create response
        rrpc->setRespondingNode(thisNode);
        rrpc->setPrevNeighbor(prevNode);
        rrpc->setNextNeighbor(nextNode);

        // now send the response. sendRpcResponse can automatically tell where to send it to.
        // note that sendRpcResponse will delete mrpc (aka msg)!
        sendRpcResponse(mrpc, rrpc);

        RPC_HANDLED = true;  // set to true, since we did handle this RPC (default is false)
    }

    // end the switch
    RPC_SWITCH_END();

    // return whether we handled the message or not.
    // don't delete unhandled messages!
    return RPC_HANDLED;
}

// Called when an RPC we sent has timed out.
// Don't delete msg here!

void MyOverlay::handleRpcTimeout(BaseCallMessage* msg,
                         const TransportAddress& dest,
                         cPolymorphic* context, int rpcId,
                         const OverlayKey&)
{
    // Same macros as in handleRpc

    // start a switch
    RPC_SWITCH_START(msg);

    // enters the following block if the message is of type MyNeighborCall (note the shortened parameter!)
    RPC_ON_CALL(MyNeighbor) {
        MyNeighborCall *mrpc = (MyNeighborCall*)msg;          // get Call message
        callbackTimeout(mrpc->getDestinationKey());           // call interface function
    }
    // end the switch
    RPC_SWITCH_END();
}

// Called when we receive an RPC response from another node.
// Don't delete msg here!

void MyOverlay::handleRpcResponse(BaseResponseMessage* msg,
                          cPolymorphic* context,
                          int rpcId,
                          simtime_t rtt)
{
    // The macros are here similar. Just use RPC_ON_RESPONSE instead of RPC_ON_CALL.

    // start a switch
    RPC_SWITCH_START(msg);

    // enters the following block if the message is of type MyNeighborCall (note the shortened parameter!)
    RPC_ON_RESPONSE(MyNeighbor) {
        MyNeighborResponse *mrpc = (MyNeighborResponse*)msg;          // get Response message
        callbackNeighbors(mrpc->getRespondingNode(),
                        mrpc->getPrevNeighbor(),
                        mrpc->getNextNeighbor());                     // call our interface function
    }
    // end the switch
    RPC_SWITCH_END();
}

void MyOverlay::callbackNeighbors(
        const NodeHandle& neighborKey,
        const NodeHandle& prevNeighbor,
        const NodeHandle& nextNeighbor)
{
        //std::cout << thisNode << ": (RPC) Got response from " << neighborKey << std::endl;
        //std::cout << thisNode << ": (RPC) Neighbors: " << prevNeighbor.getAddress()<< ", " << nextNeighbor.getAddress()<< std::endl;
}

void MyOverlay::callbackTimeout(const OverlayKey &neighborKey)
{
        //std::cout << thisNode << ": (RPC) Query to " << neighborKey << " timed out!" << std::endl;
}
