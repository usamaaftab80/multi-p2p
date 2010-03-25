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
class HoangGlobalObject : public cSimpleModule
{
private:
	TransportAddress sourceSenderAddress;
	cOutVector stressVector;
	int stressSum;
	int numAccessLink;
	int numNode;
	int numRecordStress;
	int numSent;

  protected:
    virtual void initialize();
    //virtual void handleMessage(cMessage *msg);

  public:
	  TransportAddress getSourceSenderAddress(){return sourceSenderAddress;};
	  void setSourceSenderAddress(TransportAddress add){sourceSenderAddress = add;};
	  void recordStress();
	  void calculateNumAccessLink();
	  void resetStressSum(){stressSum = 0;};
	  void incStressSum(){stressSum++;};
	  void incNumSent(){numSent++;};
	  int getNumSent(){return numSent;};
	  void addToStressSum(int value){stressSum += value;};
	  double getLinkStress();
	  int getNumRecordStress(){return numRecordStress;};

};

#endif
