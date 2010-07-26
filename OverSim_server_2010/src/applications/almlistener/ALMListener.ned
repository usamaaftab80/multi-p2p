//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package oversim.applications.almlistener;

import oversim.common.BaseApp;
import oversim.common.ITier;


simple ALMListener extends BaseApp
{
    parameters:
        @class(ALMListener);        
}

module ALMListenerModule like ITier
{
    gates:
        input udpIn;
        input from_lowerTier;
        input from_upperTier;
        output udpOut;
        output to_lowerTier;
        output to_upperTier;

    submodules:
        almListener: ALMListener;
    connections allowunconnected:
        from_lowerTier --> almListener.from_lowerTier;
        to_lowerTier <-- almListener.to_lowerTier;
        from_upperTier --> almListener.from_upperTier;
        to_upperTier <-- almListener.to_upperTier;
        udpIn --> almListener.udpIn;
        udpOut <-- almListener.udpOut;

}

