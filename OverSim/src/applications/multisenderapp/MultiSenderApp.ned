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

package oversim.applications.multisenderapp;


import oversim.common.BaseApp;
import oversim.common.ITier;


simple MultiSenderApp extends BaseApp
{
    parameters:
        @class(MultiSenderApp);
        int sendPeriod @unit(s);   // how much time to wait between sending packets
        double sendDataPeriod @unit(s);
        int timeSendAfterInit @unit(s);        
        bool isSender; 				//in case 1 source sender
        string statsModulePath;
        string globalModulePath;
        //string traceFileName;
        string sdFile;
        string rdFile;
        int loopTimes;
}                    
                    
module MultiSenderAppModules like ITier
{
    gates:
        input udpIn;             // gate from the UDP layer
        output udpOut;           // gate to the UDP layer
        input from_lowerTier;    // gate from the lower tier
        input from_upperTier;    // gate from the upper tier
        output to_lowerTier;     // gate to the lower tier
        output to_upperTier;     // gate to the upper tier
        input trace_in;          // gate for trace file commands

    submodules:
        multisenderapp: MultiSenderApp;

    connections allowunconnected:
        from_lowerTier --> multisenderapp.from_lowerTier;
        to_lowerTier <-- multisenderapp.to_lowerTier;
        udpIn --> multisenderapp.udpIn;
        udpOut <-- multisenderapp.udpOut;
        trace_in --> multisenderapp.trace_in;
}
