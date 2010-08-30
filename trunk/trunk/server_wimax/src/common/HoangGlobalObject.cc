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
	numNode = par("targetOverlayTerminalNum");
	numSent = 0;
	numNodeSentDone = 0;
	numNodeJoined = 0;
	videoSize = par("videoSize");
	loopTimes = par("loopTimes");
	videoSize = videoSize * loopTimes;
	totalALMhopcount = numALMhopcount = 0;
	UEcounter = 0;

	outFile = fopen("out.log","w");
	inFile = fopen("in.log","w");

	ofstream f;
	f.open ("member_list.txt");
	f << 1111 << "\t" << "1.1.1.2" << endl;
	f.close();

	cout << "Hoang global object initttt done at " << simTime() << endl;
	system("./addroute.sh");
}


HoangGlobalObject::~HoangGlobalObject()
{

	cout << "\ntotalALMhopcount=" << totalALMhopcount << " numALMhopcount=" << numALMhopcount << endl<< endl;

	ofstream alm_hc_file;
	alm_hc_file.open ("alm_hopcount.log");

	alm_hc_file << "totalALMhopcount=" << totalALMhopcount << endl << " numALMhopcount=" << numALMhopcount;
	alm_hc_file.close();

	fclose(inFile);
	fclose(outFile);
}

/*void HoangGlobalObject::handleMessage(cMessage *msg)
{
	// TODO - Generated method body
}*/



void HoangGlobalObject::recordIn(uint nodeID,int sid,int pid,int ttl,int fromNode, float delay)
{
	//write to in.log
	//at simTime() nodeID	received a packet sid,pid fromNode at baseOverlay
	fprintf(inFile,"%f\t%d\t%d\t%d\t%d\t%d\t%f\n", simTime().dbl(), nodeID, sid, pid, ttl, fromNode, delay);
}

void HoangGlobalObject::recordOut(uint nodeID,int sid,int pid, int toNode)
{
	//write to out.log
	//at simTime() nodeID	forwarded a packet sid,pid
	fprintf(outFile,"%f\t%d\t%d\t%d\t%d\n", simTime().dbl(), nodeID, sid, pid, toNode);
}

void HoangGlobalObject::updateRP(IPvXAddress add)
{
	cout << "Rendezvous Point " << add.str() << endl;
	ofstream RPfile;
	RPfile.open ("rendezvous.point");

	RPfile << add.str() << "\n";
	RPfile.close();

//	system("cp -rf rendezvous.point /home/admin/origine_oversim/OverSim/simulations/realworld");
}

void HoangGlobalObject::incNumNodeSentDone()
{
	numNodeSentDone++;
	cout << "Total: " << numNodeSentDone << " nodes sent done " << endl;

	if(numNodeSentDone >= numNode ){
		cout << "All nodes senttttttttt doneeeeeeeeeeeee. Ready to terminate !!!!!" << endl<< endl<< endl<< endl<< endl;
	}
}

void HoangGlobalObject::updateMemberList(int nodeID,IPvXAddress add)
{
	ofstream f;
	f.open ("member_list.txt",ios::app);

	f << nodeID << "\t" << add.str() << endl;
	f.close();
}

int HoangGlobalObject::getNodeIDofAddress(IPvXAddress add)
{
	bool found = false;
	FILE * f;
	f = fopen("member_list.txt","r");
	char str[80];
	int id = -1;

	while(! feof(f)){
		fscanf(f,"%d\t%s\n",&id,str);
		if(add == IPvXAddress(str)){
			found = true;
			break;
		}
	}

	fclose(f);

	if(!found)
		id = -1;

	return id;
}
