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
	numAccessLink = numNode = par("targetOverlayTerminalNum");
	numSent = 0;
	numNodeJoined = 0;
	videoSize = par("videoSize");
	loopTimes = par("loopTimes");
	videoSize = videoSize * loopTimes;

	linkStress = new int [videoSize];
	fill(linkStress, linkStress + videoSize , 0);

	numLink = new int [videoSize];
	fill(numLink , numLink + videoSize , 0);

	//set random sender: generate random number in [0,par("targetOverlayTerminalNum")]
	senderId = intrand(numNode);

	cout << "Hoang global object initttt done" << endl;
}


HoangGlobalObject::~HoangGlobalObject()
{
	//cout << "~HoangGlobalObject()" << endl;

	double sum = 0;
	int count = 0;
	for(int i=0; i<videoSize; i++){

		if (!(linkStress[i] > 0)){
//			cout << "packet " << i << " stress sum " << linkStress[i] << " for " << numLink[i] << " links" << endl;
		}
		if(numLink[i] >0 ){
			sum += (double)linkStress[i] / (double)numLink[i];
			count++;
		}
	}
	cout << "Average link stress: "<< sum / (double)count << endl;

	delete [] linkStress;
	delete [] numLink;
	/*
	int temp = linkStress[0];
	int numValue = 1; //amount of switching times
	int sum = linkStress[0];
	cout << "SumStress of packet from 0: " << temp << endl;
	for(int i=0; i<videoSize; i++){
		//cout << "packet " << i << " sum stress " << linkStress[i] << endl;
		//TODO: count number of different values, number of switching times
		if(linkStress[i] != temp){ //switch
			numValue++;
			temp = linkStress[i];
			//cout << "Switch to new value: " << temp << " from packet " << i << endl;
			sum += temp;
		}

	}*/
//	recordScalar("1. Average link stress",((double)sum / (double)numValue)/numAccessLink );
//	recordScalar("Amount of different values",numValue);
//	cout << "Amount of different values: " << numValue << endl;
//	cout << "Average link stress: "<< ((double)sum / (double)numValue)/numAccessLink << endl;

}

/*void HoangGlobalObject::handleMessage(cMessage *msg)
{
	// TODO - Generated method body
}*/

void HoangGlobalObject::calculateNumAccessLink(int i)
{

/*	cTopology topo;

	topo.extractByModulePath(cStringTokenizer("**.overlayTerminal[*]").asVector());

	numNode = topo.getNumNodes();*/


	numLink[i] = numNode;

/*
	for (int j=0; j<numNode ; j++)
	{
	  cTopology::Node *node = topo.getNode(j);
	  numLink[i] += node->getNumOutLinks();
	}
*/

}

void HoangGlobalObject::updateNumLinkArray()
{
//	cout << "numNodeJoined: " << numNodeJoined << " at " << simTime() << endl;
//	for(int i=numSent; i<videoSize; i++){
//		numLink[i] = numNodeJoined;
//	}
	fill(numLink + numSent , numLink + videoSize , numNodeJoined);
	if(!(numNodeJoined < numNode)){
		std::cout << "numNodeJoined=" << numNodeJoined << " numNode=" << numNode << endl;
	}
}
