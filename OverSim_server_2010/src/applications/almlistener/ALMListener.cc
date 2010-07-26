// Copyright (C) 2006 Institut fuer Telematik, Universitaet Karlsruhe (TH)
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

/**
 * @file ALMListener.cc
 * @author Antonio Zea
 */

#include <omnetpp.h>
#include "ALMListener.h"
#include "CommonMessages_m.h"

Define_Module(ALMListener);

void ALMListener::initializeApp(int stage) {
    if( stage != (numInitStages()-1))
    {
        return;
    }
	numReceived = 0;
}

void ALMListener::handleLowerMessage(cMessage* msg)
{
	std::cout << "Singlehost received " << numReceived << " ALM packets"<< endl;
    ALMMulticastMessage* mcast = dynamic_cast<ALMMulticastMessage*>(msg);
    if ( mcast != 0 ) {
        //handleMCast(mcast);
    	std::cout << "1. Singlehost received " << numReceived << " ALM packets"<< endl;
    	numReceived++;
    }
    delete msg;
}


void ALMListener::finishApp()
{
	std::cout << "Finish Singlehost received " << numReceived << " ALM packets"<< endl;
}
