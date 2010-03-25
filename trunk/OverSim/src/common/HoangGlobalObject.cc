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

#include "HoangGlobalObject.h"

Define_Module(HoangGlobalObject);

void HoangGlobalObject::initialize()
{
	stressVector.setName("stress--access link, globalObject");
	stressSum = 0;
	numNode = 0;
	numRecordStress = 0;
}

/*void HoangGlobalObject::handleMessage(cMessage *msg)
{
	// TODO - Generated method body
}*/

void HoangGlobalObject::recordStress()
{
	calculateNumAccessLink();

	numRecordStress++;

	stressVector.record(getLinkStress());
}


void HoangGlobalObject::calculateNumAccessLink()
{
	int numLink = 0;

	cTopology topo;

	topo.extractByModulePath(cStringTokenizer("**.overlayTerminal[*]").asVector());

	numNode = topo.getNumNodes();

	//nodeCountVector.record(numNode);

	for (int i=0; i<numNode ; i++)
	{
	  cTopology::Node *node = topo.getNode(i);
	  numLink += node->getNumOutLinks();
	}

	//numPhysicalLink = numLink;
}

double HoangGlobalObject::getLinkStress()
{
	return (double)stressSum / (double)numNode; //numAccessLink
}
