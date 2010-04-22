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
	int numAccessLink;
	int numNode;
	int numSent;
	int senderId;
	int videoSize;
	int* linkStress;
	int* numLink;
	int loopTimes;
	int numNodeJoined;

  protected:
    virtual void initialize();
    //virtual void handleMessage(cMessage *msg);


  public:
	IPvXAddress getSourceSenderAddress(){return sourceSenderAddress;};
	  void setSourceSenderAddress(IPvXAddress add){sourceSenderAddress = add;};
	  int getNumNode(){return numNode;};
	  void calculateNumAccessLink(int i);
	  void incNumSent(){numSent++;};
	  int getNumSent(){return numSent;};
	  int getVideoSize(){return videoSize;};
	  void setVideoSize(int value){videoSize = value;};
	  void addLinkStress(int pktId,int value){linkStress[pktId] += value;};
	  int getNumNodeJoined(){return numNodeJoined;};
	  void incNumNodeJoined(){numNodeJoined++;};
	  void updateNumLinkArray();

	  ~HoangGlobalObject();

};

#endif
