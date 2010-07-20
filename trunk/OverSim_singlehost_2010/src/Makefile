#
# OMNeT++/OMNEST Makefile for OverSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -I../../INET-OverSim-20100505/src/networklayer/common -I../../INET-OverSim-20100505/src/networklayer/rsvp_te -I../../INET-OverSim-20100505/src/networklayer/icmpv6 -I../../INET-OverSim-20100505/src/transport/tcp -I../../INET-OverSim-20100505/src/networklayer/mpls -I../../INET-OverSim-20100505/src/networklayer/ted -I../../INET-OverSim-20100505/src/networklayer/contract -I../../INET-OverSim-20100505/src/util -I../../INET-OverSim-20100505/src/transport/contract -I../../INET-OverSim-20100505/src/linklayer/mfcore -I../../INET-OverSim-20100505/src/networklayer/ldp -I../../INET-OverSim-20100505/src/applications/udpapp -I../../INET-OverSim-20100505/src/networklayer/ipv4 -I../../INET-OverSim-20100505/src/base -I../../INET-OverSim-20100505/src/util/headerserializers -I../../INET-OverSim-20100505/src/networklayer/ipv6 -I../../INET-OverSim-20100505/src/transport/sctp -I../../INET-OverSim-20100505/src/world -I../../INET-OverSim-20100505/src/applications/pingapp -I../../INET-OverSim-20100505/src/linklayer/contract -I../../INET-OverSim-20100505/src/networklayer/arp -I../../INET-OverSim-20100505/src/transport/udp -L/usr/lib -L../../INET-OverSim-20100505/out/$(CONFIGNAME)/src -linet -KINET_PROJ=../../INET-OverSim-20100505 -- -lgmp
#

# Name of target to be created (-o option)
TARGET = OverSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../INET-OverSim-20100505/src/networklayer/common \
    -I../../INET-OverSim-20100505/src/networklayer/rsvp_te \
    -I../../INET-OverSim-20100505/src/networklayer/icmpv6 \
    -I../../INET-OverSim-20100505/src/transport/tcp \
    -I../../INET-OverSim-20100505/src/networklayer/mpls \
    -I../../INET-OverSim-20100505/src/networklayer/ted \
    -I../../INET-OverSim-20100505/src/networklayer/contract \
    -I../../INET-OverSim-20100505/src/util \
    -I../../INET-OverSim-20100505/src/transport/contract \
    -I../../INET-OverSim-20100505/src/linklayer/mfcore \
    -I../../INET-OverSim-20100505/src/networklayer/ldp \
    -I../../INET-OverSim-20100505/src/applications/udpapp \
    -I../../INET-OverSim-20100505/src/networklayer/ipv4 \
    -I../../INET-OverSim-20100505/src/base \
    -I../../INET-OverSim-20100505/src/util/headerserializers \
    -I../../INET-OverSim-20100505/src/networklayer/ipv6 \
    -I../../INET-OverSim-20100505/src/transport/sctp \
    -I../../INET-OverSim-20100505/src/world \
    -I../../INET-OverSim-20100505/src/applications/pingapp \
    -I../../INET-OverSim-20100505/src/linklayer/contract \
    -I../../INET-OverSim-20100505/src/networklayer/arp \
    -I../../INET-OverSim-20100505/src/transport/udp \
    -I. \
    -Iapplications \
    -Iapplications/almlistener \
    -Iapplications/almtest \
    -Iapplications/dht \
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
    -Itier2 \
    -Itier3 \
    -Iunderlay \
    -Iunderlay/inetunderlay \
    -Iunderlay/simpleunderlay \
    -Iunderlay/singlehostunderlay \
    -Iunderlay/singlehostunderlay/stun

# Additional object and library files to link with
EXTRA_OBJS = -lgmp

# Additional libraries (-L, -l options)
LIBS = -L/usr/lib -L../../INET-OverSim-20100505/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath /usr/lib` -Wl,-rpath,`abspath ../../INET-OverSim-20100505/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/almlistener/ALMListener.o \
    $O/applications/almtest/ALMTest.o \
    $O/applications/almtest/MessageObserver.o \
    $O/applications/dht/DHT.o \
    $O/applications/dht/DHTDataStorage.o \
    $O/applications/tierdummy/TierDummy.o \
    $O/common/BaseApp.o \
    $O/common/BaseOverlay.o \
    $O/common/BaseRpc.o \
    $O/common/BinaryValue.o \
    $O/common/BootstrapList.o \
    $O/common/ChurnGenerator.o \
    $O/common/cnetcommbuffer.o \
    $O/common/GlobalTraceManager.o \
    $O/common/HoangGlobalObject.o \
    $O/common/IterativeLookup.o \
    $O/common/LifetimeChurn.o \
    $O/common/NeighborCache.o \
    $O/common/NoChurn.o \
    $O/common/ProxNodeHandle.o \
    $O/common/RandomChurn.o \
    $O/common/RecursiveLookup.o \
    $O/common/RpcListener.o \
    $O/common/SHA1.o \
    $O/common/SVivaldi.o \
    $O/common/TopologyVis.o \
    $O/common/TraceChurn.o \
    $O/common/TransportAddress.o \
    $O/common/UnderlayConfigurator.o \
    $O/common/Vector2D.o \
    $O/common/Vivaldi.o \
    $O/common/CoordinateSystem.o \
    $O/common/CryptoModule.o \
    $O/common/FinisherModule.o \
    $O/common/GenericPacketParser.o \
    $O/common/GlobalNodeList.o \
    $O/common/GlobalParameters.o \
    $O/common/GlobalStatistics.o \
    $O/common/NodeHandle.o \
    $O/common/PeerInfo.o \
    $O/common/NodeVector.o \
    $O/common/Nps.o \
    $O/common/OverlayKey.o \
    $O/common/OverSimMessage.o \
    $O/common/ParetoChurn.o \
    $O/common/cbr/CBR-DHT.o \
    $O/common/cbr/CoordBasedRouting.o \
    $O/common/cbr/Landmark.o \
    $O/common/cbr/simplex.o \
    $O/common/cbr/yang.o \
    $O/overlay/bamboo/Bamboo.o \
    $O/overlay/broose/Broose.o \
    $O/overlay/broose/BrooseBucket.o \
    $O/overlay/broose/BrooseHandle.o \
    $O/overlay/chord/Chord.o \
    $O/overlay/chord/ChordFingerTable.o \
    $O/overlay/chord/ChordSuccessorList.o \
    $O/overlay/gia/Gia.o \
    $O/overlay/gia/GiaKeyList.o \
    $O/overlay/gia/GiaKeyListModule.o \
    $O/overlay/gia/GiaMessageBookkeeping.o \
    $O/overlay/gia/GiaNeighborCandidateList.o \
    $O/overlay/gia/GiaNeighbors.o \
    $O/overlay/gia/GiaNode.o \
    $O/overlay/gia/GiaTokenFactory.o \
    $O/overlay/kademlia/Kademlia.o \
    $O/overlay/kademlia/KademliaBucket.o \
    $O/overlay/koorde/Koorde.o \
    $O/overlay/myoverlay/MyOverlay.o \
    $O/overlay/nice/Nice.o \
    $O/overlay/nice/NiceCluster.o \
    $O/overlay/nice/NicePeerInfo.o \
    $O/overlay/pastry/BasePastry.o \
    $O/overlay/pastry/Pastry.o \
    $O/overlay/pastry/PastryLeafSet.o \
    $O/overlay/pastry/PastryNeighborhoodSet.o \
    $O/overlay/pastry/PastryRoutingTable.o \
    $O/overlay/pastry/PastryStateObject.o \
    $O/overlay/pubsubmmog/PubSubLobby.o \
    $O/overlay/pubsubmmog/PubSubMMOG.o \
    $O/overlay/pubsubmmog/PubSubSubspace.o \
    $O/overlay/pubsubmmog/PubSubSubspaceId.o \
    $O/underlay/inetunderlay/AccessNet.o \
    $O/underlay/inetunderlay/InetInfo.o \
    $O/underlay/inetunderlay/InetUnderlayConfigurator.o \
    $O/underlay/simpleunderlay/SimpleInfo.o \
    $O/underlay/simpleunderlay/SimpleNodeEntry.o \
    $O/underlay/simpleunderlay/SimpleUDP.o \
    $O/underlay/simpleunderlay/SimpleUnderlayConfigurator.o \
    $O/underlay/singlehostunderlay/apptunoutscheduler.o \
    $O/underlay/singlehostunderlay/realtimescheduler.o \
    $O/underlay/singlehostunderlay/RealworldApp.o \
    $O/underlay/singlehostunderlay/RealworldConnector.o \
    $O/underlay/singlehostunderlay/RealworldDevice.o \
    $O/underlay/singlehostunderlay/SingleHostUnderlayConfigurator.o \
    $O/underlay/singlehostunderlay/TunOutDevice.o \
    $O/underlay/singlehostunderlay/tunoutscheduler.o \
    $O/underlay/singlehostunderlay/UdpOutDevice.o \
    $O/underlay/singlehostunderlay/udpoutscheduler.o \
    $O/underlay/singlehostunderlay/ZeroconfConnector.o \
    $O/underlay/singlehostunderlay/stun/stun.o \
    $O/underlay/singlehostunderlay/stun/udp.o \
    $O/applications/almtest/ALMTestTracedMessage_m.o \
    $O/applications/dht/DHTMessage_m.o \
    $O/common/Churn_m.o \
    $O/common/GlobalTraceManager_m.o \
    $O/common/ExtAPIMessages_m.o \
    $O/common/CommonMessages_m.o \
    $O/common/Nps_m.o \
    $O/common/OverSimMessage_m.o \
    $O/common/cbr/CBR-DHTMessage_m.o \
    $O/common/cbr/CoordMessages_m.o \
    $O/overlay/broose/BrooseMessage_m.o \
    $O/overlay/chord/ChordMessage_m.o \
    $O/overlay/gia/GiaMessage_m.o \
    $O/overlay/kademlia/KademliaMessage_m.o \
    $O/overlay/myoverlay/MyOverlay_m.o \
    $O/overlay/nice/NiceMessage_m.o \
    $O/overlay/pastry/PastryMessage_m.o \
    $O/overlay/pubsubmmog/PubSubMessage_m.o \
    $O/underlay/simpleunderlay/SimpleUDPPacket_m.o

# Message files
MSGFILES = \
    applications/almtest/ALMTestTracedMessage.msg \
    applications/dht/DHTMessage.msg \
    common/Churn.msg \
    common/GlobalTraceManager.msg \
    common/ExtAPIMessages.msg \
    common/CommonMessages.msg \
    common/Nps.msg \
    common/OverSimMessage.msg \
    common/cbr/CBR-DHTMessage.msg \
    common/cbr/CoordMessages.msg \
    overlay/broose/BrooseMessage.msg \
    overlay/chord/ChordMessage.msg \
    overlay/gia/GiaMessage.msg \
    overlay/kademlia/KademliaMessage.msg \
    overlay/myoverlay/MyOverlay.msg \
    overlay/nice/NiceMessage.msg \
    overlay/pastry/PastryMessage.msg \
    overlay/pubsubmmog/PubSubMessage.msg \
    underlay/simpleunderlay/SimpleUDPPacket.msg

# Other makefile variables (-K)
INET_PROJ=../../INET-OverSim-20100505

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
	$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY:

.SUFFIXES: .cc

$O/%.o: %.cc
	@$(MKPATH) $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f OverSim OverSim.exe libOverSim.so libOverSim.a libOverSim.dll libOverSim.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f applications/*_m.cc applications/*_m.h
	-rm -f applications/almlistener/*_m.cc applications/almlistener/*_m.h
	-rm -f applications/almtest/*_m.cc applications/almtest/*_m.h
	-rm -f applications/dht/*_m.cc applications/dht/*_m.h
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
	-rm -f tier2/*_m.cc tier2/*_m.h
	-rm -f tier3/*_m.cc tier3/*_m.h
	-rm -f underlay/*_m.cc underlay/*_m.h
	-rm -f underlay/inetunderlay/*_m.cc underlay/inetunderlay/*_m.h
	-rm -f underlay/simpleunderlay/*_m.cc underlay/simpleunderlay/*_m.h
	-rm -f underlay/singlehostunderlay/*_m.cc underlay/singlehostunderlay/*_m.h
	-rm -f underlay/singlehostunderlay/stun/*_m.cc underlay/singlehostunderlay/stun/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/almlistener/*.cc applications/almtest/*.cc applications/dht/*.cc applications/tierdummy/*.cc common/*.cc common/cbr/*.cc overlay/*.cc overlay/bamboo/*.cc overlay/broose/*.cc overlay/chord/*.cc overlay/gia/*.cc overlay/kademlia/*.cc overlay/koorde/*.cc overlay/myoverlay/*.cc overlay/nice/*.cc overlay/pastry/*.cc overlay/pubsubmmog/*.cc tier2/*.cc tier3/*.cc underlay/*.cc underlay/inetunderlay/*.cc underlay/simpleunderlay/*.cc underlay/singlehostunderlay/*.cc underlay/singlehostunderlay/stun/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/almlistener/ALMListener.o: applications/almlistener/ALMListener.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	applications/almlistener/ALMListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/almtest/MessageObserver.o: applications/almtest/MessageObserver.cc \
	applications/almtest/ALMTestTracedMessage_m.h \
	common/OverlayKey.h \
	applications/almtest/MessageObserver.h
$O/applications/almtest/ALMTest.o: applications/almtest/ALMTest.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	applications/almtest/ALMTest.h \
	applications/almtest/MessageObserver.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	applications/almtest/ALMTestTracedMessage_m.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/almtest/ALMTestTracedMessage_m.o: applications/almtest/ALMTestTracedMessage_m.cc \
	applications/almtest/ALMTestTracedMessage_m.h \
	common/OverlayKey.h
$O/applications/dht/DHT.o: applications/dht/DHT.cc \
	applications/dht/DHTDataStorage.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/SHA1.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	applications/dht/DHT.h \
	applications/dht/DHTMessage_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/dht/DHTDataStorage.o: applications/dht/DHTDataStorage.cc \
	common/NodeVector.h \
	applications/dht/DHTDataStorage.h \
	common/CommonMessages_m.h \
	common/hashWatch.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/applications/dht/DHTMessage_m.o: applications/dht/DHTMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	applications/dht/DHTMessage_m.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/applications/tierdummy/TierDummy.o: applications/tierdummy/TierDummy.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	applications/tierdummy/TierDummy.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
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
$O/common/SVivaldi.o: common/SVivaldi.cc \
	common/NeighborCache.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	common/SVivaldi.h \
	common/Vivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/ParetoChurn.o: common/ParetoChurn.cc \
	common/ChurnGenerator.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/ParetoChurn.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	common/Churn_m.h
$O/common/FinisherModule.o: common/FinisherModule.cc \
	common/FinisherModule.h \
	common/GlobalStatistics.h \
	common/GlobalStatisticsAccess.h
$O/common/NeighborCache.o: common/NeighborCache.cc \
	common/PeerInfo.h \
	common/NeighborCache.h \
	common/hashWatch.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/cbr/CoordMessages_m.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
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
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
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
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	common/Churn_m.h
$O/common/SHA1.o: common/SHA1.cc \
	common/SHA1.h
$O/common/OverSimMessage.o: common/OverSimMessage.cc \
	common/OverSimMessage.h \
	common/cnetcommbuffer.h \
	common/OverSimMessage_m.h
$O/common/CryptoModule.o: common/CryptoModule.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverlayAccess.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/cnetcommbuffer.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/CryptoModule.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/ExtAPIMessages_m.o: common/ExtAPIMessages_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ExtAPIMessages_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/BaseApp.o: common/BaseApp.cc \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverlayAccess.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
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
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/transport/contract/UDPSocket.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/RpcListener.o: common/RpcListener.cc \
	common/RpcState.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/RecursiveLookup.o: common/RecursiveLookup.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/LookupListener.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/Nps_m.o: common/Nps_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/Nps_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/TransportAddress.o: common/TransportAddress.cc \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/Vivaldi.o: common/Vivaldi.cc \
	common/NeighborCache.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
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
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/OverlayKey.h \
	common/GlobalNodeList.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGeneratorAccess.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/NodeHandle.h
$O/common/Nps.o: common/Nps.cc \
	common/NeighborCache.h \
	common/UnderlayConfigurator.h \
	common/oversim_mapset.h \
	common/cbr/CoordBasedRouting.h \
	common/RpcListener.h \
	common/Vivaldi.h \
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
	common/PeerInfo.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/cbr/Landmark.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/cbr/CoordBasedRoutingAccess.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/GlobalStatisticsAccess.h \
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
	common/oversim_mapset.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/LookupListener.h \
	common/InitStages.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/nice/NiceMessage_m.h \
	$(INET_PROJ)/src/transport/contract/UDPSocket.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/GlobalParameters.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/GlobalParametersAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/IterativeLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/common/NodeHandle.o: common/NodeHandle.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	common/TransportAddress.h
$O/common/Churn_m.o: common/Churn_m.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	common/Churn_m.h \
	common/TransportAddress.h
$O/common/GlobalTraceManager.o: common/GlobalTraceManager.cc \
	common/GlobalTraceManager_m.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/OverlayKey.h \
	common/UnderlayConfiguratorAccess.h \
	common/GlobalNodeList.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/GlobalTraceManager.h \
	common/TraceChurn.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/ChurnGenerator.o: common/ChurnGenerator.cc \
	common/ChurnGenerator.h \
	common/UnderlayConfiguratorAccess.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h
$O/common/BaseRpc.o: common/BaseRpc.cc \
	common/NeighborCache.h \
	common/UnderlayConfigurator.h \
	common/oversim_mapset.h \
	common/OverlayAccess.h \
	common/UnderlayConfiguratorAccess.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/cnetcommbuffer.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/CryptoModule.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/common/NodeVector.o: common/NodeVector.cc \
	common/NodeVector.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/TransportAddress.h
$O/common/GlobalParameters.o: common/GlobalParameters.cc \
	common/GlobalParameters.h \
	common/OverlayKey.h
$O/common/RandomChurn.o: common/RandomChurn.cc \
	common/ChurnGenerator.h \
	common/RandomChurn.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h
$O/common/cnetcommbuffer.o: common/cnetcommbuffer.cc \
	common/cnetcommbuffer.h
$O/common/IterativeLookup.o: common/IterativeLookup.cc \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/IterativeLookup.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/LookupListener.h \
	common/TopologyVis.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
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
	$(INET_PROJ)/src/base/INETDefs.h \
	common/TopologyVis.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/GlobalNodeList.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/OverlayKey.o: common/OverlayKey.cc \
	common/SHA1.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/BinaryValue.h \
	common/TransportAddress.h
$O/common/NoChurn.o: common/NoChurn.cc \
	common/ChurnGenerator.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/InitStages.h \
	common/NoChurn.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/TransportAddress.h
$O/common/CommonMessages_m.o: common/CommonMessages_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/ProxNodeHandle.o: common/ProxNodeHandle.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/TransportAddress.h
$O/common/HoangGlobalObject.o: common/HoangGlobalObject.cc \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/HoangGlobalObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
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
	common/PeerInfo.h \
	common/BootstrapNodeHandle.h \
	common/hashWatch.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
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
	common/BootstrapList.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/TraceChurn.o: common/TraceChurn.cc \
	common/PeerInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/UnderlayConfigurator.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/GlobalNodeList.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TraceChurn.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/BootstrapList.o: common/BootstrapList.cc \
	common/BootstrapNodeHandle.h \
	common/UnderlayConfigurator.h \
	common/hashWatch.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/UnderlayConfiguratorAccess.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
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
	common/BootstrapList.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/Vector2D.o: common/Vector2D.cc \
	common/Vector2D.h
$O/common/PeerInfo.o: common/PeerInfo.cc \
	common/PeerInfo.h
$O/common/CoordinateSystem.o: common/CoordinateSystem.cc \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/TransportAddress.h
$O/common/GlobalStatistics.o: common/GlobalStatistics.cc \
	common/GlobalStatistics.h
$O/common/BinaryValue.o: common/BinaryValue.cc \
	common/BinaryValue.h
$O/common/cbr/yang.o: common/cbr/yang.cc \
	common/cbr/yang.h
$O/common/cbr/simplex.o: common/cbr/simplex.cc \
	common/NeighborCache.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/common/cbr/CoordMessages_m.o: common/cbr/CoordMessages_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/cbr/CoordMessages_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/cbr/Landmark.o: common/cbr/Landmark.cc \
	common/NeighborCache.h \
	common/UnderlayConfigurator.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/BasicModule.h \
	common/BootstrapNodeHandle.h \
	common/PeerInfo.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/cbr/Landmark.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/common/cbr/CoordBasedRouting.o: common/cbr/CoordBasedRouting.cc \
	common/PeerInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/cbr/CoordBasedRouting.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/GlobalNodeList.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/cbr/CBR-DHT.o: common/cbr/CBR-DHT.cc \
	common/NeighborCache.h \
	common/oversim_mapset.h \
	common/cbr/CoordBasedRouting.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	common/SHA1.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	applications/dht/DHTMessage_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/cbr/CBR-DHT.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	applications/dht/DHTDataStorage.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/cbr/CoordBasedRoutingAccess.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/cbr/CBR-DHTMessage_m.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/common/cbr/CBR-DHTMessage_m.o: common/cbr/CBR-DHTMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	applications/dht/DHTMessage_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	common/cbr/CBR-DHTMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/bamboo/Bamboo.o: overlay/bamboo/Bamboo.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	common/oversim_mapset.h \
	overlay/bamboo/Bamboo.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/HashFunc.h \
	common/Nps.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	common/LookupListener.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	overlay/pastry/PastryRoutingTable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	overlay/pastry/PastryLeafSet.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/overlay/broose/BrooseMessage_m.o: overlay/broose/BrooseMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	overlay/broose/BrooseMessage_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/broose/Broose.o: overlay/broose/Broose.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	overlay/broose/BrooseBucket.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	overlay/broose/Broose.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	overlay/broose/BrooseHandle.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/LookupListener.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/BootstrapList.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	overlay/broose/BrooseMessage_m.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/broose/BrooseHandle.o: overlay/broose/BrooseHandle.cc \
	overlay/broose/BrooseHandle.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	common/TransportAddress.h
$O/overlay/broose/BrooseBucket.o: overlay/broose/BrooseBucket.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	overlay/broose/BrooseBucket.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	overlay/broose/Broose.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	overlay/broose/BrooseHandle.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/broose/BrooseMessage_m.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/chord/ChordMessage_m.o: overlay/chord/ChordMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	overlay/chord/ChordMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/chord/Chord.o: overlay/chord/Chord.cc \
	common/BootstrapNodeHandle.h \
	common/NeighborCache.h \
	common/GlobalParameters.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	overlay/chord/ChordMessage_m.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/chord/ChordFingerTable.h \
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
	common/BootstrapList.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	overlay/chord/ChordSuccessorList.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/chord/ChordSuccessorList.o: overlay/chord/ChordSuccessorList.cc \
	common/NeighborCache.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	overlay/chord/ChordMessage_m.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/Vivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	overlay/chord/Chord.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	overlay/chord/ChordSuccessorList.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/chord/ChordFingerTable.o: overlay/chord/ChordFingerTable.cc \
	common/NeighborCache.h \
	common/hashWatch.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	overlay/chord/ChordMessage_m.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/Vivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/chord/ChordFingerTable.h \
	common/Nps.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	overlay/chord/Chord.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/GlobalStatisticsAccess.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	overlay/chord/ChordSuccessorList.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/gia/Gia.o: overlay/gia/Gia.cc \
	common/UnderlayConfigurator.h \
	overlay/gia/GiaNeighbors.h \
	overlay/gia/GiaMessage_m.h \
	common/oversim_mapset.h \
	common/RpcListener.h \
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
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	overlay/gia/GiaTokenFactory.h \
	common/HoangGlobalObject.h \
	overlay/gia/Gia.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/overlay/gia/GiaMessage_m.o: overlay/gia/GiaMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/gia/GiaMessage_m.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/gia/GiaNode.o: overlay/gia/GiaNode.cc \
	overlay/gia/GiaNode.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
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
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
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
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/gia/GiaMessage_m.h \
	overlay/gia/GiaNeighbors.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/gia/GiaNode.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/gia/GiaTokenFactory.o: overlay/gia/GiaTokenFactory.cc \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/gia/GiaMessage_m.h \
	overlay/gia/GiaNeighbors.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
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
	common/BinaryValue.h \
	common/Vector2D.h \
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
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	$(INET_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/gia/GiaNeighbors.o: overlay/gia/GiaNeighbors.cc \
	overlay/gia/GiaNode.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/gia/GiaKeyList.h \
	common/InitStages.h \
	overlay/gia/GiaNeighbors.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	common/TransportAddress.h
$O/overlay/kademlia/KademliaMessage_m.o: overlay/kademlia/KademliaMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/kademlia/KademliaMessage_m.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/kademlia/KademliaBucket.o: overlay/kademlia/KademliaBucket.cc \
	common/NodeVector.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	common/TransportAddress.h \
	common/OverlayKey.h \
	overlay/kademlia/KademliaBucket.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	overlay/kademlia/KademliaNodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h
$O/overlay/kademlia/Kademlia.o: overlay/kademlia/Kademlia.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/NeighborCache.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	overlay/kademlia/Kademlia.h \
	common/HashFunc.h \
	common/Nps.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/LookupListener.h \
	common/InitStages.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	overlay/kademlia/KademliaNodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	overlay/kademlia/KademliaMessage_m.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	overlay/kademlia/KademliaBucket.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/overlay/koorde/Koorde.o: overlay/koorde/Koorde.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/koorde/Koorde.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/myoverlay/MyOverlay.o: overlay/myoverlay/MyOverlay.cc \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	overlay/myoverlay/MyOverlay.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	overlay/myoverlay/MyOverlay_m.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/myoverlay/MyOverlay_m.o: overlay/myoverlay/MyOverlay_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	overlay/myoverlay/MyOverlay_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/nice/NiceMessage_m.o: overlay/nice/NiceMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	overlay/nice/NiceMessage_m.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/nice/Nice.o: overlay/nice/Nice.cc \
	common/PeerInfo.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	overlay/nice/NicePeerInfo.h \
	common/hashWatch.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
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
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	overlay/nice/Nice.h \
	overlay/nice/NiceMessage_m.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/nice/NiceCluster.o: overlay/nice/NiceCluster.cc \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	overlay/nice/NiceCluster.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/nice/NicePeerInfo.o: overlay/nice/NicePeerInfo.cc \
	overlay/nice/NicePeerInfo.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/HoangGlobalObject.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/pastry/PastryLeafSet.o: overlay/pastry/PastryLeafSet.cc \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Vivaldi.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Nps.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	overlay/pastry/PastryMessage_m.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/GlobalStatisticsAccess.h \
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
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/cbr/yang.h \
	common/ProxNodeHandle.h \
	overlay/pastry/PastryRoutingTable.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/pastry/Pastry.o: overlay/pastry/Pastry.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	overlay/pastry/Pastry.h \
	common/Nps.h \
	common/HashFunc.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
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
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	overlay/pastry/PastryLeafSet.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/overlay/pastry/PastryMessage_m.o: overlay/pastry/PastryMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/pastry/PastryMessage_m.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/pastry/PastryNeighborhoodSet.o: overlay/pastry/PastryNeighborhoodSet.cc \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/pastry/PastryMessage_m.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/pastry/PastryStateObject.h \
	common/ProxNodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	common/NodeHandle.h
$O/overlay/pastry/BasePastry.o: overlay/pastry/BasePastry.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/NeighborCache.h \
	overlay/pastry/BasePastry.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/HashFunc.h \
	common/Nps.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/InitStages.h \
	overlay/pastry/PastryMessage_m.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
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
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/TopologyVis.h \
	common/Nps_m.h \
	common/cbr/simplex.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	overlay/pastry/PastryLeafSet.h \
	common/IterativeLookupConfiguration.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/HoangGlobalObject.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/RpcMacros.h
$O/overlay/pastry/PastryRoutingTable.o: overlay/pastry/PastryRoutingTable.cc \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/pastry/PastryMessage_m.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	overlay/pastry/PastryTypes.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/pastry/PastryStateObject.h \
	common/ProxNodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/pastry/PastryRoutingTable.h \
	common/NodeHandle.h
$O/overlay/pastry/PastryStateObject.o: overlay/pastry/PastryStateObject.cc \
	common/NodeVector.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	overlay/pastry/PastryMessage_m.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	overlay/pastry/PastryTypes.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/pubsubmmog/PubSubSubspaceId.o: overlay/pubsubmmog/PubSubSubspaceId.cc \
	overlay/pubsubmmog/PubSubSubspaceId.h
$O/overlay/pubsubmmog/PubSubLobby.o: overlay/pubsubmmog/PubSubLobby.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
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
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	overlay/pubsubmmog/PubSubSubspaceId.h \
	common/RpcMacros.h
$O/overlay/pubsubmmog/PubSubMessage_m.o: overlay/pubsubmmog/PubSubMessage_m.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	overlay/pubsubmmog/PubSubMessage_m.h
$O/overlay/pubsubmmog/PubSubMMOG.o: overlay/pubsubmmog/PubSubMMOG.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
	common/CommonMessages_m.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/BootstrapList.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
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
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	overlay/pubsubmmog/PubSubSubspaceId.h \
	common/RpcMacros.h
$O/overlay/pubsubmmog/PubSubSubspace.o: overlay/pubsubmmog/PubSubSubspace.cc \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	common/NodeHandle.h \
	overlay/pubsubmmog/PubSubSubspaceId.h
$O/underlay/inetunderlay/AccessNet.o: underlay/inetunderlay/AccessNet.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	underlay/inetunderlay/AccessNet.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/InitStages.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h
$O/underlay/inetunderlay/InetInfo.o: underlay/inetunderlay/InetInfo.cc \
	common/PeerInfo.h \
	underlay/inetunderlay/InetInfo.h
$O/underlay/inetunderlay/InetUnderlayConfigurator.o: underlay/inetunderlay/InetUnderlayConfigurator.cc \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	underlay/inetunderlay/AccessNet.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/inetunderlay/InetInfo.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	underlay/inetunderlay/InetUnderlayConfigurator.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/StringConvert.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h
$O/underlay/simpleunderlay/SimpleUnderlayConfigurator.o: underlay/simpleunderlay/SimpleUnderlayConfigurator.cc \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
	underlay/simpleunderlay/SimpleInfo.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/StringConvert.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/BasicModule.h
$O/underlay/simpleunderlay/SimpleUDPPacket_m.o: underlay/simpleunderlay/SimpleUDPPacket_m.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h
$O/underlay/simpleunderlay/SimpleUDP.o: underlay/simpleunderlay/SimpleUDP.cc \
	$(INET_PROJ)/src/networklayer/icmpv6/ICMPv6Access.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/HashFunc.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	common/GlobalStatistics.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/ipv6/IPv6Datagram.h \
	$(INET_PROJ)/src/networklayer/icmpv6/ICMPv6Message_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	common/NodeHandle.h \
	common/PeerInfo.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/OverSimMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/icmpv6/ICMPv6.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	underlay/simpleunderlay/SimpleUDPPacket.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/ChurnGenerator.h \
	common/CommonMessages_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	$(INET_PROJ)/src/networklayer/ipv6/RoutingTable6.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/contract/IPControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/ipv6/RoutingTable6Access.h \
	$(INET_PROJ)/src/networklayer/ipv6/IPv6Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h
$O/underlay/simpleunderlay/SimpleInfo.o: underlay/simpleunderlay/SimpleInfo.cc \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	underlay/simpleunderlay/SimpleInfo.h
$O/underlay/simpleunderlay/SimpleNodeEntry.o: underlay/simpleunderlay/SimpleNodeEntry.cc \
	common/SHA1.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	common/BinaryValue.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/OverlayKey.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleUDPPacket_m.h
$O/underlay/singlehostunderlay/UdpOutDevice.o: underlay/singlehostunderlay/UdpOutDevice.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/singlehostunderlay/UdpOutDevice.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	common/PacketParser.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
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
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	common/PacketParser.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h
$O/underlay/singlehostunderlay/TunOutDevice.o: underlay/singlehostunderlay/TunOutDevice.cc \
	$(INET_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	underlay/singlehostunderlay/TunOutDevice.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	common/PacketParser.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/apptunoutscheduler.o: underlay/singlehostunderlay/apptunoutscheduler.cc \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/singlehostunderlay/apptunoutscheduler.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/RealworldApp.o: underlay/singlehostunderlay/RealworldApp.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	underlay/singlehostunderlay/RealworldApp.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	common/PacketParser.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/ZeroconfConnector.o: underlay/singlehostunderlay/ZeroconfConnector.cc \
	common/BootstrapNodeHandle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/oversim_mapset.h \
	common/RecursiveLookup.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
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
	common/BootstrapList.h \
	common/Vector2D.h \
	common/BinaryValue.h \
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
$O/underlay/singlehostunderlay/SingleHostUnderlayConfigurator.o: underlay/singlehostunderlay/SingleHostUnderlayConfigurator.cc \
	common/PeerInfo.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/stun/stun.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	common/GlobalNodeList.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/ChurnGenerator.h \
	common/HashFunc.h \
	underlay/singlehostunderlay/stun/stun_udp.h \
	common/InitStages.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/GlobalNodeListAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeHandle.h \
	$(INET_PROJ)/src/base/BasicModule.h \
	underlay/singlehostunderlay/SingleHostUnderlayConfigurator.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h
$O/underlay/singlehostunderlay/tunoutscheduler.o: underlay/singlehostunderlay/tunoutscheduler.cc \
	underlay/singlehostunderlay/tunoutscheduler.h \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/stun/stun.o: underlay/singlehostunderlay/stun/stun.cc \
	underlay/singlehostunderlay/stun/stun_udp.h \
	underlay/singlehostunderlay/stun/stun.h
$O/underlay/singlehostunderlay/stun/udp.o: underlay/singlehostunderlay/stun/udp.cc \
	underlay/singlehostunderlay/stun/stun_udp.h

