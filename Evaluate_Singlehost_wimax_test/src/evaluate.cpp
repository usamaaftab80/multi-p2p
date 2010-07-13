//============================================================================
// Name        : evaluate.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//
//typedef struct dataPacket{
//			int stress;
////			float delay;
////			int length;
//		} dataPacket;
typedef unsigned int uint;

#include <vector>

using namespace std;

int main() {

	/*
	 * Read server's files
	 */
	FILE * f;
	f = fopen("./server/in.log","r");
	if(f == NULL) perror("Error open file ./server/in.log");

	float time;
	int nodeID;
	int maxNodeID = 0;

	int sid;

	int pid;
	int maxPid = 0;

	int ttl;
	int sumTTL = 0;
	int fromNode;
	float delay;

	int i = 0;

	while (!(feof(f))){
		fscanf(f,"%f\t%d\t%d\t%d\t%d\t%d\t%f\n",&time, &nodeID, &sid, &pid, &ttl, &fromNode, &delay);
		if(nodeID > maxNodeID)
			maxNodeID = nodeID;
		if(pid > maxPid)
			maxPid = pid;
		sumTTL += ttl;
		i++;
	}

	cout << "Server in.log" << endl << "co " << i << " dong" << endl;
	cout << "maxNodeID = " << maxNodeID << endl;
	cout << "maxPid = " << maxPid << endl;

//	vector<vector<int> > dataIn(maxNodeID+1, vector<int>(maxPid+1));
//	vector<vector<int> > dataOut(maxNodeID+1, vector<int>(maxPid+1));
//	vector<vector<int> > stress(maxNodeID+1, vector<int>(maxPid+1));

	uint *dataIn = new uint [(maxNodeID+1)*(maxPid+1)];
	uint *dataOut = new uint [(maxNodeID+1)*(maxPid+1)];
	uint *stress = new uint [(maxNodeID+1)*(maxPid+1)];

	cout << "vvll " << (maxNodeID+1)*(maxPid+1) << endl;

	rewind(f);

	int j=0;
	while (!(feof(f))){
		fscanf(f,"%f\t%d\t%d\t%d\t%d\t%d\t%f\n",&time, &nodeID, &sid, &pid, &ttl, &fromNode, &delay);
		int id = sid*(maxPid+1) + pid;
		dataIn[id]++;
//		cout << "vl " << j++ << endl;
	}
	cout << "read server/in done" << endl;

	fclose(f);

	/* server/out.log */

	FILE * f_o;
	f_o = fopen("./server/out.log","r");
	if(f_o == NULL) perror("Error open file ./server/out.log");

	float time_o;
	int nodeID_o;

	int sid_o;

	int pid_o;

	int i_o = 0;

	while (!(feof(f_o))){
		fscanf(f_o,"%f\t%d\t%d\t%d\n",&time_o, &nodeID_o, &sid_o, &pid_o);
//		dataOut[sid*(maxPid+1) + pid]++;
		i_o++;
	}
	cout << "Server out.log " << i_o << " packets " << endl;
	fclose(f_o);
	/*
	 * Read singlehost's files
	 */
	FILE * f_1;
	f_1 = fopen("./singlehost/in.log","r");
	if(f_1 == NULL) perror("Error open file ./singlehost/in.log");

	float time_1;
	int nodeID_1;

	int sid_1;

	int pid_1;
	int maxPid_1 = 0;

	int ttl_1;
	int sumTTL_1 = 0;
	int fromNode_1;

	int i_1 = 0;

	while (!(feof(f_1))){
		fscanf(f_1 ,"%f\t%d\t%d\t%d\t%d\t%d\n",&time_1, &nodeID_1, &sid_1, &pid_1, &ttl_1, &fromNode_1);

		if(pid_1 > maxPid_1)
			maxPid_1 = pid_1;

		sumTTL_1 += ttl_1;
		i_1++;
	}

	cout << endl << "SingleHost in.log" << endl << "co " << i << " dong" << endl;
	cout << "maxPid = " << maxPid_1 << endl;
	fclose(f_1);

	/*
	 * Summary server + singlehost files
	 */
	cout << "Average ttl: " << (double)(sumTTL + sumTTL_1) / (double)(i + i_1) << endl;

	return 0;
}
