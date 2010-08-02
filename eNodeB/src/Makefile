#
# OMNeT++/OMNEST Makefile for OverSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -linet -O out -o OverSim -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/transport/tcp -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/applications/pingapp -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/mpls -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/ipv4 -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/linklayer/contract -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/linklayer/mfcore -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/ldp -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/ipv6 -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/arp -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/applications/udpapp -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/ted -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/rsvp_te -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/util/headerserializers -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/contract -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/transport/contract -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/common -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/transport/sctp -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/transport/udp -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/base -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/networklayer/icmpv6 -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/world -I/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src/util -L/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505/src -L/usr/lib -KINET_PROJ=/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505 -- -lgmp -leXosip2 -lpthread
#

# Name of target to be created (-o option)
TARGET = OverSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../INET-OverSim-20100505/src/transport/tcp \
    -I../../INET-OverSim-20100505/src/applications/pingapp \
    -I../../INET-OverSim-20100505/src/networklayer/mpls \
    -I../../INET-OverSim-20100505/src/networklayer/ipv4 \
    -I../../INET-OverSim-20100505/src/linklayer/contract \
    -I../../INET-OverSim-20100505/src/linklayer/mfcore \
    -I../../INET-OverSim-20100505/src/networklayer/ldp \
    -I../../INET-OverSim-20100505/src/networklayer/ipv6 \
    -I../../INET-OverSim-20100505/src/networklayer/arp \
    -I../../INET-OverSim-20100505/src/applications/udpapp \
    -I../../INET-OverSim-20100505/src/networklayer/ted \
    -I../../INET-OverSim-20100505/src/networklayer/rsvp_te \
    -I../../INET-OverSim-20100505/src/util/headerserializers \
    -I../../INET-OverSim-20100505/src/networklayer/contract \
    -I../../INET-OverSim-20100505/src/transport/contract \
    -I../../INET-OverSim-20100505/src/networklayer/common \
    -I../../INET-OverSim-20100505/src/transport/sctp \
    -I../../INET-OverSim-20100505/src/transport/udp \
    -I../../INET-OverSim-20100505/src/base \
    -I../../INET-OverSim-20100505/src/networklayer/icmpv6 \
    -I../../INET-OverSim-20100505/src/world \
    -I../../INET-OverSim-20100505/src/util \
    -I. \
    -Iapplications \
    -Iapplications/almlistener \
    -Iapplications/almtest \
    -Iapplications/conferenceapp \
    -Iapplications/dht \
    -Iapplications/nicetestapp \
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
EXTRA_OBJS = -lgmp -leXosip2 -lpthread

# Additional libraries (-L, -l options)
LIBS = -L../../INET-OverSim-20100505/src -L/usr/lib  -linet
LIBS += -Wl,-rpath,`abspath ../../INET-OverSim-20100505/src` -Wl,-rpath,`abspath /usr/lib`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = /src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/almlistener/ALMListener.o \
    $O/applications/almtest/ALMTest.o \
    $O/applications/almtest/MessageObserver.o \
    $O/applications/conferenceapp/ConferenceApp.o \
    $O/applications/dht/DHT.o \
    $O/applications/dht/DHTDataStorage.o \
    $O/applications/nicetestapp/NiceTestApp.o \
    $O/applications/tierdummy/TierDummy.o \
    $O/common/BaseApp.o \
    $O/common/BaseOverlay.o \
    $O/common/BaseRpc.o \
    $O/common/BinaryValue.o \
    $O/common/BootstrapList.o \
    $O/common/ChurnGenerator.o \
    $O/common/cnetcommbuffer.o \
    $O/common/CoordinateSystem.o \
    $O/common/CryptoModule.o \
    $O/common/EXOSIP.o \
    $O/common/FinisherModule.o \
    $O/common/GenericPacketParser.o \
    $O/common/GlobalNodeList.o \
    $O/common/GlobalParameters.o \
    $O/common/GlobalStatistics.o \
    $O/common/GlobalTraceManager.o \
    $O/common/HoangGlobalObject.o \
    $O/common/IterativeLookup.o \
    $O/common/LifetimeChurn.o \
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
    $O/applications/nicetestapp/NiceTestAppMsg_m.o \
    $O/common/Churn_m.o \
    $O/common/CommonMessages_m.o \
    $O/common/ExtAPIMessages_m.o \
    $O/common/GlobalTraceManager_m.o \
    $O/common/Nps_m.o \
    $O/common/OverSimMessage_m.o \
    $O/common/cbr/CBR-DHTMessage_m.o \
    $O/common/cbr/CoordMessages_m.o \
    $O/overlay/nice/NiceMessage_m.o \
    $O/underlay/simpleunderlay/SimpleUDPPacket_m.o

# Message files
MSGFILES = \
    applications/almtest/ALMTestTracedMessage.msg \
    applications/conferenceapp/ConferenceAppMsg.msg \
    applications/dht/DHTMessage.msg \
    applications/nicetestapp/NiceTestAppMsg.msg \
    common/Churn.msg \
    common/CommonMessages.msg \
    common/ExtAPIMessages.msg \
    common/GlobalTraceManager.msg \
    common/Nps.msg \
    common/OverSimMessage.msg \
    common/cbr/CBR-DHTMessage.msg \
    common/cbr/CoordMessages.msg \
    overlay/nice/NiceMessage.msg \
    underlay/simpleunderlay/SimpleUDPPacket.msg

# Other makefile variables (-K)
INET_PROJ=/home/hoang/workspaces/enodeb/OverSim/src/../../INET-OverSim-20100505

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
	-rm -f applications/conferenceapp/*_m.cc applications/conferenceapp/*_m.h
	-rm -f applications/dht/*_m.cc applications/dht/*_m.h
	-rm -f applications/nicetestapp/*_m.cc applications/nicetestapp/*_m.h
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
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/almlistener/*.cc applications/almtest/*.cc applications/conferenceapp/*.cc applications/dht/*.cc applications/nicetestapp/*.cc applications/tierdummy/*.cc common/*.cc common/cbr/*.cc overlay/*.cc overlay/nice/*.cc tier2/*.cc tier3/*.cc underlay/*.cc underlay/inetunderlay/*.cc underlay/simpleunderlay/*.cc underlay/singlehostunderlay/*.cc underlay/singlehostunderlay/stun/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/almlistener/ALMListener.o: applications/almlistener/ALMListener.cc \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/CommonMessages_m.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  common/NodeHandle.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/BaseApp.h \
  common/NodeVector.h \
  applications/almlistener/ALMListener.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/applications/almtest/ALMTest.o: applications/almtest/ALMTest.cc \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  common/NodeHandle.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  common/BinaryValue.h \
  applications/almtest/ALMTest.h \
  common/Vector2D.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/BaseApp.h \
  applications/almtest/MessageObserver.h \
  common/NodeVector.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  applications/almtest/ALMTestTracedMessage_m.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/applications/almtest/ALMTestTracedMessage_m.o: applications/almtest/ALMTestTracedMessage_m.cc \
  common/OverlayKey.h \
  applications/almtest/ALMTestTracedMessage_m.h
$O/applications/almtest/MessageObserver.o: applications/almtest/MessageObserver.cc \
  common/OverlayKey.h \
  applications/almtest/MessageObserver.h \
  applications/almtest/ALMTestTracedMessage_m.h
$O/applications/conferenceapp/ConferenceApp.o: applications/conferenceapp/ConferenceApp.cc \
  common/GlobalStatistics.h \
  applications/conferenceapp/ConferenceAppMsg_m.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  applications/conferenceapp/ConferenceApp.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/applications/conferenceapp/ConferenceAppMsg_m.o: applications/conferenceapp/ConferenceAppMsg_m.cc \
  applications/conferenceapp/ConferenceAppMsg_m.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h
$O/applications/dht/DHT.o: applications/dht/DHT.cc \
  common/GlobalStatistics.h \
  common/OverSimMessage.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/BaseOverlay.h \
  applications/dht/DHT.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  applications/dht/DHTMessage_m.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  applications/dht/DHTDataStorage.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h \
  common/SHA1.h
$O/applications/dht/DHTDataStorage.o: applications/dht/DHTDataStorage.cc \
  common/OverSimMessage.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  common/hashWatch.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/ProxNodeHandle.h \
  applications/dht/DHTDataStorage.h \
  common/Comparator.h \
  common/OverSimMessage_m.h
$O/applications/dht/DHTMessage_m.o: applications/dht/DHTMessage_m.cc \
  common/OverSimMessage.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  applications/dht/DHTMessage_m.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/OverSimMessage_m.h
$O/applications/nicetestapp/NiceTestApp.o: applications/nicetestapp/NiceTestApp.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  applications/nicetestapp/NiceTestAppMsg_m.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  applications/nicetestapp/NiceTestApp.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/applications/nicetestapp/NiceTestAppMsg_m.o: applications/nicetestapp/NiceTestAppMsg_m.cc \
  applications/nicetestapp/NiceTestAppMsg_m.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h
$O/applications/tierdummy/TierDummy.o: applications/tierdummy/TierDummy.cc \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  applications/tierdummy/TierDummy.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/BaseApp.o: common/BaseApp.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/UnderlayConfigurator.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/OverlayAccess.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPControlInfo_m.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPSocket.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/GlobalNodeListAccess.h \
  common/Comparator.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  common/RpcMacros.h \
  ../../INET-OverSim-20100505/src/applications/udpapp/UDPAppBase.h \
  common/BaseRpc.h \
  common/UnderlayConfiguratorAccess.h \
  common/OverSimMessage_m.h
$O/common/BaseOverlay.o: common/BaseOverlay.cc \
  common/GlobalStatistics.h \
  common/IterativeLookup.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BootstrapList.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/BaseApp.h \
  common/GlobalParameters.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/HashFunc.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/BootstrapNodeHandle.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  overlay/nice/NiceMessage_m.h \
  common/HoangGlobalObject.h \
  common/GlobalParametersAccess.h \
  common/ProxNodeHandle.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/LookupListener.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPControlInfo_m.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPSocket.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/GlobalNodeListAccess.h \
  common/Comparator.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  ../../INET-OverSim-20100505/src/applications/udpapp/UDPAppBase.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/UnderlayConfiguratorAccess.h \
  common/OverSimMessage_m.h
$O/common/BaseRpc.o: common/BaseRpc.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/SVivaldi.h \
  common/InitStages.h \
  common/Vivaldi.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/BaseApp.h \
  common/NodeVector.h \
  /home/hoang/Downloads/omnetpp-4.1/src/sim/parsim/ccommbufferbase.h \
  common/cnetcommbuffer.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/NeighborCache.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/cbr/yang.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/OverlayAccess.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/ProxNodeHandle.h \
  common/cbr/simplex.h \
  common/CryptoModule.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  common/Comparator.h \
  common/Nps_m.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/UnderlayConfiguratorAccess.h \
  common/OverSimMessage_m.h
$O/common/BinaryValue.o: common/BinaryValue.cc \
  common/BinaryValue.h
$O/common/BootstrapList.o: common/BootstrapList.cc \
  common/OverSimMessage.h \
  common/RpcListener.h \
  common/AbstractLookup.h \
  common/BaseOverlay.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/TopologyVis.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BootstrapList.h \
  common/BaseApp.h \
  common/NodeVector.h \
  common/hashWatch.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  underlay/singlehostunderlay/ZeroconfConnector.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/BootstrapNodeHandle.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/UnderlayConfiguratorAccess.h \
  common/OverSimMessage_m.h
$O/common/ChurnGenerator.o: common/ChurnGenerator.cc \
  common/UnderlayConfigurator.h \
  common/InitStages.h \
  common/ChurnGenerator.h \
  common/UnderlayConfiguratorAccess.h
$O/common/Churn_m.o: common/Churn_m.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/Churn_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/NodeHandle.h
$O/common/CommonMessages_m.o: common/CommonMessages_m.cc \
  common/OverSimMessage.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/OverSimMessage_m.h
$O/common/CoordinateSystem.o: common/CoordinateSystem.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/CoordinateSystem.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/NodeHandle.h \
  common/ProxNodeHandle.h
$O/common/CryptoModule.o: common/CryptoModule.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/NodeVector.h \
  /home/hoang/Downloads/omnetpp-4.1/src/sim/parsim/ccommbufferbase.h \
  common/cnetcommbuffer.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/OverlayAccess.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/CryptoModule.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/EXOSIP.o: common/EXOSIP.cc \
  common/OverSimMessage.h \
  common/RpcListener.h \
  common/AbstractLookup.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/FinisherModule.o: common/FinisherModule.cc \
  common/GlobalStatistics.h \
  common/GlobalStatisticsAccess.h \
  common/FinisherModule.h
$O/common/GenericPacketParser.o: common/GenericPacketParser.cc \
  common/PacketParser.h \
  /home/hoang/Downloads/omnetpp-4.1/src/sim/parsim/ccommbufferbase.h \
  common/cnetcommbuffer.h \
  common/GenericPacketParser.h
$O/common/GlobalNodeList.o: common/GlobalNodeList.cc \
  common/GlobalStatistics.h \
  common/OverSimMessage.h \
  common/RpcListener.h \
  common/AbstractLookup.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BootstrapList.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/BaseApp.h \
  common/NodeVector.h \
  common/hashWatch.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/BootstrapNodeHandle.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/PeerInfo.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/GlobalParameters.o: common/GlobalParameters.cc \
  common/GlobalParameters.h \
  common/OverlayKey.h
$O/common/GlobalStatistics.o: common/GlobalStatistics.cc \
  common/GlobalStatistics.h
$O/common/GlobalTraceManager.o: common/GlobalTraceManager.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TraceChurn.h \
  common/GlobalNodeList.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/HashFunc.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/GlobalTraceManager.h \
  common/ChurnGenerator.h \
  common/GlobalNodeListAccess.h \
  common/GlobalTraceManager_m.h \
  common/UnderlayConfiguratorAccess.h
$O/common/GlobalTraceManager_m.o: common/GlobalTraceManager_m.cc \
  common/GlobalTraceManager_m.h
$O/common/HoangGlobalObject.o: common/HoangGlobalObject.cc \
  common/OverSimMessage.h \
  common/RpcListener.h \
  common/AbstractLookup.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/IterativeLookup.o: common/IterativeLookup.cc \
  common/GlobalStatistics.h \
  common/IterativeLookup.h \
  common/OverSimMessage.h \
  common/RpcListener.h \
  common/AbstractLookup.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/LookupListener.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/LifetimeChurn.o: common/LifetimeChurn.cc \
  common/GlobalStatistics.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  common/Churn_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/LifetimeChurn.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/ChurnGenerator.h
$O/common/NeighborCache.o: common/NeighborCache.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/Vivaldi.h \
  common/SVivaldi.h \
  common/InitStages.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  common/hashWatch.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/NeighborCache.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  common/cbr/yang.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/PeerInfo.h \
  common/cbr/simplex.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/GlobalNodeListAccess.h \
  common/Comparator.h \
  common/Nps_m.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/cbr/CoordMessages_m.h \
  common/OverSimMessage_m.h
$O/common/NoChurn.o: common/NoChurn.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/NoChurn.h \
  common/ChurnGenerator.h
$O/common/NodeHandle.o: common/NodeHandle.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/NodeHandle.h
$O/common/NodeVector.o: common/NodeVector.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/NodeHandle.h \
  common/ProxNodeHandle.h \
  common/Comparator.h
$O/common/Nps.o: common/Nps.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  underlay/simpleunderlay/SimpleNodeEntry.h \
  common/Vivaldi.h \
  common/SVivaldi.h \
  common/InitStages.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h \
  common/NeighborCache.h \
  common/cbr/Landmark.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  common/cbr/yang.h \
  common/HashFunc.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  underlay/simpleunderlay/SimpleInfo.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/PeerInfo.h \
  common/cbr/simplex.h \
  common/cbr/CoordBasedRoutingAccess.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/GlobalNodeListAccess.h \
  common/cbr/CoordBasedRouting.h \
  common/Comparator.h \
  common/Nps_m.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/Nps_m.o: common/Nps_m.cc \
  common/OverSimMessage.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/Nps_m.h \
  common/OverSimMessage_m.h
$O/common/OverSimMessage.o: common/OverSimMessage.cc \
  common/OverSimMessage.h \
  /home/hoang/Downloads/omnetpp-4.1/src/sim/parsim/ccommbufferbase.h \
  common/cnetcommbuffer.h \
  common/OverSimMessage_m.h
$O/common/OverSimMessage_m.o: common/OverSimMessage_m.cc \
  common/OverSimMessage_m.h
$O/common/OverlayKey.o: common/OverlayKey.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/ProxNodeHandle.h \
  common/Comparator.h \
  common/SHA1.h
$O/common/ParetoChurn.o: common/ParetoChurn.cc \
  common/GlobalStatistics.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  common/Churn_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/ParetoChurn.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/ChurnGenerator.h
$O/common/PeerInfo.o: common/PeerInfo.cc \
  common/PeerInfo.h
$O/common/ProxNodeHandle.o: common/ProxNodeHandle.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/NodeHandle.h \
  common/ProxNodeHandle.h
$O/common/RandomChurn.o: common/RandomChurn.cc \
  common/GlobalStatistics.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  common/RandomChurn.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/GlobalStatisticsAccess.h \
  common/ChurnGenerator.h
$O/common/RecursiveLookup.o: common/RecursiveLookup.cc \
  common/RpcListener.h \
  common/AbstractLookup.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/LookupListener.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/RpcListener.o: common/RpcListener.cc \
  common/OverSimMessage.h \
  common/RpcListener.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/OverSimMessage_m.h
$O/common/SHA1.o: common/SHA1.cc \
  common/SHA1.h
$O/common/SVivaldi.o: common/SVivaldi.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/Vivaldi.h \
  common/InitStages.h \
  common/SVivaldi.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/NeighborCache.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/cbr/yang.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/cbr/simplex.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/Nps_m.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/TopologyVis.o: common/TopologyVis.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/TopologyVis.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/GlobalNodeList.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/PeerInfo.h \
  common/GlobalNodeListAccess.h
$O/common/TraceChurn.o: common/TraceChurn.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TraceChurn.h \
  common/GlobalNodeList.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/HashFunc.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/PeerInfo.h \
  common/GlobalNodeListAccess.h
$O/common/TransportAddress.o: common/TransportAddress.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h
$O/common/UnderlayConfigurator.o: common/UnderlayConfigurator.cc \
  common/ChurnGeneratorAccess.h \
  common/GlobalStatistics.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/GlobalNodeList.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/HashFunc.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/GlobalNodeListAccess.h
$O/common/Vector2D.o: common/Vector2D.cc \
  common/Vector2D.h
$O/common/Vivaldi.o: common/Vivaldi.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/SVivaldi.h \
  common/InitStages.h \
  common/Vivaldi.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/NeighborCache.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/cbr/yang.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/cbr/simplex.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/Nps_m.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/cnetcommbuffer.o: common/cnetcommbuffer.cc \
  /home/hoang/Downloads/omnetpp-4.1/src/sim/parsim/ccommbufferbase.h \
  common/cnetcommbuffer.h
$O/common/cbr/CBR-DHT.o: common/cbr/CBR-DHT.cc \
  common/GlobalStatistics.h \
  common/OverSimMessage.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/BaseOverlay.h \
  common/cbr/CBR-DHTMessage_m.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/Vivaldi.h \
  common/SVivaldi.h \
  common/InitStages.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  applications/dht/DHTMessage_m.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/cbr/CBR-DHT.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  common/NeighborCache.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/cbr/yang.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  applications/dht/DHTDataStorage.h \
  common/cbr/simplex.h \
  common/cbr/CoordBasedRoutingAccess.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/cbr/CoordBasedRouting.h \
  common/Nps_m.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/SHA1.h \
  common/OverSimMessage_m.h
$O/common/cbr/CBR-DHTMessage_m.o: common/cbr/CBR-DHTMessage_m.cc \
  common/OverSimMessage.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/cbr/CBR-DHTMessage_m.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  applications/dht/DHTMessage_m.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/OverSimMessage_m.h
$O/common/cbr/CoordBasedRouting.o: common/cbr/CoordBasedRouting.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/GlobalNodeList.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/HashFunc.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/PeerInfo.h \
  common/GlobalNodeListAccess.h \
  common/cbr/CoordBasedRouting.h
$O/common/cbr/CoordMessages_m.o: common/cbr/CoordMessages_m.cc \
  common/OverSimMessage.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/cbr/CoordMessages_m.h \
  common/OverSimMessage_m.h
$O/common/cbr/Landmark.o: common/cbr/Landmark.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  underlay/simpleunderlay/SimpleNodeEntry.h \
  common/Vivaldi.h \
  common/SVivaldi.h \
  common/InitStages.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/BootstrapList.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/BasicModule.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h \
  common/NeighborCache.h \
  common/cbr/Landmark.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/cbr/yang.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  underlay/simpleunderlay/SimpleInfo.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/BootstrapNodeHandle.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/PeerInfo.h \
  common/cbr/simplex.h \
  underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Nps_m.h \
  common/Comparator.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/cbr/simplex.o: common/cbr/simplex.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/Vivaldi.h \
  common/SVivaldi.h \
  common/InitStages.h \
  common/CoordinateSystem.h \
  common/Nps.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/NeighborCache.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/cbr/yang.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/cbr/simplex.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/Nps_m.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/common/cbr/yang.o: common/cbr/yang.cc \
  common/cbr/yang.h
$O/overlay/nice/Nice.o: overlay/nice/Nice.cc \
  common/GlobalStatistics.h \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  underlay/simpleunderlay/SimpleUDP.h \
  common/BaseOverlay.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  overlay/nice/Nice.h \
  underlay/simpleunderlay/SimpleNodeEntry.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  overlay/nice/combination.h \
  common/hashWatch.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  common/HashFunc.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  underlay/simpleunderlay/SimpleInfo.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  overlay/nice/NiceMessage_m.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/PeerInfo.h \
  overlay/nice/NicePeerInfo.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPControlInfo_m.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/GlobalNodeListAccess.h \
  common/Comparator.h \
  common/RpcMacros.h \
  overlay/nice/NiceCluster.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/overlay/nice/NiceCluster.o: overlay/nice/NiceCluster.cc \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  overlay/nice/NiceCluster.h \
  common/OverSimMessage_m.h
$O/overlay/nice/NiceMessage_m.o: overlay/nice/NiceMessage_m.cc \
  common/OverSimMessage.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  overlay/nice/NiceMessage_m.h \
  common/OverSimMessage_m.h
$O/overlay/nice/NicePeerInfo.o: overlay/nice/NicePeerInfo.cc \
  common/AbstractLookup.h \
  common/RpcListener.h \
  common/OverSimMessage.h \
  common/BaseOverlay.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/RecursiveLookup.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  overlay/nice/NicePeerInfo.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/underlay/inetunderlay/AccessNet.o: underlay/inetunderlay/AccessNet.cc \
  underlay/inetunderlay/AccessNet.h \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IRoutingTable.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPv4InterfaceData.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPRoute.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h
$O/underlay/inetunderlay/InetInfo.o: underlay/inetunderlay/InetInfo.cc \
  underlay/inetunderlay/InetInfo.h \
  common/PeerInfo.h
$O/underlay/inetunderlay/InetUnderlayConfigurator.o: underlay/inetunderlay/InetUnderlayConfigurator.cc \
  underlay/inetunderlay/AccessNet.h \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/UnderlayConfigurator.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/StringConvert.h \
  underlay/inetunderlay/InetInfo.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IRoutingTable.h \
  common/GlobalNodeList.h \
  underlay/inetunderlay/InetUnderlayConfigurator.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  common/ChurnGenerator.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPv4InterfaceData.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/PeerInfo.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPRoute.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h
$O/underlay/simpleunderlay/SimpleInfo.o: underlay/simpleunderlay/SimpleInfo.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  underlay/simpleunderlay/SimpleNodeEntry.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h \
  underlay/simpleunderlay/SimpleInfo.h \
  common/PeerInfo.h
$O/underlay/simpleunderlay/SimpleNodeEntry.o: underlay/simpleunderlay/SimpleNodeEntry.cc \
  underlay/simpleunderlay/SimpleUDP.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  underlay/simpleunderlay/SimpleNodeEntry.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h \
  common/OverlayKey.h \
  common/BinaryValue.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPControlInfo_m.h \
  common/SHA1.h
$O/underlay/simpleunderlay/SimpleUDP.o: underlay/simpleunderlay/SimpleUDP.cc \
  common/GlobalStatistics.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv6/IPv6Datagram_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPControlInfo_m.h \
  common/OverSimMessage.h \
  underlay/simpleunderlay/SimpleUDP.h \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/icmpv6/ICMPv6.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPDatagram_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  underlay/simpleunderlay/SimpleNodeEntry.h \
  ../../INET-OverSim-20100505/src/networklayer/icmpv6/ICMPv6Access.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/RoutingTableAccess.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPProtocolId_m.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv6/RoutingTable6Access.h \
  underlay/simpleunderlay/SimpleUDPPacket.h \
  ../../INET-OverSim-20100505/src/networklayer/icmpv6/ICMPv6Message_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPControlInfo.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv6/RoutingTable6.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IRoutingTable.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/ICMPAccess.h \
  common/GlobalNodeList.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  underlay/simpleunderlay/SimpleInfo.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/ICMPMessage_m.h \
  common/CommonMessages_m.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/ICMP.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/ICMPMessage.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6ControlInfo_m.h \
  common/GlobalStatisticsAccess.h \
  common/BinaryValue.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv6/IPv6Datagram.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/PeerInfo.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPRoute.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPControlInfo_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6ControlInfo.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  common/GlobalNodeListAccess.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  common/OverSimMessage_m.h
$O/underlay/simpleunderlay/SimpleUDPPacket_m.o: underlay/simpleunderlay/SimpleUDPPacket_m.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h
$O/underlay/simpleunderlay/SimpleUnderlayConfigurator.o: underlay/simpleunderlay/SimpleUnderlayConfigurator.cc \
  underlay/simpleunderlay/SimpleUDP.h \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  underlay/simpleunderlay/SimpleNodeEntry.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  common/StringConvert.h \
  ../../INET-OverSim-20100505/src/base/BasicModule.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  underlay/simpleunderlay/SimpleUDPPacket_m.h \
  common/GlobalNodeList.h \
  underlay/simpleunderlay/SimpleInfo.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  common/ChurnGenerator.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPv4InterfaceData.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/PeerInfo.h \
  ../../INET-OverSim-20100505/src/transport/contract/UDPControlInfo_m.h \
  underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h
$O/underlay/singlehostunderlay/RealworldApp.o: underlay/singlehostunderlay/RealworldApp.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/PacketParser.h \
  underlay/singlehostunderlay/tunoutscheduler.h \
  underlay/singlehostunderlay/RealworldConnector.h \
  underlay/singlehostunderlay/RealworldApp.h \
  underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/RealworldConnector.o: underlay/singlehostunderlay/RealworldConnector.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/PacketParser.h \
  underlay/singlehostunderlay/RealworldConnector.h \
  underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/RealworldDevice.o: underlay/singlehostunderlay/RealworldDevice.cc \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  common/PacketParser.h \
  underlay/singlehostunderlay/RealworldConnector.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceTableAccess.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  underlay/singlehostunderlay/realtimescheduler.h \
  underlay/singlehostunderlay/RealworldDevice.h
$O/underlay/singlehostunderlay/SingleHostUnderlayConfigurator.o: underlay/singlehostunderlay/SingleHostUnderlayConfigurator.cc \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  common/UnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  ../../INET-OverSim-20100505/src/base/NotificationBoard.h \
  ../../INET-OverSim-20100505/src/base/BasicModule.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IRoutingTable.h \
  common/GlobalNodeList.h \
  underlay/singlehostunderlay/stun/stun.h \
  common/HashFunc.h \
  common/OverlayKey.h \
  common/TransportAddress.h \
  common/oversim_byteswap.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  common/ChurnGenerator.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPv4InterfaceData.h \
  underlay/singlehostunderlay/stun/stun_udp.h \
  underlay/singlehostunderlay/SingleHostUnderlayConfigurator.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  common/PeerInfo.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPRoute.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  common/GlobalNodeListAccess.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h
$O/underlay/singlehostunderlay/TunOutDevice.o: underlay/singlehostunderlay/TunOutDevice.cc \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  ../../INET-OverSim-20100505/src/transport/udp/UDPPacket_m.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPDatagram_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPProtocolId_m.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/PacketParser.h \
  underlay/singlehostunderlay/tunoutscheduler.h \
  underlay/singlehostunderlay/RealworldConnector.h \
  ../../INET-OverSim-20100505/src/transport/udp/UDPPacket.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  underlay/singlehostunderlay/TunOutDevice.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceTableAccess.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  underlay/singlehostunderlay/realtimescheduler.h \
  underlay/singlehostunderlay/RealworldDevice.h
$O/underlay/singlehostunderlay/UdpOutDevice.o: underlay/singlehostunderlay/UdpOutDevice.cc \
  ../../INET-OverSim-20100505/src/networklayer/common/IInterfaceTable.h \
  ../../INET-OverSim-20100505/src/transport/udp/UDPPacket_m.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/ipv4/IPDatagram_m.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPProtocolId_m.h \
  ../../INET-OverSim-20100505/src/linklayer/contract/MACAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/PacketParser.h \
  underlay/singlehostunderlay/tunoutscheduler.h \
  underlay/singlehostunderlay/RealworldConnector.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddressResolver.h \
  ../../INET-OverSim-20100505/src/transport/udp/UDPPacket.h \
  underlay/singlehostunderlay/UdpOutDevice.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceToken.h \
  ../../INET-OverSim-20100505/src/base/ModuleAccess.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceEntry.h \
  ../../INET-OverSim-20100505/src/networklayer/common/InterfaceTableAccess.h \
  ../../INET-OverSim-20100505/src/base/NotifierConsts.h \
  underlay/singlehostunderlay/realtimescheduler.h \
  underlay/singlehostunderlay/RealworldDevice.h
$O/underlay/singlehostunderlay/ZeroconfConnector.o: underlay/singlehostunderlay/ZeroconfConnector.cc \
  common/OverSimMessage.h \
  common/RpcListener.h \
  common/AbstractLookup.h \
  common/BaseOverlay.h \
  common/TopologyVis.h \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  common/oversim_mapset.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  common/RpcState.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  common/InitStages.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  common/BootstrapList.h \
  common/BaseApp.h \
  common/NodeVector.h \
  ../../INET-OverSim-20100505/src/base/INotifiable.h \
  common/GlobalNodeList.h \
  common/RecursiveLookup.h \
  underlay/singlehostunderlay/ZeroconfConnector.h \
  common/HashFunc.h \
  common/TransportAddress.h \
  common/OverlayKey.h \
  common/CommonMessages_m.h \
  common/oversim_byteswap.h \
  common/BootstrapNodeHandle.h \
  common/NodeHandle.h \
  common/BinaryValue.h \
  common/ChurnGenerator.h \
  common/Vector2D.h \
  common/HoangGlobalObject.h \
  common/ProxNodeHandle.h \
  common/IterativeLookupConfiguration.h \
  common/EXOSIP.h \
  common/GlobalNodeListAccess.h \
  common/Comparator.h \
  common/RpcMacros.h \
  common/BaseRpc.h \
  common/OverSimMessage_m.h
$O/underlay/singlehostunderlay/apptunoutscheduler.o: underlay/singlehostunderlay/apptunoutscheduler.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  underlay/singlehostunderlay/apptunoutscheduler.h \
  underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/realtimescheduler.o: underlay/singlehostunderlay/realtimescheduler.cc \
  underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/tunoutscheduler.o: underlay/singlehostunderlay/tunoutscheduler.cc \
  underlay/singlehostunderlay/tunoutscheduler.h \
  underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/udpoutscheduler.o: underlay/singlehostunderlay/udpoutscheduler.cc \
  ../../INET-OverSim-20100505/src/base/INETDefs.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPvXAddress.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPv6Address.h \
  ../../INET-OverSim-20100505/src/networklayer/contract/IPAddress.h \
  underlay/singlehostunderlay/udpoutscheduler.h \
  underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/stun/stun.o: underlay/singlehostunderlay/stun/stun.cc \
  underlay/singlehostunderlay/stun/stun.h \
  underlay/singlehostunderlay/stun/stun_udp.h
$O/underlay/singlehostunderlay/stun/udp.o: underlay/singlehostunderlay/stun/udp.cc \
  underlay/singlehostunderlay/stun/stun_udp.h
