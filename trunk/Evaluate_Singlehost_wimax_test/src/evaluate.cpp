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

template <typename T>
T **AllocateDynamicArray( int nRows, int nCols)
{
      T **dynamicArray;

      dynamicArray = new T*[nRows];
      for( int i = 0 ; i < nRows ; i++ )
      dynamicArray[i] = new T [nCols];

      return dynamicArray;
}

template <typename T>
void FreeDynamicArray(T** dArray)
{
      delete [] *dArray;
      delete [] dArray;
}

using namespace std;

int main() {

	/*
	 * Read server's files
	 */
	FILE * f;
	f = fopen("./server/in.log","r");
	if(f == NULL) perror("Error open file ./server/in.log");

	float sumH2HDelay = 0;
	int countH2HDelay = 0;

	float wimaxDelay = 0.02;

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
		{
			maxNodeID = nodeID;
			delay += wimaxDelay;
		}
		if(pid > maxPid)
			maxPid = pid;
		sumTTL += ttl;
		sumH2HDelay += delay;
		countH2HDelay++;
		i++;
	}

	cout << "Server in.log" << endl << "co " << i << " dong" << endl;
	cout << "maxNodeID = " << maxNodeID << endl;
	cout << "maxPid = " << maxPid << endl;

	int **dataIn = AllocateDynamicArray<int>(maxNodeID+2,maxPid+1);
	int **dataOut = AllocateDynamicArray<int>(maxNodeID+2,maxPid+1);
	int **stress = AllocateDynamicArray<int>(maxNodeID+2,maxPid+1);

	rewind(f);

	while (!(feof(f))){
		fscanf(f,"%f\t%d\t%d\t%d\t%d\t%d\t%f\n",&time, &nodeID, &sid, &pid, &ttl, &fromNode, &delay);
		if(sid > 1000)
			sid = maxNodeID+1;
		dataIn[sid][pid]++;

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
		if(sid_o > 1000)
			sid_o = maxNodeID+1;
		dataOut[sid_o][pid_o]++;
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
	int ttl_1;
	int sumTTL_1 = 0;
	int fromNode_1;

	int i_1 = 0;

	while (!(feof(f_1))){
		fscanf(f_1 ,"%f\t%d\t%d\t%d\t%d\t%d\n",&time_1, &nodeID_1, &sid_1, &pid_1, &ttl_1, &fromNode_1);
		if(sid_1 > 1000)
			sid_1 = maxNodeID + 1;
		dataIn[sid_1][pid_1]++;
		sumTTL_1 += ttl_1;

		sumH2HDelay += wimaxDelay;
		countH2HDelay++;

		i_1++;
	}

	fclose(f_1);

	FILE * f_2;
	f_2 = fopen("./singlehost/out.log","r");
	if(f_2 == NULL) perror("Error open file ./singlehost/out.log");

	float time_2;
	int nodeID_2;
	int sid_2;
	int pid_2;

	while (!(feof(f_2))){
		fscanf(f_2 ,"%f\t%d\t%d\t%d\n",&time_2, &nodeID_2, &sid_2, &pid_2);

		if(sid_2 > 1000)
			sid_2 = maxNodeID + 1;
		dataOut[sid_2][pid_2]++;
	}

	fclose(f_2);

	/*
	 * Stress statistic
	 */

	int sumStress = 0;
	int countStress = 0;

	for(int i=0; i<maxNodeID+1; i++)
	{
		for(int j=0; j<maxPid; j++){
			if(dataOut[i][j] > 0)
				stress[i][j] = dataOut[i][j] ;
			else
				stress[i][j] = dataIn[i][j] ;
			if(stress[i][j]>0){
				countStress++;
				sumStress+=stress[i][j];
			}
		}
	}


	/*
	 * e2e hopcount statistic received.log
	 */

	int sumHC = 0;
	int countHC = 0;

	FILE * f_3;
	f_3 = fopen("./server/received.log","r");
	if(f_3 == NULL) perror("Error open file ./server/received.log");

	float time_3;
	int nodeID_3;
	int sid_3;
	int pid_3;
	int hc;


	while (!(feof(f_3))){
		fscanf(f_3 ,"%f\t%d\t%d\t%d\t%d\n",&time_3, &nodeID_3, &sid_3, &pid_3, &hc);
		sumHC += hc;
		countHC++;
	}

	fclose(f_3);

	f_3 = fopen("./singlehost/received.log","r");
	if(f_3 == NULL) perror("Error open file ./singlehost/received.log");
	while (!(feof(f_3))){
		fscanf(f_3 ,"%f\t%d\t%d\t%d\t%d\n",&time_3, &nodeID_3, &sid_3, &pid_3, &hc);
		sumHC += hc;
		countHC++;
	}

	/*
	 * Summary server + singlehost files
	 */
	cout << endl << "==== Final result ====" << endl;
	cout << "Average linkstress: " << (double)(sumStress) / (double)(countStress) << endl;
	cout << "Average ttl pathlength: " << (double)(sumTTL + sumTTL_1) / (double)(i + i_1) << endl;
	cout << "Average e2e hopcount: " << (double)(sumHC) / (double)(countHC) << endl;
//	cout << "Average h2h delay: " << (double)(sumH2HDelay) / (double)(countH2HDelay) << endl;
	cout << "Average e2e delay: " << ((double)(sumH2HDelay) / (double)(countH2HDelay))*((double)(sumHC) / (double)(countHC)) << endl;

	FreeDynamicArray<int>(dataIn);
	FreeDynamicArray<int>(dataOut);
	FreeDynamicArray<int>(stress);


	return 0;
}
