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
#include <iostream>
#include <fstream>

Define_Module(HoangGlobalObject);

void HoangGlobalObject::initialize()
{
	cout << "Hoang global object initttt begin" << endl;

	numNode = par("targetOverlayTerminalNum");
	P_sid = new uint16 [numNode];
	beginSendDataTime = new simtime_t [numNode];
	videoLength = new int [numNode];
	numSent = 0;
	numNodeSentDone = 0;
	numNodeJoined = 0;
	videoSize = par("videoSize");
	loopTimes = par("loopTimes");
	videoSize = videoSize * loopTimes;

	linkStress = new int [videoSize];
	fill(linkStress, linkStress + videoSize , 0);

	numLink = new int [videoSize];
	fill(numLink , numLink + videoSize , 0);

	outFile = fopen("out.log","w");
	inFile = fopen("in.log","w");
	receivedFile = fopen("received.log","w");

	cout << "Hoang global object initttt done" << endl;
	system("./addroute.sh");
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
	/*double sum = 0;
	int count = 0;
	double stressSumAtNode = 0;
	int bigP = 0;
	double stressSum = 0;

	for(uint16 sid=0; sid<numNode; sid++){

		for(int pid=0; pid<P_sid[sid]; pid++){

			if(!(stress[sid][pid] > 0)){
				//cout << "sid " << sid << " pid " << pid << " stress " << stress[sid][pid] << endl;
			}

			else {

				if(numAccessLink[sid][pid] < numNode){
					cout << "sid " << sid << " pid " << pid << " numAccessLink " << numAccessLink[sid][pid] << endl;
				}

				stressSumAtNode += (double)stress[sid][pid] / (double)(numAccessLink[sid][pid]);
				stressSum += (double)(stress[sid][pid]) / (double)(numAccessLink[sid][pid]);
				count++;
			}

		}

		sum += stressSumAtNode / (double)P_sid[sid];

		stressSumAtNode = 0; //reset, prepare for next node

		bigP += P_sid[sid];
	}

//	cout << "Count of packet (stress > 0): "<< count << endl;
	cout << "Total packet P= "<< bigP << endl;
	cout << "Average link stress by Packets: "<< stressSum / (double)count << endl;
//	cout << "Average link stress by Nodes : "<< sum / (double)numNode << endl;*/

	fclose(inFile);
	fclose(outFile);
	fclose(receivedFile);

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

	fill(numLink + numSent , numLink + videoSize , numNodeJoined);
	if(!(numNodeJoined < numNode)){
		std::cout << "numNodeJoined=" << numNodeJoined << " numNode=" << numNode << endl;
	}
}

void HoangGlobalObject::recordIn(uint nodeID,int sid,int pid,int ttl,int fromNode)
{
	//write to in.log
	//at simTime() nodeID	received a packet sid,pid fromNode at baseOverlay
	fprintf(inFile,"%f\t%d\t%d\t%d\t%d\t%d\n", simTime().dbl(), nodeID, sid, pid, ttl, fromNode);
}

void HoangGlobalObject::recordOut(uint nodeID,int sid,int pid)
{
	//write to out.log
	//at simTime() nodeID	forwarded a packet sid,pid
	fprintf(outFile,"%f\t%d\t%d\t%d\n", simTime().dbl(), nodeID, sid, pid);
}

void HoangGlobalObject::recordReceived(uint nodeID,int sid,int pid,int hopcount)
{
	//write to in.log
	//at simTime() nodeID	received a packet sid,pid at application
	fprintf(receivedFile,"%f\t%d\t%d\t%d\t%d\n", simTime().dbl(), nodeID, sid, pid, hopcount);
}

void HoangGlobalObject::updateRP(IPvXAddress add)
{
	cout << "Rendezvous Point " << add.str() << endl;
	ofstream RPfile;
	RPfile.open ("rendezvous.point");

	RPfile << add.str() << "\n";
	RPfile.close();

	system("cp -rf rendezvous.point /home/admin/origine_oversim/OverSim-20090908/simulations/realworld");
}

void HoangGlobalObject::incNumNodeSentDone()
{
	numNodeSentDone++;
	cout << "Total: " << numNodeSentDone << " nodes sent done " << endl;

	if(numNodeSentDone >= numNode ){
		cout << "All nodes senttttttttt doneeeeeeeeeeeee. Ready to terminate !!!!!" << endl<< endl<< endl<< endl<< endl;
	}
}
