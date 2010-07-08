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

#ifndef __HOANGGLOBALOBJECT_H__
#define __HOANGGLOBALOBJECT_H__

#include <omnetpp.h>
#include "TransportAddress.h"

/**
 * TODO - Generated class
 */

using namespace std;

class HoangGlobalObject : public cSimpleModule
{
  private:
	IPvXAddress sourceSenderAddress;
	uint16 numNode;
	int numSent;
	int numNodeSentDone;
	int senderId;
	int videoSize;
	int* linkStress;
	int* numLink;
	int loopTimes;
	uint16 numNodeJoined;
	int* videoLength;
	simtime_t * beginSendDataTime;
	uint8 stress[100][40000]; //stress[sid][pid]
	uint16 numAccessLink[100][40000];
	uint16* P_sid;
	FILE * inFile;
	FILE * outFile;
	FILE * receivedFile;

  protected:
    virtual void initialize();
    //virtual void handleMessage(cMessage *msg);


  public:
	IPvXAddress getSourceSenderAddress(){return sourceSenderAddress;};
	  void setSourceSenderAddress(IPvXAddress add){sourceSenderAddress = add;};

	  uint16 getNumNode(){return numNode;};

	  void calculateNumAccessLink(int i);

	  void incNumSent(){numSent++;};
	  int getNumSent(){return numSent;};

	  int getVideoSize(){return videoSize;};
	  void setVideoSize(int value){videoSize = value;};

	  void addLinkStress(int pktId,int value){linkStress[pktId] += value;};
	  void addLinkStress(uint16 nodeID, uint16 pktId, uint8 value){stress[nodeID][pktId] += value;};

	  int getNumNodeJoined(){return numNodeJoined;};
	  void incNumNodeJoined(){numNodeJoined++;};

	  void updateNumLinkArray();

	  void setVideoLengthOfNode(int i, int val){videoLength[i] = val;};
	  int getVideoLengthOfNode(int i){return videoLength[i] ;};

	  void setBeginSendTimeOfNode(int id, simtime_t val){beginSendDataTime[id] = val;};
	  simtime_t getBeginSendTimeOfNode(int id){return beginSendDataTime[id];};

	  uint16 getP_sid(uint16 sid){return P_sid[sid];};
	  void setP_sid(uint16 sid, uint16 value){P_sid[sid] = value;};

	  void setNumAccessLink(uint16 sid, int pid, uint16 val){numAccessLink[sid][pid] = val;};
	  uint16 getNumAccessLink(uint16 sid, int pid){return numAccessLink[sid][pid];};

	  void recordIn(uint nodeID,int sid,int pid,int ttl);
	  void recordOut(uint nodeID,int sid,int pid);
	  void recordReceived(uint nodeID,int sid,int pid,int hopCount);
	  void updateRP(IPvXAddress add);

	  void incNumNodeSentDone();

	  ~HoangGlobalObject();

};

#endif
