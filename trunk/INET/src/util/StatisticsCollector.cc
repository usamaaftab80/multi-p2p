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

//@author: HoangNQ: hoangnq@gmail.com

#include "StatisticsCollector.h"

Define_Module(StatisticsCollector);

void StatisticsCollector::initialize()
{
	stressSum = 0;
	numPhysicalLink = 0;

	hopCountVector.setName("HOANG hopCount mean");
	linkStressVector.setName("HOANG linkStress");

	calculateNumPhysicalLink();

	statisticsPeriod = par("statisticsPeriod");
    timerMsg = new cMessage("StatisticsCollector Timer");
    scheduleAt(simTime() + statisticsPeriod, timerMsg);

}

void StatisticsCollector::handleMessage(cMessage *msg)
{
	if (msg == timerMsg) {    // is this our timer?

		scheduleAt(simTime() + statisticsPeriod, timerMsg);

		hopCountVector.record(hopCountStats.getMean());

		linkStressVector.record(getLinkStress());

	} else {

		delete msg;

	}


}

void StatisticsCollector::addToStressSum(int num)
{
	//std::cout << "nhay vao ham addToStressSum stressSum " << stressSum << " num " << num << endl;
	stressSum += num;
}

void StatisticsCollector::setNumPhysicalLink(int num)
{
	numPhysicalLink = num;
}

double StatisticsCollector::getLinkStress()
{

	//debug

	/*std::cout << "statisticsCollector. stressSum = " << stressSum << endl;
	std::cout << "statisticsCollector. numPhysicalLink = " << numPhysicalLink / 2 << endl;*/

	if(numPhysicalLink > 0){

		return (double)stressSum / (double)numPhysicalLink;

	}

	else{

		std::cout << "Error: numPhysicalLink = 0" << endl;

		return 0;

	}

}

void StatisticsCollector::collectHopCount(int hopCount)
{
	hopCountStats.collect(hopCount);
}


void StatisticsCollector::finish()
{

	cancelAndDelete(timerMsg);

	std::cout << "finish statisticsCollector. stressSum=" << stressSum << endl;

	calculateNumPhysicalLink();

	recordScalar("HOANG linkStress",getLinkStress());

	std::cout << "Hop count, min:    " << hopCountStats.getMin() << endl;
	std::cout << "Hop count, max:    " << hopCountStats.getMax() << endl;
	std::cout << "Hop count, mean:   " << hopCountStats.getMean() << endl;
	std::cout << "Hop count, stddev: " << hopCountStats.getStddev() << endl;

	hopCountStats.recordAs("HOANG stats hop count");

}


StatisticsCollector::~StatisticsCollector()
{

	std::cout << "~~~~statisticsCollector. LinkStress = " << getLinkStress() << endl;

	//recordScalar("HOANG linkStress Sum",stressSum);

}

void StatisticsCollector::calculateNumPhysicalLink()
{
	int numLink = 0;

	cTopology topo;

	//topo.extractByProperty("node");
	topo.extractByModulePath(cStringTokenizer("**.overlayTerminal[*] **.accessRouter[*] **.backboneRouter[*]").asVector());

	std::cout << "has a topo of " << topo.getNumNodes() << " nodes" << endl;

	for (int i=0; i<topo.getNumNodes(); i++)
	{
	  cTopology::Node *node = topo.getNode(i);
	  numLink += node->getNumOutLinks();
	}

	setNumPhysicalLink(numLink);

}
