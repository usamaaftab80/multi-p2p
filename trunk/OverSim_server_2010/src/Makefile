#
# OMNeT++/OMNEST Makefile for OverSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -I../../INET-OverSim-20100505/src/networklayer/rsvp_te -I../../INET-OverSim-20100505/src/networklayer/common -I../../INET-OverSim-20100505/src/networklayer/icmpv6 -I../../INET-OverSim-20100505/src/transport/tcp -I../../INET-OverSim-20100505/src/networklayer/mpls -I../../INET-OverSim-20100505/src/networklayer/ted -I../../INET-OverSim-20100505/src/networklayer/contract -I../../INET-OverSim-20100505/src/util -I../../INET-OverSim-20100505/src/transport/contract -I../../INET-OverSim-20100505/src/linklayer/mfcore -I../../INET-OverSim-20100505/src/networklayer/ldp -I../../INET-OverSim-20100505/src/applications/udpapp -I../../INET-OverSim-20100505/src/networklayer/ipv4 -I../../INET-OverSim-20100505/src/base -I../../INET-OverSim-20100505/src/util/headerserializers -I../../INET-OverSim-20100505/src/networklayer/ipv6 -I../../INET-OverSim-20100505/src/transport/sctp -I../../INET-OverSim-20100505/src/world -I../../INET-OverSim-20100505/src/applications/pingapp -I../../INET-OverSim-20100505/src/linklayer/contract -I../../INET-OverSim-20100505/src/networklayer/arp -I../../INET-OverSim-20100505/src/transport/udp -L/usr/lib -L../../INET-OverSim-20100505/out/$(CONFIGNAME)/src -linet -KINET_PROJ=../../INET-OverSim-20100505 -- -lgmp
#

# Name of target to be created (-o option)
TARGET = OverSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../INET-OverSim-20100505/src/networklayer/rsvp_te \
    -I../../INET-OverSim-20100505/src/networklayer/common \
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
    -Iapplications/almtest \
    -Iapplications/conferenceapp \
    -Iapplications/dht \
    -Iapplications/tierdummy \
    -Icommon \
    -Icommon/cbr \
    -Ioverlay \
    -Ioverlay/nice \
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
    $O/applications/almtest/ALMTest.o \
    $O/applications/almtest/MessageObserver.o \
    $O/applications/conferenceapp/ConferenceApp.o \
    $O/applications/dht/DHT.o \
    $O/applications/dht/DHTDataStorage.o \
    $O/applications/tierdummy/TierDummy.o \
    $O/common/BaseApp.o \
    $O/common/BaseOverlay.o \
    $O/common/BaseRpc.o \
    $O/common/BinaryValue.o \
    $O/common/BootstrapList.o \
    $O/common/ChurnGenerator.o \
    $O/common/NeighborCache.o \
    $O/common/NoChurn.o \
    $O/common/NodeHandle.o \
    $O/common/NodeVector.o \
    $O/common/Nps.o \
    $O/common/OverlayKey.o \
    $O/common/OverSimMessage.o \
    $O/common/ParetoChurn.o \
    $O/common/PeerInfo.o \
    $O/common/ProxNodeHandle.o \
    $O/common/RandomChurn.o \
    $O/common/GlobalParameters.o \
    $O/common/GlobalStatistics.o \
    $O/common/GlobalTraceManager.o \
    $O/common/HoangGlobalObject.o \
    $O/common/IterativeLookup.o \
    $O/common/LifetimeChurn.o \
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
    $O/common/GlobalNodeList.o \
    $O/common/cnetcommbuffer.o \
    $O/common/CoordinateSystem.o \
    $O/common/CryptoModule.o \
    $O/common/FinisherModule.o \
    $O/common/GenericPacketParser.o \
    $O/common/cbr/CBR-DHT.o \
    $O/common/cbr/CoordBasedRouting.o \
    $O/common/cbr/Landmark.o \
    $O/common/cbr/simplex.o \
    $O/common/cbr/yang.o \
    $O/overlay/nice/Nice.o \
    $O/overlay/nice/NiceCluster.o \
    $O/overlay/nice/NicePeerInfo.o \
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
    $O/applications/conferenceapp/ConferenceAppMsg_m.o \
    $O/applications/dht/DHTMessage_m.o \
    $O/common/Churn_m.o \
    $O/common/Nps_m.o \
    $O/common/OverSimMessage_m.o \
    $O/common/GlobalTraceManager_m.o \
    $O/common/CommonMessages_m.o \
    $O/common/ExtAPIMessages_m.o \
    $O/common/cbr/CBR-DHTMessage_m.o \
    $O/common/cbr/CoordMessages_m.o \
    $O/overlay/nice/NiceMessage_m.o \
    $O/underlay/simpleunderlay/SimpleUDPPacket_m.o

# Message files
MSGFILES = \
    applications/almtest/ALMTestTracedMessage.msg \
    applications/conferenceapp/ConferenceAppMsg.msg \
    applications/dht/DHTMessage.msg \
    common/Churn.msg \
    common/Nps.msg \
    common/OverSimMessage.msg \
    common/GlobalTraceManager.msg \
    common/CommonMessages.msg \
    common/ExtAPIMessages.msg \
    common/cbr/CBR-DHTMessage.msg \
    common/cbr/CoordMessages.msg \
    overlay/nice/NiceMessage.msg \
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
	-rm -f applications/almtest/*_m.cc applications/almtest/*_m.h
	-rm -f applications/conferenceapp/*_m.cc applications/conferenceapp/*_m.h
	-rm -f applications/dht/*_m.cc applications/dht/*_m.h
	-rm -f applications/tierdummy/*_m.cc applications/tierdummy/*_m.h
	-rm -f common/*_m.cc common/*_m.h
	-rm -f common/cbr/*_m.cc common/cbr/*_m.h
	-rm -f overlay/*_m.cc overlay/*_m.h
	-rm -f overlay/nice/*_m.cc overlay/nice/*_m.h
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
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/almtest/*.cc applications/conferenceapp/*.cc applications/dht/*.cc applications/tierdummy/*.cc common/*.cc common/cbr/*.cc overlay/*.cc overlay/nice/*.cc tier2/*.cc tier3/*.cc underlay/*.cc underlay/inetunderlay/*.cc underlay/simpleunderlay/*.cc underlay/singlehostunderlay/*.cc underlay/singlehostunderlay/stun/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/almtest/OPTIONS_m.o: applications/almtest/OPTIONS_m.cc \
	applications/almtest/OPTIONS_m.h
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
$O/applications/conferenceapp/ConferenceApp.o: applications/conferenceapp/ConferenceApp.cc \
	common/UnderlayConfigurator.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	applications/conferenceapp/ConferenceApp.h \
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
	common/GlobalStatistics.h \
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
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	applications/conferenceapp/ConferenceAppMsg_m.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/applications/conferenceapp/ConferenceAppMsg_m.o: applications/conferenceapp/ConferenceAppMsg_m.cc \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/oversim_mapset.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/conferenceapp/ConferenceAppMsg_m.h \
	common/TransportAddress.h
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
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
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
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverlayAccess.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/RpcListener.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	common/NodeVector.h \
	common/GlobalStatistics.h \
	common/RpcState.h \
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
	common/BaseOverlay.h \
	common/Comparator.h \
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
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/oversim_mapset.h \
	common/OverlayAccess.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	common/UnderlayConfiguratorAccess.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	common/SVivaldi.h \
	common/CoordinateSystem.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddress.h \
	common/HashFunc.h \
	common/Nps.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/cnetcommbuffer.h \
	common/BaseApp.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/oversim_byteswap.h \
	common/CryptoModule.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
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
	common/IterativeLookup.h \
	common/NodeVector.h \
	common/RpcState.h \
	common/GlobalStatistics.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/LookupListener.h \
	common/TopologyVis.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
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
	applications/dht/DHTDataStorage.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	common/OverSimMessage_m.h \
	common/RecursiveLookup.h \
	common/cbr/CoordBasedRouting.h \
	common/oversim_mapset.h \
	common/OverSimMessage.h \
	common/AbstractLookup.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
	common/Vivaldi.h \
	common/SVivaldi.h \
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
	common/cbr/CoordBasedRoutingAccess.h \
	common/cbr/simplex.h \
	common/Nps_m.h \
	applications/dht/DHTMessage_m.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/cbr/CBR-DHT.h \
	$(INET_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/OverlayKey.h \
	common/cbr/CBR-DHTMessage_m.h \
	common/oversim_byteswap.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseRpc.h \
	common/ProxNodeHandle.h \
	common/cbr/yang.h \
	common/NodeHandle.h \
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
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/nice/NiceCluster.o: overlay/nice/NiceCluster.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
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
	common/BinaryValue.h \
	common/Vector2D.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
$O/overlay/nice/NicePeerInfo.o: overlay/nice/NicePeerInfo.cc \
	overlay/nice/NicePeerInfo.h \
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
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/TopologyVis.h \
	common/Vector2D.h \
	common/BinaryValue.h \
	common/TransportAddress.h \
	common/IterativeLookupConfiguration.h \
	common/OverlayKey.h \
	common/BaseOverlay.h \
	common/Comparator.h \
	common/BaseRpc.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/ProxNodeHandle.h \
	common/NodeHandle.h \
	common/RpcMacros.h
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
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/RpcListener.h \
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

