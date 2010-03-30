//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#ifndef __STATISTICSCOLLECTOR_H__
#define __STATISTICSCOLLECTOR_H__

#include <omnetpp.h>

/**
 * TODO - Generated class
 */
class StatisticsCollector : public cSimpleModule
{
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();

  private:

    int numPhysicalLink;
    int numNode;
    cLongHistogram hopCountStats;
    cOutVector hopCountVector;
    cOutVector nodeCountVector;
    cOutVector linkCountVector;

    cMessage *timerMsg;
    simtime_t statisticsPeriod;

    double xw,xd;
    double maxKd;
    int maxPeerCount;
    double XDlimit;

  public:

	void setMaxKd(double val){maxKd = val;};
	double getMaxKd(){return maxKd;};

	void setNumPhysicalLink(int num);

	int getNumPhysicalLink(){return numPhysicalLink;};

	void calculateNumPhysicalLink();

	void collectHopCount(int hopCount);

	double getXw(){return xw;};
	double getXd(){return xd;};
	void setXw(double xw_var){ xw = xw_var ;};
	void setXd(double xd_var){ xd = xd_var ;};

	void setMaxPeerCount(int val){maxPeerCount = val;};
	int getMaxPeerCount(){return maxPeerCount;};

	void setXDlimit(double val){XDlimit = val;};
	double getXDlimit(){return XDlimit;};

	void hardChangeXdForKd(double kd_var);

};

#endif
