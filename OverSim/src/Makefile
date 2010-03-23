#
# OMNeT++/OMNEST Makefile for OverSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -I../../INET-OverSim-20090317/src/transport/tcp -I../../INET-OverSim-20090317/src/applications/pingapp -I../../INET-OverSim-20090317/src/networklayer/mpls -I../../INET-OverSim-20090317/src/networklayer/ipv4 -I../../INET-OverSim-20090317/src/linklayer/contract -I../../INET-OverSim-20090317/src/networklayer/ldp -I../../INET-OverSim-20090317/src/linklayer/mfcore -I../../INET-OverSim-20090317/src/networklayer/ipv6 -I../../INET-OverSim-20090317/src/networklayer/arp -I../../INET-OverSim-20090317/src/applications/udpapp -I../../INET-OverSim-20090317/src/networklayer/ted -I../../INET-OverSim-20090317/src/networklayer/rsvp_te -I../../INET-OverSim-20090317/src/util/headerserializers -I../../INET-OverSim-20090317/src/networklayer/contract -I../../INET-OverSim-20090317/src/transport/contract -I../../INET-OverSim-20090317/src/networklayer/common -I../../INET-OverSim-20090317/src/transport/sctp -I../../INET-OverSim-20090317/src/transport/udp -I../../INET-OverSim-20090317/src/base -I../../INET-OverSim-20090317/src/networklayer/icmpv6 -I../../INET-OverSim-20090317/src/world -I../../INET-OverSim-20090317/src/util -L/home/admin/sim/INET-OverSim-20090317/src -L/usr/lib -L../../INET-OverSim-20090317/out/$(CONFIGNAME)/src -lINET -KINET_PROJ=../../INET-OverSim-20090317 -- -lgmp
#

# Name of target to be created (-o option)
TARGET = OverSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../INET-OverSim-20090317/src/transport/tcp \
    -I../../INET-OverSim-20090317/src/applications/pingapp \
    -I../../INET-OverSim-20090317/src/networklayer/mpls \
    -I../../INET-OverSim-20090317/src/networklayer/ipv4 \
    -I../../INET-OverSim-20090317/src/linklayer/contract \
    -I../../INET-OverSim-20090317/src/networklayer/ldp \
    -I../../INET-OverSim-20090317/src/linklayer/mfcore \
    -I../../INET-OverSim-20090317/src/networklayer/ipv6 \
    -I../../INET-OverSim-20090317/src/networklayer/arp \
    -I../../INET-OverSim-20090317/src/applications/udpapp \
    -I../../INET-OverSim-20090317/src/networklayer/ted \
    -I../../INET-OverSim-20090317/src/networklayer/rsvp_te \
    -I../../INET-OverSim-20090317/src/util/headerserializers \
    -I../../INET-OverSim-20090317/src/networklayer/contract \
    -I../../INET-OverSim-20090317/src/transport/contract \
    -I../../INET-OverSim-20090317/src/networklayer/common \
    -I../../INET-OverSim-20090317/src/transport/sctp \
    -I../../INET-OverSim-20090317/src/transport/udp \
    -I../../INET-OverSim-20090317/src/base \
    -I../../INET-OverSim-20090317/src/networklayer/icmpv6 \
    -I../../INET-OverSim-20090317/src/world \
    -I../../INET-OverSim-20090317/src/util \
    -I. \
    -Iapplications \
    -Iapplications/dht \
    -Iapplications/giasearchapp \
    -Iapplications/i3 \
    -Iapplications/i3/i3Apps \
    -Iapplications/kbrtestapp \
    -Iapplications/myapplication \
    -Iapplications/nicetestapp \
    -Iapplications/realworldtestapp \
    -Iapplications/scribe \
    -Iapplications/scribetest \
    -Iapplications/simplegameclient \
    -Iapplications/tierdummy \
    -Icommon \
    -Icommon/cbr \
    -Ioverlay \
    -Ioverlay/bamboo \
    -Ioverlay/broose \
    -Ioverlay/chord \
    -Ioverlay/gia \
    -Ioverlay/kademlia \
    -Ioverlay/koorde \
    -Ioverlay/myoverlay \
    -Ioverlay/nice \
    -Ioverlay/pastry \
    -Ioverlay/pubsubmmog \
    -Ioverlay/quon \
    -Ioverlay/vast \
    -Itier2 \
    -Itier2/dhttestapp \
    -Itier2/p2pns \
    -Itier2/simmud \
    -Itier3 \
    -Itier3/xmlrpcinterface \
    -Itier3/xmlrpcinterface/xmlrpc++ \
    -Iunderlay \
    -Iunderlay/inetunderlay \
    -Iunderlay/simpleunderlay \
    -Iunderlay/singlehostunderlay \
    -Iunderlay/singlehostunderlay/stun

# Additional object and library files to link with
EXTRA_OBJS = -lgmp

# Additional libraries (-L, -l options)
LIBS = -L$(INET_PROJ)/src -L/usr/lib -L../../INET-OverSim-20090317/out/$(CONFIGNAME)/src  -lINET
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/src` -Wl,-rpath,`abspath /usr/lib` -Wl,-rpath,`abspath ../../INET-OverSim-20090317/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/dht/DHTDataStorage.o \
    $O/applications/dht/DHT.o \
    $O/applications/giasearchapp/GIASearchApp.o \
    $O/applications/giasearchapp/SearchMsgBookkeeping.o \
    $O/applications/i3/I3.o \
    $O/applications/i3/I3Identifier.o \
    $O/applications/i3/I3Trigger.o \
    $O/applications/i3/I3Message.o \
    $O/applications/i3/I3IdentifierStack.o \
    $O/applications/i3/I3BaseApp.o \
    $O/applications/i3/TriggerTable.o \
    $O/applications/i3/OverlayDummy.o \
    $O/applications/i3/I3IPAddress.o \
    $O/applications/i3/I3SubIdentifier.o \
    $O/applications/i3/i3Apps/I3LatencyStretch.o \
    $O/applications/i3/i3Apps/I3HostMobility.o \
    $O/applications/i3/i3Apps/I3Anycast.o \
    $O/applications/i3/i3Apps/I3Triggers.o \
    $O/applications/i3/i3Apps/I3Composite.o \
    $O/applications/i3/i3Apps/I3Multicast.o \
    $O/applications/i3/i3Apps/I3TriggerRoutingTime.o \
    $O/applications/i3/i3Apps/I3Session.o \
    $O/applications/kbrtestapp/KBRTestApp.o \
    $O/applications/myapplication/MyApplication.o \
    $O/applications/nicetestapp/NiceTestApp.o \
    $O/applications/realworldtestapp/RealWorldTestPacketParser.o \
    $O/applications/realworldtestapp/RealWorldTestApp.o \
    $O/applications/scribe/Scribe.o \
    $O/applications/scribe/ScribeGroup.o \
    $O/applications/scribetest/ScribeTest.o \
    $O/applications/simplegameclient/hotspotRoaming.o \
    $O/applications/simplegameclient/ConnectivityProbeApp.o \
    $O/applications/simplegameclient/SimpleGameClient.o \
    $O/applications/simplegameclient/randomRoaming.o \
    $O/applications/simplegameclient/MovementGenerator.o \
    $O/applications/simplegameclient/traverseRoaming.o \
    $O/applications/simplegameclient/GlobalCoordinator.o \
    $O/applications/simplegameclient/greatGathering.o \
    $O/applications/simplegameclient/realWorldRoaming.o \
    $O/applications/simplegameclient/groupRoaming.o \
    $O/applications/simplegameclient/BoundingBox2D.o \
    $O/applications/tierdummy/TierDummy.o \
    $O/common/CryptoModule.o \
    $O/common/TransportAddress.o \
    $O/common/NodeVector.o \
    $O/common/RandomChurn.o \
    $O/common/BinaryValue.o \
    $O/common/GlobalTraceManager.o \
    $O/common/GlobalStatistics.o \
    $O/common/OverlayKey.o \
    $O/common/TopologyVis.o \
    $O/common/NodeHandle.o \
    $O/common/Vector2D.o \
    $O/common/SHA1.o \
    $O/common/ParetoChurn.o \
    $O/common/BaseRpc.o \
    $O/common/GlobalParameters.o \
    $O/common/TraceChurn.o \
    $O/common/OverSimMessage.o \
    $O/common/NoChurn.o \
    $O/common/PeerInfo.o \
    $O/common/BaseApp.o \
    $O/common/BootstrapList.o \
    $O/common/Vivaldi.o \
    $O/common/ChurnGenerator.o \
    $O/common/IterativeLookup.o \
    $O/common/Nps.o \
    $O/common/HoangGlobalObject.o \
    $O/common/RpcListener.o \
    $O/common/UnderlayConfigurator.o \
    $O/common/RecursiveLookup.o \
    $O/common/ProxNodeHandle.o \
    $O/common/GenericPacketParser.o \
    $O/common/BaseOverlay.o \
    $O/common/LifetimeChurn.o \
    $O/common/cnetcommbuffer.o \
    $O/common/GlobalNodeList.o \
    $O/common/NeighborCache.o \
    $O/common/cbr/CBR-DHT.o \
    $O/common/cbr/CoordBasedRouting.o \
    $O/common/cbr/simplex.o \
    $O/common/cbr/Landmark.o \
    $O/common/cbr/yang.o \
    $O/overlay/bamboo/Bamboo.o \
    $O/overlay/broose/BrooseHandle.o \
    $O/overlay/broose/BrooseBucket.o \
    $O/overlay/broose/Broose.o \
    $O/overlay/chord/ChordSuccessorList.o \
    $O/overlay/chord/Chord.o \
    $O/overlay/chord/ChordFingerTable.o \
    $O/overlay/gia/GiaNode.o \
    $O/overlay/gia/Gia.o \
    $O/overlay/gia/GiaMessageBookkeeping.o \
    $O/overlay/gia/GiaKeyListModule.o \
    $O/overlay/gia/GiaNeighborCandidateList.o \
    $O/overlay/gia/GiaTokenFactory.o \
    $O/overlay/gia/GiaNeighbors.o \
    $O/overlay/gia/GiaKeyList.o \
    $O/overlay/kademlia/KademliaBucket.o \
    $O/overlay/kademlia/Kademlia.o \
    $O/overlay/koorde/Koorde.o \
    $O/overlay/myoverlay/MyOverlay.o \
    $O/overlay/nice/NicePeerInfo.o \
    $O/overlay/nice/Nice.o \
    $O/overlay/nice/NiceCluster.o \
    $O/overlay/pastry/BasePastry.o \
    $O/overlay/pastry/PastryStateObject.o \
    $O/overlay/pastry/PastryRoutingTable.o \
    $O/overlay/pastry/Pastry.o \
    $O/overlay/pastry/PastryNeighborhoodSet.o \
    $O/overlay/pastry/PastryLeafSet.o \
    $O/overlay/pubsubmmog/PubSubMMOG.o \
    $O/overlay/pubsubmmog/PubSubLobby.o \
    $O/overlay/pubsubmmog/PubSubSubspace.o \
    $O/overlay/pubsubmmog/PubSubSubspaceId.o \
    $O/overlay/quon/QuonHelper.o \
    $O/overlay/quon/ConnectivityProbeQuon.o \
    $O/overlay/quon/Quon.o \
    $O/overlay/vast/ConnectivityProbe.o \
    $O/overlay/vast/Vast.o \
    $O/overlay/vast/VastDefs.o \
    $O/tier2/dhttestapp/GlobalDhtTestMap.o \
    $O/tier2/dhttestapp/DHTTestApp.o \
    $O/tier2/p2pns/P2pnsCache.o \
    $O/tier2/p2pns/P2pns.o \
    $O/tier2/simmud/SimMud.o \
    $O/tier3/xmlrpcinterface/XmlRpcInterface.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.o \
    $O/underlay/inetunderlay/InetInfo.o \
    $O/underlay/inetunderlay/AccessNet.o \
    $O/underlay/inetunderlay/InetUnderlayConfigurator.o \
    $O/underlay/simpleunderlay/SimpleUDP.o \
    $O/underlay/simpleunderlay/SimpleUnderlayConfigurator.o \
    $O/underlay/simpleunderlay/SimpleInfo.o \
    $O/underlay/simpleunderlay/SimpleNodeEntry.o \
    $O/underlay/singlehostunderlay/tunoutscheduler.o \
    $O/underlay/singlehostunderlay/RealworldDevice.o \
    $O/underlay/singlehostunderlay/TunOutDevice.o \
    $O/underlay/singlehostunderlay/RealworldApp.o \
    $O/underlay/singlehostunderlay/realtimescheduler.o \
    $O/underlay/singlehostunderlay/RealworldConnector.o \
    $O/underlay/singlehostunderlay/SingleHostUnderlayConfigurator.o \
    $O/underlay/singlehostunderlay/apptunoutscheduler.o \
    $O/underlay/singlehostunderlay/ZeroconfConnector.o \
    $O/underlay/singlehostunderlay/UdpOutDevice.o \
    $O/underlay/singlehostunderlay/udpoutscheduler.o \
    $O/underlay/singlehostunderlay/stun/stun.o \
    $O/underlay/singlehostunderlay/stun/udp.o \
    $O/applications/dht/DHTMessage_m.o \
    $O/applications/i3/I3Message_m.o \
    $O/applications/i3/i3Apps/I3TriggersMessage_m.o \
    $O/applications/i3/i3Apps/I3SessionMessage_m.o \
    $O/applications/kbrtestapp/KBRTestMessage_m.o \
    $O/applications/myapplication/MyMessage_m.o \
    $O/applications/nicetestapp/NiceTestAppMsg_m.o \
    $O/applications/realworldtestapp/RealWorldTestMessage_m.o \
    $O/applications/scribe/ScribeMessage_m.o \
    $O/applications/simplegameclient/SimpleGameClient_m.o \
    $O/common/GlobalTraceManager_m.o \
    $O/common/ExtAPIMessages_m.o \
    $O/common/CommonMessages_m.o \
    $O/common/Nps_m.o \
    $O/common/OverSimMessage_m.o \
    $O/common/Churn_m.o \
    $O/common/cbr/CBR-DHTMessage_m.o \
    $O/common/cbr/CoordMessages_m.o \
    $O/overlay/broose/BrooseMessage_m.o \
    $O/overlay/chord/ChordMessage_m.o \
    $O/overlay/gia/GiaMessage_m.o \
    $O/overlay/myoverlay/MyOverlay_m.o \
    $O/overlay/nice/NiceMessage_m.o \
    $O/overlay/pastry/PastryMessage_m.o \
    $O/overlay/pubsubmmog/PubSubMessage_m.o \
    $O/overlay/quon/Quon_m.o \
    $O/overlay/vast/Vast_m.o \
    $O/tier2/dhttestapp/DHTTestAppMessages_m.o \
    $O/tier2/p2pns/P2pnsMessage_m.o \
    $O/tier2/simmud/SimMud_m.o \
    $O/underlay/simpleunderlay/SimpleUDPPacket_m.o

# Message files
MSGFILES = \
    applications/dht/DHTMessage.msg \
    applications/i3/I3Message.msg \
    applications/i3/i3Apps/I3TriggersMessage.msg \
    applications/i3/i3Apps/I3SessionMessage.msg \
    applications/kbrtestapp/KBRTestMessage.msg \
    applications/myapplication/MyMessage.msg \
    applications/nicetestapp/NiceTestAppMsg.msg \
    applications/realworldtestapp/RealWorldTestMessage.msg \
    applications/scribe/ScribeMessage.msg \
    applications/simplegameclient/SimpleGameClient.msg \
    common/GlobalTraceManager.msg \
    common/ExtAPIMessages.msg \
    common/CommonMessages.msg \
    common/Nps.msg \
    common/OverSimMessage.msg \
    common/Churn.msg \
    common/cbr/CBR-DHTMessage.msg \
    common/cbr/CoordMessages.msg \
    overlay/broose/BrooseMessage.msg \
    overlay/chord/ChordMessage.msg \
    overlay/gia/GiaMessage.msg \
    overlay/myoverlay/MyOverlay.msg \
    overlay/nice/NiceMessage.msg \
    overlay/pastry/PastryMessage.msg \
    overlay/pubsubmmog/PubSubMessage.msg \
    overlay/quon/Quon.msg \
    overlay/vast/Vast.msg \
    tier2/dhttestapp/DHTTestAppMessages.msg \
    tier2/p2pns/P2pnsMessage.msg \
    tier2/simmud/SimMud.msg \
    underlay/simpleunderlay/SimpleUDPPacket.msg

# Other makefile variables (-K)
INET_PROJ=../../INET-OverSim-20090317

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# inserted from file 'makefrag':
INCLUDE_PATH += -I$(OMNETPP_ROOT)/src/sim/parsim -I/sw/include
LIBS += -L/sw/lib

# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET)

$(TARGET) : $O/$(TARGET)
	ln -s -f $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@mkdir -p $O
	$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY:

.SUFFIXES: .cc

$O/%.o: %.cc
	@mkdir -p $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f OverSim OverSim.exe libOverSim.so libOverSim.a libOverSim.dll libOverSim.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f applications/*_m.cc applications/*_m.h
	-rm -f applications/dht/*_m.cc applications/dht/*_m.h
	-rm -f applications/giasearchapp/*_m.cc applications/giasearchapp/*_m.h
	-rm -f applications/i3/*_m.cc applications/i3/*_m.h
	-rm -f applications/i3/i3Apps/*_m.cc applications/i3/i3Apps/*_m.h
	-rm -f applications/kbrtestapp/*_m.cc applications/kbrtestapp/*_m.h
	-rm -f applications/myapplication/*_m.cc applications/myapplication/*_m.h
	-rm -f applications/nicetestapp/*_m.cc applications/nicetestapp/*_m.h
	-rm -f applications/realworldtestapp/*_m.cc applications/realworldtestapp/*_m.h
	-rm -f applications/scribe/*_m.cc applications/scribe/*_m.h
	-rm -f applications/scribetest/*_m.cc applications/scribetest/*_m.h
	-rm -f applications/simplegameclient/*_m.cc applications/simplegameclient/*_m.h
	-rm -f applications/tierdummy/*_m.cc applications/tierdummy/*_m.h
	-rm -f common/*_m.cc common/*_m.h
	-rm -f common/cbr/*_m.cc common/cbr/*_m.h
	-rm -f overlay/*_m.cc overlay/*_m.h
	-rm -f overlay/bamboo/*_m.cc overlay/bamboo/*_m.h
	-rm -f overlay/broose/*_m.cc overlay/broose/*_m.h
	-rm -f overlay/chord/*_m.cc overlay/chord/*_m.h
	-rm -f overlay/gia/*_m.cc overlay/gia/*_m.h
	-rm -f overlay/kademlia/*_m.cc overlay/kademlia/*_m.h
	-rm -f overlay/koorde/*_m.cc overlay/koorde/*_m.h
	-rm -f overlay/myoverlay/*_m.cc overlay/myoverlay/*_m.h
	-rm -f overlay/nice/*_m.cc overlay/nice/*_m.h
	-rm -f overlay/pastry/*_m.cc overlay/pastry/*_m.h
	-rm -f overlay/pubsubmmog/*_m.cc overlay/pubsubmmog/*_m.h
	-rm -f overlay/quon/*_m.cc overlay/quon/*_m.h
	-rm -f overlay/vast/*_m.cc overlay/vast/*_m.h
	-rm -f tier2/*_m.cc tier2/*_m.h
	-rm -f tier2/dhttestapp/*_m.cc tier2/dhttestapp/*_m.h
	-rm -f tier2/p2pns/*_m.cc tier2/p2pns/*_m.h
	-rm -f tier2/simmud/*_m.cc tier2/simmud/*_m.h
	-rm -f tier3/*_m.cc tier3/*_m.h
	-rm -f tier3/xmlrpcinterface/*_m.cc tier3/xmlrpcinterface/*_m.h
	-rm -f tier3/xmlrpcinterface/xmlrpc++/*_m.cc tier3/xmlrpcinterface/xmlrpc++/*_m.h
	-rm -f underlay/*_m.cc underlay/*_m.h
	-rm -f underlay/inetunderlay/*_m.cc underlay/inetunderlay/*_m.h
	-rm -f underlay/simpleunderlay/*_m.cc underlay/simpleunderlay/*_m.h
	-rm -f underlay/singlehostunderlay/*_m.cc underlay/singlehostunderlay/*_m.h
	-rm -f underlay/singlehostunderlay/stun/*_m.cc underlay/singlehostunderlay/stun/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/dht/*.cc applications/giasearchapp/*.cc applications/i3/*.cc applications/i3/i3Apps/*.cc applications/kbrtestapp/*.cc applications/myapplication/*.cc applications/nicetestapp/*.cc applications/realworldtestapp/*.cc applications/scribe/*.cc applications/scribetest/*.cc applications/simplegameclient/*.cc applications/tierdummy/*.cc common/*.cc common/cbr/*.cc overlay/*.cc overlay/bamboo/*.cc overlay/broose/*.cc overlay/chord/*.cc overlay/gia/*.cc overlay/kademlia/*.cc overlay/koorde/*.cc overlay/myoverlay/*.cc overlay/nice/*.cc overlay/pastry/*.cc overlay/pubsubmmog/*.cc overlay/quon/*.cc overlay/vast/*.cc tier2/*.cc tier2/dhttestapp/*.cc tier2/p2pns/*.cc tier2/simmud/*.cc tier3/*.cc tier3/xmlrpcinterface/*.cc tier3/xmlrpcinterface/xmlrpc++/*.cc underlay/*.cc underlay/inetunderlay/*.cc underlay/simpleunderlay/*.cc underlay/singlehostunderlay/*.cc underlay/singlehostunderlay/stun/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/dht/DHT.o: applications/dht/DHT.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/dht/DHTDataStorage.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/SHA1.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/dht/DHT.h \
	applications/dht/DHTMessage_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/dht/DHTDataStorage.o: applications/dht/DHTDataStorage.cc \
	applications/dht/DHTDataStorage.h \
	common/CommonMessages_m.h \
	common/hashWatch.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/dht/DHTMessage_m.o: applications/dht/DHTMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	applications/dht/DHTMessage_m.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/giasearchapp/SearchMsgBookkeeping.o: applications/giasearchapp/SearchMsgBookkeeping.cc \
	common/OverlayKey.h \
	applications/giasearchapp/SearchMsgBookkeeping.h
$O/applications/giasearchapp/GIASearchApp.o: applications/giasearchapp/GIASearchApp.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	overlay/gia/GiaMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/ExtAPIMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/giasearchapp/GIASearchApp.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	applications/giasearchapp/SearchMsgBookkeeping.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/i3/I3Message_m.o: applications/i3/I3Message_m.cc \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3Message_m.h
$O/applications/i3/OverlayDummy.o: applications/i3/OverlayDummy.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/i3/I3BaseApp.o: applications/i3/I3BaseApp.cc \
	applications/i3/I3Trigger.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/InitStages.h \
	common/BootstrapList.h \
	applications/i3/I3BaseApp.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	applications/i3/I3Message_m.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	applications/i3/I3IPAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	applications/i3/I3SubIdentifier.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	applications/i3/I3Message.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/RpcMacros.h
$O/applications/i3/I3IPAddress.o: applications/i3/I3IPAddress.cc \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h
$O/applications/i3/I3.o: applications/i3/I3.cc \
	applications/i3/I3Trigger.h \
	applications/i3/TriggerTable.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/SHA1.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/InitStages.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	applications/i3/I3.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	applications/i3/I3Message_m.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	applications/i3/I3IPAddress.h \
	common/OverSimMessage.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/transport/contract/UDPSocket.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	applications/i3/I3Message.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/RpcMacros.h
$O/applications/i3/I3Message.o: applications/i3/I3Message.cc \
	applications/i3/I3Trigger.h \
	applications/i3/I3Message.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3Message_m.h
$O/applications/i3/I3Identifier.o: applications/i3/I3Identifier.cc \
	common/SHA1.h \
	common/OverlayKey.h \
	applications/i3/I3Identifier.h
$O/applications/i3/I3IdentifierStack.o: applications/i3/I3IdentifierStack.cc \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3IPAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/applications/i3/I3Trigger.o: applications/i3/I3Trigger.cc \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/i3/TriggerTable.o: applications/i3/TriggerTable.cc \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/TriggerTable.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	applications/i3/I3IPAddress.h \
	common/OverSimMessage.h \
	applications/i3/I3SubIdentifier.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	applications/i3/I3Message.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	applications/i3/I3.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	applications/i3/I3Message_m.h \
	common/RpcMacros.h
$O/applications/i3/I3SubIdentifier.o: applications/i3/I3SubIdentifier.cc \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	applications/i3/I3Identifier.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h
$O/applications/i3/i3Apps/I3TriggerRoutingTime.o: applications/i3/i3Apps/I3TriggerRoutingTime.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	applications/i3/I3IPAddress.h \
	common/OverSimMessage.h \
	applications/i3/I3SubIdentifier.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	applications/i3/I3Message.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/i3/I3BaseApp.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	applications/i3/I3.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	applications/i3/I3Message_m.h \
	common/RpcMacros.h
$O/applications/i3/i3Apps/I3LatencyStretch.o: applications/i3/i3Apps/I3LatencyStretch.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	applications/i3/I3IPAddress.h \
	common/OverSimMessage.h \
	applications/i3/I3SubIdentifier.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	applications/i3/I3Message.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/i3/I3BaseApp.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	applications/i3/I3.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	applications/i3/I3Message_m.h \
	common/RpcMacros.h
$O/applications/i3/i3Apps/I3Composite.o: applications/i3/i3Apps/I3Composite.cc \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Message.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3BaseApp.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3Message_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/i3/i3Apps/I3Triggers.o: applications/i3/i3Apps/I3Triggers.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3Message.h \
	applications/i3/i3Apps/I3TriggersMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3BaseApp.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	applications/i3/I3SubIdentifier.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3Message_m.h
$O/applications/i3/i3Apps/I3SessionMessage_m.o: applications/i3/i3Apps/I3SessionMessage_m.cc \
	applications/i3/i3Apps/I3SessionMessage_m.h \
	common/OverlayKey.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3Anycast.o: applications/i3/i3Apps/I3Anycast.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3Message.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3BaseApp.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3Message_m.h
$O/applications/i3/i3Apps/I3TriggersMessage_m.o: applications/i3/i3Apps/I3TriggersMessage_m.cc \
	common/OverlayKey.h \
	applications/i3/i3Apps/I3TriggersMessage_m.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3Multicast.o: applications/i3/i3Apps/I3Multicast.cc \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Message.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3BaseApp.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3Message_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/i3/i3Apps/I3HostMobility.o: applications/i3/i3Apps/I3HostMobility.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	applications/i3/I3IPAddress.h \
	common/OverSimMessage.h \
	applications/i3/I3SubIdentifier.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	applications/i3/I3Message.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/i3/I3BaseApp.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	applications/i3/I3.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	applications/i3/I3Message_m.h \
	common/RpcMacros.h
$O/applications/i3/i3Apps/I3Session.o: applications/i3/i3Apps/I3Session.cc \
	applications/i3/I3Trigger.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Message.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/i3/I3BaseApp.h \
	applications/i3/I3IPAddress.h \
	common/TransportAddress.h \
	applications/i3/i3Apps/I3SessionMessage_m.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Identifier.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3Message_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/kbrtestapp/KBRTestMessage_m.o: applications/kbrtestapp/KBRTestMessage_m.cc \
	applications/kbrtestapp/KBRTestMessage_m.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/kbrtestapp/KBRTestApp.o: applications/kbrtestapp/KBRTestApp.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	applications/kbrtestapp/KBRTestMessage_m.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	applications/kbrtestapp/KBRTestApp.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/myapplication/MyApplication.o: applications/myapplication/MyApplication.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	applications/myapplication/MyApplication.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	applications/myapplication/MyMessage_m.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/myapplication/MyMessage_m.o: applications/myapplication/MyMessage_m.cc \
	applications/myapplication/MyMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/applications/nicetestapp/NiceTestAppMsg_m.o: applications/nicetestapp/NiceTestAppMsg_m.cc \
	applications/nicetestapp/NiceTestAppMsg_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/applications/nicetestapp/NiceTestApp.o: applications/nicetestapp/NiceTestApp.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/nicetestapp/NiceTestApp.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	applications/nicetestapp/NiceTestAppMsg_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/nice/NiceMessage_m.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/realworldtestapp/RealWorldTestMessage_m.o: applications/realworldtestapp/RealWorldTestMessage_m.cc \
	applications/realworldtestapp/RealWorldTestMessage_m.h
$O/applications/realworldtestapp/RealWorldTestPacketParser.o: applications/realworldtestapp/RealWorldTestPacketParser.cc \
	applications/realworldtestapp/RealWorldTestMessage_m.h \
	applications/realworldtestapp/RealWorldTestPacketParser.h \
	common/PacketParser.h
$O/applications/realworldtestapp/RealWorldTestApp.o: applications/realworldtestapp/RealWorldTestApp.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	applications/realworldtestapp/RealWorldTestApp.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	applications/realworldtestapp/RealWorldTestMessage_m.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/scribe/ScribeGroup.o: applications/scribe/ScribeGroup.cc \
	applications/scribe/ScribeMessage_m.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	applications/scribe/ScribeGroup.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/scribe/Scribe.o: applications/scribe/Scribe.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/scribe/ScribeMessage_m.h \
	applications/scribe/Scribe.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	applications/scribe/ScribeGroup.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/scribe/ScribeMessage_m.o: applications/scribe/ScribeMessage_m.cc \
	applications/scribe/ScribeMessage_m.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	applications/scribe/ScribeGroup.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/scribetest/ScribeTest.o: applications/scribetest/ScribeTest.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	applications/scribetest/ScribeTest.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/simplegameclient/greatGathering.o: applications/simplegameclient/greatGathering.cc \
	applications/simplegameclient/MovementGenerator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	applications/simplegameclient/greatGathering.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/simplegameclient/ConnectivityProbeApp.o: applications/simplegameclient/ConnectivityProbeApp.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	applications/simplegameclient/hotspotRoaming.h \
	common/OverSimMessage_m.h \
	applications/simplegameclient/groupRoaming.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	applications/simplegameclient/BoundingBox2D.h \
	applications/simplegameclient/realWorldRoaming.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	applications/simplegameclient/SimpleGameClient_m.h \
	applications/simplegameclient/traverseRoaming.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	applications/simplegameclient/ConnectivityProbeApp.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/GlobalCoordinator.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	applications/simplegameclient/SCPacket.h \
	applications/simplegameclient/randomRoaming.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	applications/simplegameclient/MovementGenerator.h \
	applications/simplegameclient/SimpleGameClient.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	applications/simplegameclient/greatGathering.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/simplegameclient/BoundingBox2D.o: applications/simplegameclient/BoundingBox2D.cc \
	applications/simplegameclient/BoundingBox2D.h \
	common/Vector2D.h
$O/applications/simplegameclient/SimpleGameClient.o: applications/simplegameclient/SimpleGameClient.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	applications/simplegameclient/hotspotRoaming.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	common/OverSimMessage_m.h \
	applications/simplegameclient/groupRoaming.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	applications/simplegameclient/realWorldRoaming.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	applications/simplegameclient/SimpleGameClient_m.h \
	applications/simplegameclient/traverseRoaming.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/GlobalCoordinator.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	applications/simplegameclient/SCPacket.h \
	applications/simplegameclient/randomRoaming.h \
	common/CommonMessages_m.h \
	applications/simplegameclient/MovementGenerator.h \
	applications/simplegameclient/SimpleGameClient.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	applications/simplegameclient/greatGathering.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/simplegameclient/groupRoaming.o: applications/simplegameclient/groupRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/simplegameclient/groupRoaming.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/simplegameclient/realWorldRoaming.o: applications/simplegameclient/realWorldRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/simplegameclient/realWorldRoaming.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/simplegameclient/SimpleGameClient_m.o: applications/simplegameclient/SimpleGameClient_m.cc \
	common/OverlayKey.h \
	applications/simplegameclient/SimpleGameClient_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	common/Vector2D.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/applications/simplegameclient/traverseRoaming.o: applications/simplegameclient/traverseRoaming.cc \
	common/GlobalStatistics.h \
	applications/simplegameclient/MovementGenerator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	applications/simplegameclient/traverseRoaming.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/GlobalCoordinator.h
$O/applications/simplegameclient/randomRoaming.o: applications/simplegameclient/randomRoaming.cc \
	applications/simplegameclient/randomRoaming.h \
	applications/simplegameclient/MovementGenerator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/simplegameclient/GlobalCoordinator.o: applications/simplegameclient/GlobalCoordinator.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/GlobalCoordinator.h \
	common/TransportAddress.h
$O/applications/simplegameclient/MovementGenerator.o: applications/simplegameclient/MovementGenerator.cc \
	common/OverlayKey.h \
	applications/simplegameclient/MovementGenerator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/NodeHandle.h \
	common/Vector2D.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/GlobalCoordinator.h \
	common/TransportAddress.h
$O/applications/simplegameclient/hotspotRoaming.o: applications/simplegameclient/hotspotRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	applications/simplegameclient/hotspotRoaming.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/StringConvert.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/GlobalCoordinator.h
$O/applications/tierdummy/TierDummy.o: applications/tierdummy/TierDummy.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	applications/tierdummy/TierDummy.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/ParetoChurn.o: common/ParetoChurn.cc \
	common/ChurnGenerator.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/ParetoChurn.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Churn_m.h
$O/common/NeighborCache.o: common/NeighborCache.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/PeerInfo.h \
	common/NeighborCache.h \
	common/hashWatch.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/cbr/CoordMessages_m.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/Vivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/Nps.h \
	common/NodeVector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/LifetimeChurn.o: common/LifetimeChurn.cc \
	common/LifetimeChurn.h \
	common/ChurnGenerator.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Churn_m.h
$O/common/SHA1.o: common/SHA1.cc \
	common/SHA1.h
$O/common/OverSimMessage.o: common/OverSimMessage.cc \
	common/OverSimMessage.h \
	common/cnetcommbuffer.h \
	common/OverSimMessage_m.h
$O/common/CryptoModule.o: common/CryptoModule.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverlayAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/cnetcommbuffer.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/CryptoModule.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/ExtAPIMessages_m.o: common/ExtAPIMessages_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ExtAPIMessages_m.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/BaseApp.o: common/BaseApp.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/transport/contract/UDPSocket.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/RpcListener.o: common/RpcListener.cc \
	common/RpcState.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/RecursiveLookup.o: common/RecursiveLookup.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/LookupListener.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/Nps_m.o: common/Nps_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/Nps_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/TransportAddress.o: common/TransportAddress.cc \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/Vivaldi.o: common/Vivaldi.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/NeighborCache.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/Vivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/UnderlayConfigurator.o: common/UnderlayConfigurator.cc \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/OverlayKey.h \
	common/GlobalNodeList.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ChurnGeneratorAccess.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/Nps.o: common/Nps.cc \
	common/NeighborCache.h \
	common/UnderlayConfigurator.h \
	common/oversim_mapset.h \
	common/cbr/CoordBasedRouting.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/HashFunc.h \
	common/Nps.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/PeerInfo.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/CoordinateSystem.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/cbr/Landmark.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/cbr/CoordBasedRoutingAccess.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/common/BaseOverlay.o: common/BaseOverlay.cc \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/LookupListener.h \
	common/InitStages.h \
	common/BootstrapList.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/GlobalParameters.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/GlobalParametersAccess.h \
	$(INET_PROJ)/src/transport/contract/UDPSocket.h \
	common/IterativeLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/RpcMacros.h
$O/common/NodeHandle.o: common/NodeHandle.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/Churn_m.o: common/Churn_m.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Churn_m.h \
	common/TransportAddress.h
$O/common/GlobalTraceManager.o: common/GlobalTraceManager.cc \
	common/GlobalTraceManager_m.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/OverlayKey.h \
	common/UnderlayConfiguratorAccess.h \
	common/GlobalNodeList.h \
	common/oversim_byteswap.h \
	common/GlobalTraceManager.h \
	common/TraceChurn.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/ChurnGenerator.o: common/ChurnGenerator.cc \
	common/ChurnGenerator.h \
	common/UnderlayConfiguratorAccess.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h
$O/common/BaseRpc.o: common/BaseRpc.cc \
	common/NeighborCache.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/oversim_mapset.h \
	common/OverlayAccess.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/cnetcommbuffer.h \
	common/InitStages.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/CryptoModule.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/RpcMacros.h
$O/common/NodeVector.o: common/NodeVector.cc \
	common/NodeVector.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/GlobalParameters.o: common/GlobalParameters.cc \
	common/GlobalParameters.h \
	common/OverlayKey.h
$O/common/RandomChurn.o: common/RandomChurn.cc \
	common/ChurnGenerator.h \
	common/RandomChurn.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/cnetcommbuffer.o: common/cnetcommbuffer.cc \
	common/cnetcommbuffer.h
$O/common/IterativeLookup.o: common/IterativeLookup.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/IterativeLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/LookupListener.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/OverSimMessage_m.o: common/OverSimMessage_m.cc \
	common/OverSimMessage_m.h
$O/common/TopologyVis.o: common/TopologyVis.cc \
	common/PeerInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/OverlayKey.h \
	common/GlobalNodeList.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/OverlayKey.o: common/OverlayKey.cc \
	common/SHA1.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/BinaryValue.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/NoChurn.o: common/NoChurn.cc \
	common/ChurnGenerator.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	common/NoChurn.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/CommonMessages_m.o: common/CommonMessages_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/ProxNodeHandle.o: common/ProxNodeHandle.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/HoangGlobalObject.o: common/HoangGlobalObject.cc \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/GlobalTraceManager_m.o: common/GlobalTraceManager_m.cc \
	common/GlobalTraceManager_m.h
$O/common/GenericPacketParser.o: common/GenericPacketParser.cc \
	common/GenericPacketParser.h \
	common/cnetcommbuffer.h \
	common/PacketParser.h
$O/common/GlobalNodeList.o: common/GlobalNodeList.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/PeerInfo.h \
	common/BootstrapNodeHandle.h \
	common/hashWatch.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BootstrapList.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/TraceChurn.o: common/TraceChurn.cc \
	common/PeerInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/OverlayKey.h \
	common/GlobalNodeList.h \
	common/oversim_byteswap.h \
	common/TraceChurn.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/BootstrapList.o: common/BootstrapList.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	common/hashWatch.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/UnderlayConfiguratorAccess.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	underlay/singlehostunderlay/ZeroconfConnector.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/Vector2D.o: common/Vector2D.cc \
	common/Vector2D.h
$O/common/PeerInfo.o: common/PeerInfo.cc \
	common/PeerInfo.h
$O/common/GlobalStatistics.o: common/GlobalStatistics.cc \
	common/GlobalStatistics.h
$O/common/BinaryValue.o: common/BinaryValue.cc \
	common/BinaryValue.h
$O/common/cbr/yang.o: common/cbr/yang.cc \
	common/cbr/yang.h
$O/common/cbr/simplex.o: common/cbr/simplex.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/NeighborCache.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/cbr/CoordMessages_m.o: common/cbr/CoordMessages_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/cbr/CoordMessages_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/cbr/Landmark.o: common/cbr/Landmark.cc \
	common/NeighborCache.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	common/BootstrapList.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	common/PeerInfo.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/base/BasicModule.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/cbr/Landmark.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/RpcMacros.h
$O/common/cbr/CoordBasedRouting.o: common/cbr/CoordBasedRouting.cc \
	common/PeerInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/CoordBasedRouting.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/GlobalNodeList.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/cbr/CBR-DHT.o: common/cbr/CBR-DHT.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/NeighborCache.h \
	applications/dht/DHTDataStorage.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/cbr/CoordBasedRouting.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/SHA1.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/cbr/CoordBasedRoutingAccess.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	applications/dht/DHTMessage_m.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/cbr/CBR-DHT.h \
	common/OverlayKey.h \
	common/cbr/CBR-DHTMessage_m.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/cbr/CBR-DHTMessage_m.o: common/cbr/CBR-DHTMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	applications/dht/DHTMessage_m.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	common/cbr/CBR-DHTMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/bamboo/Bamboo.o: overlay/bamboo/Bamboo.cc \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	overlay/bamboo/Bamboo.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	common/HashFunc.h \
	common/Nps.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	common/LookupListener.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	overlay/pastry/PastryRoutingTable.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/TransportAddress.h \
	overlay/pastry/PastryLeafSet.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/RpcMacros.h
$O/overlay/broose/BrooseMessage_m.o: overlay/broose/BrooseMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	overlay/broose/BrooseMessage_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/broose/Broose.o: overlay/broose/Broose.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	overlay/broose/BrooseBucket.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/broose/Broose.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	overlay/broose/BrooseHandle.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/LookupListener.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BootstrapList.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	overlay/broose/BrooseMessage_m.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/broose/BrooseHandle.o: overlay/broose/BrooseHandle.cc \
	overlay/broose/BrooseHandle.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/overlay/broose/BrooseBucket.o: overlay/broose/BrooseBucket.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	overlay/broose/BrooseBucket.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/broose/Broose.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	overlay/broose/BrooseHandle.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/broose/BrooseMessage_m.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/chord/ChordMessage_m.o: overlay/chord/ChordMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	overlay/chord/ChordMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/chord/Chord.o: overlay/chord/Chord.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/NeighborCache.h \
	common/GlobalParameters.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	overlay/chord/ChordMessage_m.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/CoordinateSystem.h \
	overlay/chord/ChordFingerTable.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	overlay/chord/Chord.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BootstrapList.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/chord/ChordSuccessorList.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/chord/ChordSuccessorList.o: overlay/chord/ChordSuccessorList.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/NeighborCache.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	overlay/chord/ChordMessage_m.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	overlay/chord/Chord.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	overlay/chord/ChordSuccessorList.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/chord/ChordFingerTable.o: overlay/chord/ChordFingerTable.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/NeighborCache.h \
	common/hashWatch.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	overlay/chord/ChordMessage_m.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/CoordinateSystem.h \
	overlay/chord/ChordFingerTable.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Nps.h \
	common/NodeVector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	overlay/chord/Chord.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	overlay/chord/ChordSuccessorList.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/gia/Gia.o: overlay/gia/Gia.cc \
	common/UnderlayConfigurator.h \
	overlay/gia/GiaNeighbors.h \
	overlay/gia/GiaMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/gia/GiaKeyListModule.h \
	common/ExtAPIMessages_m.h \
	overlay/gia/GiaMessageBookkeeping.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	overlay/gia/GiaKeyList.h \
	common/InitStages.h \
	common/BootstrapList.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/gia/GiaNeighborCandidateList.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/IterativeLookupConfiguration.h \
	overlay/gia/GiaTokenFactory.h \
	common/HoangGlobalObject.h \
	overlay/gia/Gia.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/RpcMacros.h
$O/overlay/gia/GiaMessage_m.o: overlay/gia/GiaMessage_m.cc \
	common/CommonMessages_m.h \
	overlay/gia/GiaMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/gia/GiaNode.o: overlay/gia/GiaNode.cc \
	overlay/gia/GiaNode.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/overlay/gia/GiaKeyList.o: overlay/gia/GiaKeyList.cc \
	common/OverlayKey.h \
	overlay/gia/GiaKeyList.h
$O/overlay/gia/GiaNeighborCandidateList.o: overlay/gia/GiaNeighborCandidateList.cc \
	overlay/gia/GiaNeighborCandidateList.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/overlay/gia/GiaKeyListModule.o: overlay/gia/GiaKeyListModule.cc \
	common/OverlayKey.h \
	common/InitStages.h \
	overlay/gia/GiaKeyList.h \
	overlay/gia/GiaKeyListModule.h
$O/overlay/gia/GiaMessageBookkeeping.o: overlay/gia/GiaMessageBookkeeping.cc \
	overlay/gia/GiaMessageBookkeeping.h \
	common/CommonMessages_m.h \
	overlay/gia/GiaKeyList.h \
	common/InitStages.h \
	overlay/gia/GiaMessage_m.h \
	overlay/gia/GiaNeighbors.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/gia/GiaTokenFactory.o: overlay/gia/GiaTokenFactory.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	overlay/gia/GiaMessage_m.h \
	overlay/gia/GiaNeighbors.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/gia/GiaKeyListModule.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/gia/GiaMessageBookkeeping.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	overlay/gia/GiaKeyList.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	overlay/gia/GiaNeighborCandidateList.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	overlay/gia/GiaTokenFactory.h \
	overlay/gia/Gia.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/gia/GiaNeighbors.o: overlay/gia/GiaNeighbors.cc \
	overlay/gia/GiaNode.h \
	common/OverlayKey.h \
	overlay/gia/GiaKeyList.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	overlay/gia/GiaNeighbors.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/overlay/kademlia/KademliaBucket.o: overlay/kademlia/KademliaBucket.cc \
	common/NodeVector.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	overlay/kademlia/KademliaBucket.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	overlay/kademlia/KademliaNodeHandle.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/kademlia/Kademlia.o: overlay/kademlia/Kademlia.cc \
	common/NeighborCache.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/kademlia/Kademlia.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/LookupListener.h \
	common/InitStages.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/OverSimMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/CoordinateSystem.h \
	overlay/kademlia/KademliaNodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	overlay/kademlia/KademliaBucket.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/RpcMacros.h
$O/overlay/koorde/Koorde.o: overlay/koorde/Koorde.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/OverSimMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/koorde/Koorde.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/myoverlay/MyOverlay.o: overlay/myoverlay/MyOverlay.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/UnderlayConfigurator.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	overlay/myoverlay/MyOverlay.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	overlay/myoverlay/MyOverlay_m.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/myoverlay/MyOverlay_m.o: overlay/myoverlay/MyOverlay_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	overlay/myoverlay/MyOverlay_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/nice/NiceMessage_m.o: overlay/nice/NiceMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/nice/NiceMessage_m.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/nice/Nice.o: overlay/nice/Nice.cc \
	common/PeerInfo.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	overlay/nice/NicePeerInfo.h \
	common/hashWatch.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	overlay/nice/NiceCluster.h \
	overlay/nice/combination.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	underlay/simpleunderlay/SimpleUDP.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/nice/Nice.h \
	overlay/nice/NiceMessage_m.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/nice/NiceCluster.o: overlay/nice/NiceCluster.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	overlay/nice/NiceCluster.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/nice/NicePeerInfo.o: overlay/nice/NicePeerInfo.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	overlay/nice/NicePeerInfo.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/pastry/PastryLeafSet.o: overlay/pastry/PastryLeafSet.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Nps.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/pastry/PastryLeafSet.h \
	common/IterativeLookupConfiguration.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	overlay/pastry/PastryRoutingTable.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/pastry/Pastry.o: overlay/pastry/Pastry.cc \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	overlay/pastry/Pastry.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
	overlay/pastry/PastryRoutingTable.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/TransportAddress.h \
	overlay/pastry/PastryLeafSet.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/RpcMacros.h
$O/overlay/pastry/PastryMessage_m.o: overlay/pastry/PastryMessage_m.cc \
	common/CommonMessages_m.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/pastry/PastryNeighborhoodSet.o: overlay/pastry/PastryNeighborhoodSet.cc \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/pastry/PastryStateObject.h \
	common/ProxNodeHandle.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/pastry/BasePastry.o: overlay/pastry/BasePastry.cc \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	common/HashFunc.h \
	common/Nps.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	overlay/pastry/PastryMessage_m.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	overlay/pastry/PastryRoutingTable.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/TransportAddress.h \
	overlay/pastry/PastryLeafSet.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/overlay/pastry/PastryRoutingTable.o: overlay/pastry/PastryRoutingTable.cc \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/pastry/PastryStateObject.h \
	common/ProxNodeHandle.h \
	overlay/pastry/PastryRoutingTable.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/pastry/PastryStateObject.o: overlay/pastry/PastryStateObject.cc \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	overlay/pastry/PastryStateObject.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/pubsubmmog/PubSubSubspaceId.o: overlay/pubsubmmog/PubSubSubspaceId.cc \
	overlay/pubsubmmog/PubSubSubspaceId.h
$O/overlay/pubsubmmog/PubSubLobby.o: overlay/pubsubmmog/PubSubLobby.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	overlay/pubsubmmog/PubSubLobby.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	overlay/pubsubmmog/PubSubSubspaceId.h \
	common/RpcMacros.h
$O/overlay/pubsubmmog/PubSubMessage_m.o: overlay/pubsubmmog/PubSubMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/pubsubmmog/PubSubMMOG.o: overlay/pubsubmmog/PubSubMMOG.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BootstrapList.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	overlay/pubsubmmog/PubSubMMOG.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	overlay/pubsubmmog/PubSubSubspaceId.h \
	common/RpcMacros.h
$O/overlay/pubsubmmog/PubSubSubspace.o: overlay/pubsubmmog/PubSubSubspace.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/pubsubmmog/PubSubSubspaceId.h
$O/overlay/quon/Quon_m.o: overlay/quon/Quon_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	overlay/quon/QuonHelper.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/quon/Quon_m.h \
	overlay/quon/QuonDefs.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/quon/QuonHelper.o: overlay/quon/QuonHelper.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	overlay/quon/QuonHelper.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	overlay/quon/QuonDefs.h \
	common/NodeHandle.h \
	common/Vector2D.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/overlay/quon/Quon.o: overlay/quon/Quon.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	overlay/quon/Quon.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/quon/QuonHelper.h \
	overlay/quon/Quon_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BootstrapList.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	overlay/quon/QuonDefs.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/quon/ConnectivityProbeQuon.o: overlay/quon/ConnectivityProbeQuon.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	overlay/quon/Quon.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	overlay/quon/QuonHelper.h \
	overlay/quon/Quon_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/quon/ConnectivityProbeQuon.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	overlay/quon/QuonDefs.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/vast/VastDefs.o: overlay/vast/VastDefs.cc \
	overlay/vast/VastDefs.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/NodeHandle.h \
	common/Vector2D.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/overlay/vast/Vast_m.o: overlay/vast/Vast_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	overlay/vast/Vast_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/overlay/vast/ConnectivityProbe.o: overlay/vast/ConnectivityProbe.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	overlay/vast/ConnectivityProbe.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/vast/VastDefs.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/vast/Vast.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	overlay/vast/Vast_m.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/vast/Vast.o: overlay/vast/Vast.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	overlay/vast/VastDefs.h \
	common/NodeVector.h \
	common/HashFunc.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BootstrapList.h \
	overlay/vast/Vast.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	overlay/vast/Vast_m.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/tier2/dhttestapp/DHTTestAppMessages_m.o: tier2/dhttestapp/DHTTestAppMessages_m.cc \
	common/OverlayKey.h \
	tier2/dhttestapp/DHTTestAppMessages_m.h
$O/tier2/dhttestapp/DHTTestApp.o: tier2/dhttestapp/DHTTestApp.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	tier2/dhttestapp/GlobalDhtTestMap.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	tier2/dhttestapp/DHTTestApp.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/tier2/dhttestapp/GlobalDhtTestMap.o: tier2/dhttestapp/GlobalDhtTestMap.cc \
	tier2/dhttestapp/GlobalDhtTestMap.h \
	common/GlobalStatistics.h \
	common/OverlayKey.h \
	common/BinaryValue.h \
	tier2/dhttestapp/DHTTestAppMessages_m.h \
	common/GlobalStatisticsAccess.h
$O/tier2/p2pns/P2pnsMessage_m.o: tier2/p2pns/P2pnsMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	tier2/p2pns/P2pnsMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/tier2/p2pns/P2pnsCache.o: tier2/p2pns/P2pnsCache.cc \
	common/OverlayKey.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	tier2/p2pns/P2pnsCache.h \
	common/NodeHandle.h \
	common/BinaryValue.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/tier2/p2pns/P2pns.o: tier2/p2pns/P2pns.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	tier2/p2pns/P2pnsCache.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	tier2/p2pns/P2pnsMessage_m.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	common/SHA1.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	tier3/xmlrpcinterface/XmlRpcInterface.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/dht/DHTMessage_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	tier2/p2pns/P2pns.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/tier2/simmud/SimMud.o: tier2/simmud/SimMud.cc \
	applications/scribe/ScribeMessage_m.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	tier2/simmud/SimMud_m.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	tier2/simmud/SimMud.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	applications/scribe/ScribeGroup.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/tier2/simmud/SimMud_m.o: tier2/simmud/SimMud_m.cc \
	tier2/simmud/SimMud_m.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/tier3/xmlrpcinterface/XmlRpcInterface.o: tier3/xmlrpcinterface/XmlRpcInterface.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	common/OverSimMessage_m.h \
	tier2/p2pns/P2pnsCache.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	common/SHA1.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	tier3/xmlrpcinterface/XmlRpcInterface.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/dht/DHTMessage_m.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	common/IterativeLookupConfiguration.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	tier2/p2pns/P2pns.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/base64.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	tier3/xmlrpcinterface/xmlrpc++/base64.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h
$O/underlay/inetunderlay/AccessNet.o: underlay/inetunderlay/AccessNet.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	underlay/inetunderlay/AccessNet.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/underlay/inetunderlay/InetInfo.o: underlay/inetunderlay/InetInfo.cc \
	common/PeerInfo.h \
	underlay/inetunderlay/InetInfo.h
$O/underlay/inetunderlay/InetUnderlayConfigurator.o: underlay/inetunderlay/InetUnderlayConfigurator.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	underlay/inetunderlay/AccessNet.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	underlay/inetunderlay/InetInfo.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/GlobalNodeList.h \
	underlay/inetunderlay/InetUnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/StringConvert.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h
$O/underlay/simpleunderlay/SimpleUnderlayConfigurator.o: underlay/simpleunderlay/SimpleUnderlayConfigurator.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/PeerInfo.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_PROJ)/src/base/BasicModule.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/StringConvert.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h
$O/underlay/simpleunderlay/SimpleUDPPacket_m.o: underlay/simpleunderlay/SimpleUDPPacket_m.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h
$O/underlay/simpleunderlay/SimpleUDP.o: underlay/simpleunderlay/SimpleUDP.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/contract/IPControlInfo_m.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_PROJ)/src/networklayer/ipv6/RoutingTable6.h \
	$(INET_PROJ)/src/networklayer/ipv6/IPv6Datagram_m.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/InitStages.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPControlInfo.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/OverSimMessage.h \
	$(INET_PROJ)/src/networklayer/ipv6/IPv6Datagram.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	underlay/simpleunderlay/SimpleUDPPacket.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/ChurnGenerator.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/icmpv6/ICMPv6Message_m.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/icmpv6/ICMPv6.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/icmpv6/ICMPv6Access.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/ipv6/RoutingTable6Access.h
$O/underlay/simpleunderlay/SimpleInfo.o: underlay/simpleunderlay/SimpleInfo.cc \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	underlay/simpleunderlay/SimpleInfo.h
$O/underlay/simpleunderlay/SimpleNodeEntry.o: underlay/simpleunderlay/SimpleNodeEntry.cc \
	common/SHA1.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/OverlayKey.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h
$O/underlay/singlehostunderlay/UdpOutDevice.o: underlay/singlehostunderlay/UdpOutDevice.cc \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	underlay/singlehostunderlay/UdpOutDevice.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	common/PacketParser.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/realtimescheduler.o: underlay/singlehostunderlay/realtimescheduler.cc \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/udpoutscheduler.o: underlay/singlehostunderlay/udpoutscheduler.cc \
	underlay/singlehostunderlay/udpoutscheduler.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/RealworldConnector.o: underlay/singlehostunderlay/RealworldConnector.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	common/PacketParser.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/RealworldDevice.o: underlay/singlehostunderlay/RealworldDevice.cc \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	common/PacketParser.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/TunOutDevice.o: underlay/singlehostunderlay/TunOutDevice.cc \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	underlay/singlehostunderlay/TunOutDevice.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	common/PacketParser.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/apptunoutscheduler.o: underlay/singlehostunderlay/apptunoutscheduler.cc \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/singlehostunderlay/apptunoutscheduler.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/RealworldApp.o: underlay/singlehostunderlay/RealworldApp.cc \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/RealworldApp.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	common/PacketParser.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/ZeroconfConnector.o: underlay/singlehostunderlay/ZeroconfConnector.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/util/StatisticsCollector.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	underlay/singlehostunderlay/ZeroconfConnector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BootstrapList.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/underlay/singlehostunderlay/SingleHostUnderlayConfigurator.o: underlay/singlehostunderlay/SingleHostUnderlayConfigurator.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	common/UnderlayConfigurator.h \
	underlay/singlehostunderlay/stun/stun.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	underlay/singlehostunderlay/stun/stun_udp.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	underlay/singlehostunderlay/SingleHostUnderlayConfigurator.h
$O/underlay/singlehostunderlay/tunoutscheduler.o: underlay/singlehostunderlay/tunoutscheduler.cc \
	underlay/singlehostunderlay/tunoutscheduler.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/stun/stun.o: underlay/singlehostunderlay/stun/stun.cc \
	underlay/singlehostunderlay/stun/stun_udp.h \
	underlay/singlehostunderlay/stun/stun.h
$O/underlay/singlehostunderlay/stun/udp.o: underlay/singlehostunderlay/stun/udp.cc \
	underlay/singlehostunderlay/stun/stun_udp.h

