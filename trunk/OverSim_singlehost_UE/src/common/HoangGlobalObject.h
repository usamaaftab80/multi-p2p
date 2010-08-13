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
	uint16 numNode;
	int numSent;
	int numNodeSentDone;
	int senderId;
	int videoSize;

	int loopTimes;
	uint16 numNodeJoined;

	uint totalALMhopcount;
	uint numALMhopcount;

	FILE * inFile;
	FILE * outFile;

	int UEcounter;

	int numReceivedAll;
	int numSentAll;

	int numReceivedData;
	int numSentData;
	int numForwardedData;
	int numAppData;

	int64 bitReceivedAll;
	int64 bitSentAll;

	int64 bitReceivedData;
	int64 bitSentData;
	int64 bitForwardedData;

  protected:
    virtual void initialize();
    //virtual void handleMessage(cMessage *msg);


  public:

	  uint16 getNumNode(){return numNode;};

	  void incNumSent(){numSent++;};
	  int getNumSent(){return numSent;};

	  int getVideoSize(){return videoSize;};
	  void setVideoSize(int value){videoSize = value;};

	  int getNumNodeJoined(){return numNodeJoined;};
	  void incNumNodeJoined(){numNodeJoined++;};

	  void recordIn(uint nodeID,int sid,int pid,int ttl,int fromNode, float delay, int length);
	  void recordOut(uint nodeID,int sid,int pid, int toNode, int length);
	  void updateRP(IPvXAddress add);

	  void updateMemberList(int nodeID,IPvXAddress add);
	  int getNodeIDofAddress(IPvXAddress add);

	  void incNumNodeSentDone();

	  void recordALMhopcount(uint value){numALMhopcount++; totalALMhopcount+=value;};

	  int getUEcounter(){return UEcounter;};
	  void incUEcounter(){UEcounter++;};

	  void incNumReceivedAll(){numReceivedAll++;};
	  void incNumSentAll(){numSentAll++;};

	  void addToBitReceivedAll(int value){bitReceivedAll += value;};
	  void addToBitSentAll(int value){bitSentAll += value;};

	  void incNumReceivedData();
	  void incNumSentData(){numSentData++;};
	  void incNumForwardedData(){numForwardedData++;};
	  void incNumAppData(){numAppData++;};

	  void addToBitReceivedData(int value){bitReceivedData += value;};
	  void addToBitSentData(int value){bitSentData += value;};
	  void addToBitForwardedData(int value){bitForwardedData += value;};

	  ~HoangGlobalObject();

};

#endif
