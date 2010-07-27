/*
 * EXOSIP.h
 *
 *  Created on: Jul 27, 2010
 *      Author: tuan
 */

#ifndef EXOSIP_H_
#define EXOSIP_H_



class EXOSIP {


public :
	//EXOSIP();
	//~EXOSIP( );
	int initsip();
	int sendmessage();
	void *listensip(void *parameters);
	void wait();

};

#endif /* EXOSIP_H_ */
