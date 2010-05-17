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
	cout << "Hoang global object initttt begin" << endl;

	numAccessLink = numNode = par("targetOverlayTerminalNum");
	P_sid = new int [numNode];
	beginSendDataTime = new simtime_t [numNode];
	videoLength = new int [numNode];
	cout << "Hoang global object initttt before empty stress[][]" << endl;
	for(int i=0; i<100; i++){
		for(int j=0; j<40000; j++){
			stress[i][j] = 0;
		}
	}
	//fill(stress, stress + 10000, 0);
	cout << "Hoang global object initttt after stress[][]=0" << endl;

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

	/*
	 * 1-n NiceTestApp
	 */
	/*double sum = 0;
	int count = 0;
	for(int i=0; i<videoSize; i++){

		if (!(linkStress[i] > 0)){
			cout << "packet " << i << " stress sum " << linkStress[i] << " for " << numLink[i] << " links" << endl;
		}
		if(numLink[i] >0 ){
				sum += (double)linkStress[i] / (double)numLink[i];
				count++;
		}
	}
	cout << "Average link stress: "<< sum / (double)count << endl;

	delete [] linkStress;
	delete [] numLink;*/



	/*
	 * Reserved for MultiSenderApp
	 */
	double sum = 0;
	int count = 0;
	double stressSumAtNode = 0;
	int bigP = 0;
	int stressSum = 0;

	for(int sid=0; sid<numNode; sid++){

		for(int pid=0; pid<P_sid[sid]; pid++){

			if(!(stress[sid][pid] > 0)){
//				cout << "sid " << sid << " pid " << pid << " stress " << stress[sid][pid] << endl;
			}

			stressSumAtNode += stress[sid][pid];
			stressSum += stress[sid][pid];

//			count++;

		}

		sum += stressSumAtNode / (double)P_sid[sid];

		stressSumAtNode = 0; //reset, prepare for next node

		bigP += P_sid[sid];
	}

//	cout << "Count of packet (stress > 0): "<< count << endl;
	cout << "Total packet P= "<< bigP << endl;
	cout << "Average link stress kieu khac: "<< (double)stressSum / (double)bigP << endl;
	cout << "Average link stress: "<< sum / (double)numNode << endl;


	delete [] linkStress;
	delete [] numLink;

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
