//
// OMNeT++ network description -- exported from GT-ITM (alt) topology
// Generator Model Used:
//   Model (8 - Imported From format file /home/admin/gt/gt-itm/small_gtitm_ts_spec-0.gtts ): 44 120 120.0 transtub 120.0 0.0 0.0 2.0 2.0 0.0 0.0 0.0 0.0 0.0 1.0 1.0 59.0 59.0 3.0 3.0 1.0 1.0 0.0 0.0 0.0 0.0 0.0 0.0 4.0 4.0 30.0 30.0 3.0 3.0 0.6 0.6 0.0 0.0 0.0 0.0 0.0 0.0 5.0 5.0 34.0 34.0 3.0 3.0 0.42 0.42 0.0 0.0 0.0 0.0 0.0 59.0 2.0 4.0 0.0 
//

//This file must be placed under oversim/src/underlay/inetunderlay

//Package
package oversim.underlay.inetunderlay;

//
// Prototype for modules that can be used as node in a GTITM_TransitStub_Network
//

//Imports
import oversim.common.TierDummy;
import oversim.common.IOverlay;
import oversim.underlay.inetunderlay.Router;
import oversim.underlay.inetunderlay.AccessRouter;
import oversim.underlay.inetunderlay.OverlayRouter;
import oversim.underlay.inetunderlay.OverlayAccessRouter;
import oversim.underlay.inetunderlay.TunOutRouter;
import oversim.underlay.inetunderlay.InetUnderlayConfigurator;
import inet.nodes.inet.StandardHost;
import oversim.common.GlobalObserver;


// Konstantinos Katsaros and Giorgos Nomikos 18/04/2009
//	 For Omnet++ version 4:
//	 The following lines must be inserted in the omnetpp.ini (scenario) file for a GT-ITM TS:
//	 [Config CrescendoInetTopology]
//	 description = Crescendo (semi-recursive, GT-ITM TS IPv4UnderlayNetwork)
//	 network = oversim.underlay.inetunderlay.GTITM_TS_IPv4Network
//	 **.overlayType = "oversim.overlay.crescendo.CrescendoModules"
//	 **.tier1Type = "oversim.applications.kbrtestapp.KBRTestAppModules"
//	 **.outRouterNum=0
//	 **.startIP = "10.1.0.1"
//	 **.overlayTerminalType = "OverlayHost"
//	 **.routingType = "semi-recursive"
//	 **.addAccessRouterToOverlay = false
//	**.accessRouterNum = 40
//	**.overlayAccessRouterNum = 0
//	**.backboneRouterNum = 4
//	**.overlayBackboneRouterNum = 0
//

//
// GT-ITM TS topology exported via BRITE.
//
module GTITM_TS_IPv4Underlay
{
	parameters:
		string overlayType;  // the overlay used in the simulation (for overlayBackboneRouters)
		string tier1Type;    // the application on top of the overlay used in the simulation (for overlayBackboneRouters)
		string tier2Type;    // the module type on top of tier 1 (for overlayBackboneRouters)
		string tier3Type;    // the module type on top of tier 2 (for overlayBackboneRouters)
		int accessRouterNum;	// number of access routers in the network
		int overlayAccessRouterNum;	// number of access routers in the network that participate the overlay
		int backboneRouterNum;	// number of backbone routers in the networkor
		int overlayBackboneRouterNum;	// number of backbone routers in the network that participate the overlay
		int outRouterNum;
//		string overlayTerminalType;
	submodules:
		underlayConfigurator: InetUnderlayConfigurator {
			parameters:
				@display("i=block/cogwheel");
		}
		globalObserver: GlobalObserver {
			parameters:
				@display("i=block/control");
		}
		backboneRouter[backboneRouterNum]: Router {
			parameters:
				@display("i=device/server2");
		}
		outRouter[min(1, outRouterNum)]: TunOutRouter {
			parameters:
				@display("i=misc/globe");
		}
		accessRouter[accessRouterNum]: AccessRouter {
			parameters:
				@display("i=device/server2,gray,30");
		}
		overlayAccessRouter[overlayAccessRouterNum]: OverlayAccessRouter {
			parameters:
				overlayType = overlayType;    // the overlay used in the simulation
				tier1Type = tier1Type;    // the application on top off the overly used in the simulation
				tier2Type = tier2Type;    // tier 2 module to use
				tier3Type = tier3Type;    // tier 3 module to use
				@display("i=device/server2,gray,30;i2=block/circle_s");
		}
		overlayBackboneRouter[overlayBackboneRouterNum]: OverlayRouter {
				parameters:
				overlayType = overlayType;    // the overlay used in the simulation
				tier1Type = tier1Type;    // the application on top off the overly used in the simulation
				tier2Type = tier2Type;    // tier 2 module to use
				tier3Type = tier3Type;    // tier 3 module to use
				@display("i=device/server2;i2=block/circle_s");
		}
  connections allowunconnected:
    backboneRouter[0].pppg$o++ --> GTITMChannel {  delay = 8ms; ber = 1.0E-15; datarate = 1.048576E8bps; } --> backboneRouter[2].pppg$i++;
    backboneRouter[0].pppg$i++ <-- GTITMChannel {  delay = 8ms; ber = 1.0E-15; datarate = 1.048576E8bps; } <-- backboneRouter[2].pppg$o++;
    backboneRouter[0].pppg$o++ --> GTITMChannel {  delay = 8ms; ber = 1.0E-15; datarate = 1.048576E8bps; } --> backboneRouter[3].pppg$i++;
    backboneRouter[0].pppg$i++ <-- GTITMChannel {  delay = 8ms; ber = 1.0E-15; datarate = 1.048576E8bps; } <-- backboneRouter[3].pppg$o++;
    backboneRouter[0].pppg$o++ --> GTITMChannel {  delay = 11ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[1].pppg$i++;
    backboneRouter[0].pppg$i++ <-- GTITMChannel {  delay = 11ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[1].pppg$o++;
    backboneRouter[1].pppg$o++ --> GTITMChannel {  delay = 20ms; ber = 1.0E-15; datarate = 1.048576E8bps; } --> backboneRouter[3].pppg$i++;
    backboneRouter[1].pppg$i++ <-- GTITMChannel {  delay = 20ms; ber = 1.0E-15; datarate = 1.048576E8bps; } <-- backboneRouter[3].pppg$o++;
    backboneRouter[1].pppg$o++ --> GTITMChannel {  delay = 20ms; ber = 1.0E-15; datarate = 1.048576E8bps; } --> backboneRouter[2].pppg$i++;
    backboneRouter[1].pppg$i++ <-- GTITMChannel {  delay = 20ms; ber = 1.0E-15; datarate = 1.048576E8bps; } <-- backboneRouter[2].pppg$o++;
    backboneRouter[1].pppg$o++ --> GTITMChannel {  delay = 13ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[9].pppg$i++;
    backboneRouter[1].pppg$i++ <-- GTITMChannel {  delay = 13ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[9].pppg$o++;
    backboneRouter[2].pppg$o++ --> GTITMChannel {  delay = 14ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[24].pppg$i++;
    backboneRouter[2].pppg$i++ <-- GTITMChannel {  delay = 14ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[24].pppg$o++;
    backboneRouter[2].pppg$o++ --> GTITMChannel {  delay = 6ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[27].pppg$i++;
    backboneRouter[2].pppg$i++ <-- GTITMChannel {  delay = 6ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[27].pppg$o++;
    backboneRouter[2].pppg$o++ --> GTITMChannel {  delay = 5ms; ber = 1.0E-15; datarate = 1.048576E8bps; } --> backboneRouter[3].pppg$i++;
    backboneRouter[2].pppg$i++ <-- GTITMChannel {  delay = 5ms; ber = 1.0E-15; datarate = 1.048576E8bps; } <-- backboneRouter[3].pppg$o++;
    backboneRouter[2].pppg$o++ --> GTITMChannel {  delay = 11ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[16].pppg$i++;
    backboneRouter[2].pppg$i++ <-- GTITMChannel {  delay = 11ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[16].pppg$o++;
    backboneRouter[2].pppg$o++ --> GTITMChannel {  delay = 8ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[21].pppg$i++;
    backboneRouter[2].pppg$i++ <-- GTITMChannel {  delay = 8ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[21].pppg$o++;
    backboneRouter[3].pppg$o++ --> GTITMChannel {  delay = 18ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[37].pppg$i++;
    backboneRouter[3].pppg$i++ <-- GTITMChannel {  delay = 18ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[37].pppg$o++;
    backboneRouter[3].pppg$o++ --> GTITMChannel {  delay = 24ms; ber = 1.0E-16; datarate = 1.048576E8bps; } --> accessRouter[35].pppg$i++;
    backboneRouter[3].pppg$i++ <-- GTITMChannel {  delay = 24ms; ber = 1.0E-16; datarate = 1.048576E8bps; } <-- accessRouter[35].pppg$o++;
    accessRouter[0].pppg$o++ --> GTITMChannel {  delay = 3ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[1].pppg$i++;
    accessRouter[0].pppg$i++ <-- GTITMChannel {  delay = 3ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[1].pppg$o++;
    accessRouter[1].pppg$o++ --> GTITMChannel {  delay = 25ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[2].pppg$i++;
    accessRouter[1].pppg$i++ <-- GTITMChannel {  delay = 25ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[2].pppg$o++;
    accessRouter[2].pppg$o++ --> GTITMChannel {  delay = 8ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[3].pppg$i++;
    accessRouter[2].pppg$i++ <-- GTITMChannel {  delay = 8ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[3].pppg$o++;
    accessRouter[3].pppg$o++ --> GTITMChannel {  delay = 13ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[4].pppg$i++;
    accessRouter[3].pppg$i++ <-- GTITMChannel {  delay = 13ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[4].pppg$o++;
    accessRouter[5].pppg$o++ --> GTITMChannel {  delay = 1ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[8].pppg$i++;
    accessRouter[5].pppg$i++ <-- GTITMChannel {  delay = 1ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[8].pppg$o++;
    accessRouter[5].pppg$o++ --> GTITMChannel {  delay = 25ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[9].pppg$i++;
    accessRouter[5].pppg$i++ <-- GTITMChannel {  delay = 25ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[9].pppg$o++;
    accessRouter[5].pppg$o++ --> GTITMChannel {  delay = 14ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[6].pppg$i++;
    accessRouter[5].pppg$i++ <-- GTITMChannel {  delay = 14ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[6].pppg$o++;
    accessRouter[6].pppg$o++ --> GTITMChannel {  delay = 32ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[9].pppg$i++;
    accessRouter[6].pppg$i++ <-- GTITMChannel {  delay = 32ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[9].pppg$o++;
    accessRouter[7].pppg$o++ --> GTITMChannel {  delay = 33ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[9].pppg$i++;
    accessRouter[7].pppg$i++ <-- GTITMChannel {  delay = 33ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[9].pppg$o++;
    accessRouter[10].pppg$o++ --> GTITMChannel {  delay = 7ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[11].pppg$i++;
    accessRouter[10].pppg$i++ <-- GTITMChannel {  delay = 7ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[11].pppg$o++;
    accessRouter[10].pppg$o++ --> GTITMChannel {  delay = 14ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[16].pppg$i++;
    accessRouter[10].pppg$i++ <-- GTITMChannel {  delay = 14ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[16].pppg$o++;
    accessRouter[10].pppg$o++ --> GTITMChannel {  delay = 13ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[15].pppg$i++;
    accessRouter[10].pppg$i++ <-- GTITMChannel {  delay = 13ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[15].pppg$o++;
    accessRouter[10].pppg$o++ --> GTITMChannel {  delay = 11ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[14].pppg$i++;
    accessRouter[10].pppg$i++ <-- GTITMChannel {  delay = 11ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[14].pppg$o++;
    accessRouter[10].pppg$o++ --> GTITMChannel {  delay = 9ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[18].pppg$i++;
    accessRouter[10].pppg$i++ <-- GTITMChannel {  delay = 9ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[18].pppg$o++;
    accessRouter[11].pppg$o++ --> GTITMChannel {  delay = 17ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[12].pppg$i++;
    accessRouter[11].pppg$i++ <-- GTITMChannel {  delay = 17ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[12].pppg$o++;
    accessRouter[11].pppg$o++ --> GTITMChannel {  delay = 10ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[13].pppg$i++;
    accessRouter[11].pppg$i++ <-- GTITMChannel {  delay = 10ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[13].pppg$o++;
    accessRouter[11].pppg$o++ --> GTITMChannel {  delay = 10ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[14].pppg$i++;
    accessRouter[11].pppg$i++ <-- GTITMChannel {  delay = 10ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[14].pppg$o++;
    accessRouter[11].pppg$o++ --> GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[15].pppg$i++;
    accessRouter[11].pppg$i++ <-- GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[15].pppg$o++;
    accessRouter[11].pppg$o++ --> GTITMChannel {  delay = 4ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[18].pppg$i++;
    accessRouter[11].pppg$i++ <-- GTITMChannel {  delay = 4ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[18].pppg$o++;
    accessRouter[13].pppg$o++ --> GTITMChannel {  delay = 23ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[15].pppg$i++;
    accessRouter[13].pppg$i++ <-- GTITMChannel {  delay = 23ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[15].pppg$o++;
    accessRouter[13].pppg$o++ --> GTITMChannel {  delay = 12ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[17].pppg$i++;
    accessRouter[13].pppg$i++ <-- GTITMChannel {  delay = 12ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[17].pppg$o++;
    accessRouter[13].pppg$o++ --> GTITMChannel {  delay = 6ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[18].pppg$i++;
    accessRouter[13].pppg$i++ <-- GTITMChannel {  delay = 6ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[18].pppg$o++;
    accessRouter[14].pppg$o++ --> GTITMChannel {  delay = 24ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[16].pppg$i++;
    accessRouter[14].pppg$i++ <-- GTITMChannel {  delay = 24ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[16].pppg$o++;
    accessRouter[15].pppg$o++ --> GTITMChannel {  delay = 16ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[17].pppg$i++;
    accessRouter[15].pppg$i++ <-- GTITMChannel {  delay = 16ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[17].pppg$o++;
    accessRouter[15].pppg$o++ --> GTITMChannel {  delay = 18ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[18].pppg$i++;
    accessRouter[15].pppg$i++ <-- GTITMChannel {  delay = 18ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[18].pppg$o++;
    accessRouter[16].pppg$o++ --> GTITMChannel {  delay = 14ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[17].pppg$i++;
    accessRouter[16].pppg$i++ <-- GTITMChannel {  delay = 14ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[17].pppg$o++;
    accessRouter[19].pppg$o++ --> GTITMChannel {  delay = 20ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[21].pppg$i++;
    accessRouter[19].pppg$i++ <-- GTITMChannel {  delay = 20ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[21].pppg$o++;
    accessRouter[20].pppg$o++ --> GTITMChannel {  delay = 25ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[21].pppg$i++;
    accessRouter[20].pppg$i++ <-- GTITMChannel {  delay = 25ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[21].pppg$o++;
    accessRouter[21].pppg$o++ --> GTITMChannel {  delay = 7ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[22].pppg$i++;
    accessRouter[21].pppg$i++ <-- GTITMChannel {  delay = 7ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[22].pppg$o++;
    accessRouter[23].pppg$o++ --> GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[25].pppg$i++;
    accessRouter[23].pppg$i++ <-- GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[25].pppg$o++;
    accessRouter[23].pppg$o++ --> GTITMChannel {  delay = 27ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[26].pppg$i++;
    accessRouter[23].pppg$i++ <-- GTITMChannel {  delay = 27ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[26].pppg$o++;
    accessRouter[24].pppg$o++ --> GTITMChannel {  delay = 4ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[25].pppg$i++;
    accessRouter[24].pppg$i++ <-- GTITMChannel {  delay = 4ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[25].pppg$o++;
    accessRouter[25].pppg$o++ --> GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[26].pppg$i++;
    accessRouter[25].pppg$i++ <-- GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[26].pppg$o++;
    accessRouter[27].pppg$o++ --> GTITMChannel {  delay = 12ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[28].pppg$i++;
    accessRouter[27].pppg$i++ <-- GTITMChannel {  delay = 12ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[28].pppg$o++;
    accessRouter[28].pppg$o++ --> GTITMChannel {  delay = 15ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[29].pppg$i++;
    accessRouter[28].pppg$i++ <-- GTITMChannel {  delay = 15ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[29].pppg$o++;
    accessRouter[30].pppg$o++ --> GTITMChannel {  delay = 22ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[33].pppg$i++;
    accessRouter[30].pppg$i++ <-- GTITMChannel {  delay = 22ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[33].pppg$o++;
    accessRouter[30].pppg$o++ --> GTITMChannel {  delay = 20ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[31].pppg$i++;
    accessRouter[30].pppg$i++ <-- GTITMChannel {  delay = 20ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[31].pppg$o++;
    accessRouter[30].pppg$o++ --> GTITMChannel {  delay = 13ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[32].pppg$i++;
    accessRouter[30].pppg$i++ <-- GTITMChannel {  delay = 13ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[32].pppg$o++;
    accessRouter[31].pppg$o++ --> GTITMChannel {  delay = 24ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[35].pppg$i++;
    accessRouter[31].pppg$i++ <-- GTITMChannel {  delay = 24ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[35].pppg$o++;
    accessRouter[31].pppg$o++ --> GTITMChannel {  delay = 9ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[32].pppg$i++;
    accessRouter[31].pppg$i++ <-- GTITMChannel {  delay = 9ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[32].pppg$o++;
    accessRouter[32].pppg$o++ --> GTITMChannel {  delay = 27ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[35].pppg$i++;
    accessRouter[32].pppg$i++ <-- GTITMChannel {  delay = 27ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[35].pppg$o++;
    accessRouter[32].pppg$o++ --> GTITMChannel {  delay = 34ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[34].pppg$i++;
    accessRouter[32].pppg$i++ <-- GTITMChannel {  delay = 34ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[34].pppg$o++;
    accessRouter[33].pppg$o++ --> GTITMChannel {  delay = 24ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[34].pppg$i++;
    accessRouter[33].pppg$i++ <-- GTITMChannel {  delay = 24ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[34].pppg$o++;
    accessRouter[34].pppg$o++ --> GTITMChannel {  delay = 7ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[35].pppg$i++;
    accessRouter[34].pppg$i++ <-- GTITMChannel {  delay = 7ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[35].pppg$o++;
    accessRouter[36].pppg$o++ --> GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[39].pppg$i++;
    accessRouter[36].pppg$i++ <-- GTITMChannel {  delay = 19ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[39].pppg$o++;
    accessRouter[36].pppg$o++ --> GTITMChannel {  delay = 29ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[37].pppg$i++;
    accessRouter[36].pppg$i++ <-- GTITMChannel {  delay = 29ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[37].pppg$o++;
    accessRouter[37].pppg$o++ --> GTITMChannel {  delay = 34ms; ber = 1.0E-17; datarate = 1.048576E8bps; } --> accessRouter[38].pppg$i++;
    accessRouter[37].pppg$i++ <-- GTITMChannel {  delay = 34ms; ber = 1.0E-17; datarate = 1.048576E8bps; } <-- accessRouter[38].pppg$o++;
}

//
// Example network that instantiates GTITM_TransitStub_Network.
//
network GTITM_TS_IPv4Network extends GTITM_TS_IPv4Underlay
{
	parameters:
}

