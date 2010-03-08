#
# OMNeT++/OMNEST Makefile for libINET
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-lib -o INET -O out -pINET -Xlinklayer/ext -Lgcc-debug/C:\Tools\WpdPack\Lib
#

# Name of target to be created (-o option)
TARGET = libINET$(A_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -Iapplications \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/pingapp \
    -Iapplications/rtpapp \
    -Iapplications/sctpapp \
    -Iapplications/tcpapp \
    -Iapplications/udpapp \
    -Ibase \
    -Ilinklayer \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/etherswitch \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mac \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/mf80211 \
    -Ilinklayer/mf80211/macLayer \
    -Ilinklayer/mf80211/phyLayer \
    -Ilinklayer/mf80211/phyLayer/decider \
    -Ilinklayer/mf80211/phyLayer/snrEval \
    -Ilinklayer/mfcore \
    -Ilinklayer/ppp \
    -Ilinklayer/radio \
    -Imobility \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/extras \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ldp \
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/queue \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inodes \
    -Inodes/adhoc \
    -Inodes/ethernet \
    -Inodes/inet \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/wireless \
    -Itransport \
    -Itransport/contract \
    -Itransport/rtp \
    -Itransport/rtp/profiles \
    -Itransport/rtp/profiles/avprofile \
    -Itransport/sctp \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/udp \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iworld

# Additional object and library files to link with
EXTRA_OBJS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/generic/IPTrafGen.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/rtpapp/RTPApplication.o \
    $O/applications/sctpapp/SCTPPeer.o \
    $O/applications/sctpapp/SCTPServer.o \
    $O/applications/sctpapp/SCTPClient.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPSpoof.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TCPGenericCliAppBase.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/applications/udpapp/UDPAppBase.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/base/Blackboard.o \
    $O/base/QueueWithQoS.o \
    $O/base/NotifierConsts.o \
    $O/base/ModuleAccess.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/Join.o \
    $O/base/QueueBase.o \
    $O/base/BasicModule.o \
    $O/base/PassiveQueueBase.o \
    $O/base/ByteArrayMessage.o \
    $O/base/ProtocolMap.o \
    $O/base/AbstractQueue.o \
    $O/base/Sink.o \
    $O/base/NotificationBoard.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/ethernet/EtherMAC2.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/etherswitch/MACRelayUnitBase.o \
    $O/linklayer/etherswitch/MACRelayUnitNP.o \
    $O/linklayer/etherswitch/MACRelayUnitPP.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/mf80211/macLayer/Mac80211.o \
    $O/linklayer/mf80211/macLayer/CSMAMacLayer.o \
    $O/linklayer/mf80211/phyLayer/decider/SnrDecider.o \
    $O/linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.o \
    $O/linklayer/mf80211/phyLayer/decider/Decider80211.o \
    $O/linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.o \
    $O/linklayer/mf80211/phyLayer/snrEval/SnrEval80211.o \
    $O/linklayer/mf80211/phyLayer/snrEval/SnrEval.o \
    $O/linklayer/mfcore/WirelessMacBase.o \
    $O/linklayer/mfcore/BasicDecider.o \
    $O/linklayer/mfcore/BasicSnrEval.o \
    $O/linklayer/ppp/PPP.o \
    $O/linklayer/ppp/ThruputMeter.o \
    $O/linklayer/radio/GenericRadio.o \
    $O/linklayer/radio/PathLossReceptionModel.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/Ieee80211Radio.o \
    $O/linklayer/radio/AbstractRadio.o \
    $O/linklayer/radio/Ieee80211RadioModel.o \
    $O/mobility/RectangleMobility.o \
    $O/mobility/LinearMobility.o \
    $O/mobility/LineSegmentsMobilityBase.o \
    $O/mobility/BasicMobility.o \
    $O/mobility/RandomWPMobility.o \
    $O/mobility/CircleMobility.o \
    $O/mobility/NullMobility.o \
    $O/mobility/MassMobility.o \
    $O/mobility/BonnMotionFileCache.o \
    $O/mobility/ANSimMobility.o \
    $O/mobility/BonnMotionMobility.o \
    $O/mobility/ConstSpeedMobility.o \
    $O/mobility/TurtleMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/autorouting/FlatNetworkConfigurator6.o \
    $O/networklayer/autorouting/FlatNetworkConfigurator.o \
    $O/networklayer/autorouting/NetworkConfigurator.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/contract/IPAddress.o \
    $O/networklayer/contract/IPControlInfo.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPAddressResolver.o \
    $O/networklayer/extras/FailureManager.o \
    $O/networklayer/extras/Dummy.o \
    $O/networklayer/extras/NetworkInfo.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/IPRoute.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv4/IP.o \
    $O/networklayer/ipv4/IPFragBuf.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/queue/DropTailQueue.o \
    $O/networklayer/queue/BasicDSCPClassifier.o \
    $O/networklayer/queue/REDQueue.o \
    $O/networklayer/queue/DropTailQoSQueue.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/ted/TED.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/transport/contract/SCTPSocket.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/rtp/RTPInnerPacket.o \
    $O/transport/rtp/RTPParticipantInfo.o \
    $O/transport/rtp/RTPProfile.o \
    $O/transport/rtp/RTCP.o \
    $O/transport/rtp/RTP.o \
    $O/transport/rtp/RTPReceiverInfo.o \
    $O/transport/rtp/RTPPayloadReceiver.o \
    $O/transport/rtp/RTPPacket.o \
    $O/transport/rtp/sdes.o \
    $O/transport/rtp/RTCPPacket.o \
    $O/transport/rtp/reports.o \
    $O/transport/rtp/RTPInterfacePacket.o \
    $O/transport/rtp/RTPSenderInfo.o \
    $O/transport/rtp/RTPPayloadSender.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/transport/sctp/SCTPMessage.o \
    $O/transport/sctp/SCTPSSFunctions.o \
    $O/transport/sctp/SCTPAssociationUtil.o \
    $O/transport/sctp/SCTPAssociationEventProc.o \
    $O/transport/sctp/SCTPSendStream.o \
    $O/transport/sctp/SCTPAlg.o \
    $O/transport/sctp/SCTPReceiveStream.o \
    $O/transport/sctp/SCTPAssociationBase.o \
    $O/transport/sctp/SCTP.o \
    $O/transport/sctp/SCTPCCFunctions.o \
    $O/transport/sctp/SCTPQueue.o \
    $O/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPSegment.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/udp/UDP.o \
    $O/util/opp_utils.o \
    $O/util/NAMTraceWriter.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/XMLUtils.o \
    $O/util/common.o \
    $O/util/TCPDump.o \
    $O/util/headerserializers/ICMPSerializer.o \
    $O/util/headerserializers/TCPSerializer.o \
    $O/util/headerserializers/IPSerializer.o \
    $O/util/headerserializers/SCTPSerializer.o \
    $O/util/headerserializers/UDPSerializer.o \
    $O/world/ChannelAccess.o \
    $O/world/ScenarioManager.o \
    $O/world/ChannelControl.o \
    $O/world/ChannelInstaller.o \
    $O/world/NAMTrace.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/udpapp/UDPEchoAppMsg_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/mf80211/macLayer/MacPkt_m.o \
    $O/linklayer/mf80211/macLayer/Mac80211Pkt_m.o \
    $O/linklayer/mfcore/TransmComplete_m.o \
    $O/linklayer/mfcore/AirFrame_m.o \
    $O/linklayer/mfcore/SnrControlInfo_m.o \
    $O/linklayer/ppp/PPPFrame_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPControlInfo_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv4/IPDatagram_m.o \
    $O/networklayer/ipv4/ControlManetRouting_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/ospfv2/OSPFTimer_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/sctp/SCTPMessage_m.o \
    $O/transport/tcp/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o

# Message files
MSGFILES = \
    applications/ethernet/EtherApp.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/udpapp/UDPEchoAppMsg.msg \
    base/ByteArrayMessage.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/mf80211/macLayer/MacPkt.msg \
    linklayer/mf80211/macLayer/Mac80211Pkt.msg \
    linklayer/mfcore/TransmComplete.msg \
    linklayer/mfcore/AirFrame.msg \
    linklayer/mfcore/SnrControlInfo.msg \
    linklayer/ppp/PPPFrame.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPControlInfo.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv4/IPDatagram.msg \
    networklayer/ipv4/ControlManetRouting.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/ospfv2/OSPFTimer.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/ted/LinkStatePacket.msg \
    networklayer/ted/TED.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/contract/SCTPCommand.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/sctp/SCTPMessage.msg \
    transport/tcp/TCPSegment.msg \
    transport/udp/UDPPacket.msg

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

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH) -PINET_API

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET)

$(TARGET) : $O/$(TARGET)
	ln -s -f $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@mkdir -p $O
	$(AR) $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS)

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
	-rm -f INET INET.exe libINET.so libINET.a libINET.dll libINET.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f applications/*_m.cc applications/*_m.h
	-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	-rm -f applications/rtpapp/*_m.cc applications/rtpapp/*_m.h
	-rm -f applications/sctpapp/*_m.cc applications/sctpapp/*_m.h
	-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	-rm -f base/*_m.cc base/*_m.h
	-rm -f linklayer/*_m.cc linklayer/*_m.h
	-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	-rm -f linklayer/etherswitch/*_m.cc linklayer/etherswitch/*_m.h
	-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	-rm -f linklayer/ieee80211/mac/*_m.cc linklayer/ieee80211/mac/*_m.h
	-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	-rm -f linklayer/mf80211/*_m.cc linklayer/mf80211/*_m.h
	-rm -f linklayer/mf80211/macLayer/*_m.cc linklayer/mf80211/macLayer/*_m.h
	-rm -f linklayer/mf80211/phyLayer/*_m.cc linklayer/mf80211/phyLayer/*_m.h
	-rm -f linklayer/mf80211/phyLayer/decider/*_m.cc linklayer/mf80211/phyLayer/decider/*_m.h
	-rm -f linklayer/mf80211/phyLayer/snrEval/*_m.cc linklayer/mf80211/phyLayer/snrEval/*_m.h
	-rm -f linklayer/mfcore/*_m.cc linklayer/mfcore/*_m.h
	-rm -f linklayer/ppp/*_m.cc linklayer/ppp/*_m.h
	-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	-rm -f mobility/*_m.cc mobility/*_m.h
	-rm -f networklayer/*_m.cc networklayer/*_m.h
	-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	-rm -f networklayer/extras/*_m.cc networklayer/extras/*_m.h
	-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	-rm -f networklayer/queue/*_m.cc networklayer/queue/*_m.h
	-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	-rm -f nodes/*_m.cc nodes/*_m.h
	-rm -f nodes/adhoc/*_m.cc nodes/adhoc/*_m.h
	-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	-rm -f transport/*_m.cc transport/*_m.h
	-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	-rm -f transport/rtp/*_m.cc transport/rtp/*_m.h
	-rm -f transport/rtp/profiles/*_m.cc transport/rtp/profiles/*_m.h
	-rm -f transport/rtp/profiles/avprofile/*_m.cc transport/rtp/profiles/avprofile/*_m.h
	-rm -f transport/sctp/*_m.cc transport/sctp/*_m.h
	-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	-rm -f util/*_m.cc util/*_m.h
	-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	-rm -f world/*_m.cc world/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/udpapp/*.cc base/*.cc linklayer/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/etherswitch/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/mf80211/*.cc linklayer/mf80211/macLayer/*.cc linklayer/mf80211/phyLayer/*.cc linklayer/mf80211/phyLayer/decider/*.cc linklayer/mf80211/phyLayer/snrEval/*.cc linklayer/mfcore/*.cc linklayer/ppp/*.cc linklayer/radio/*.cc mobility/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/extras/*.cc networklayer/icmpv6/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ldp/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/queue/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc nodes/*.cc nodes/adhoc/*.cc nodes/ethernet/*.cc nodes/inet/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/wireless/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/udp/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc world/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/ethernet/EtherApp_m.o: applications/ethernet/EtherApp_m.cc \
	applications/ethernet/EtherApp_m.h \
	base/INETDefs.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
	applications/ethernet/EtherApp_m.h \
	applications/ethernet/EtherAppCli.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
	applications/ethernet/EtherAppSrv.h \
	applications/ethernet/EtherApp_m.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/applications/generic/IPTrafGen.o: applications/generic/IPTrafGen.cc \
	networklayer/contract/IPv6ControlInfo.h \
	applications/generic/IPTrafGen.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPAddress.h
$O/applications/pingapp/PingPayload_m.o: applications/pingapp/PingPayload_m.cc \
	applications/pingapp/PingPayload_m.h \
	base/INETDefs.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
	applications/pingapp/PingApp.h \
	networklayer/contract/IPv6ControlInfo.h \
	applications/pingapp/PingPayload_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPAddress.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
	transport/rtp/RTPInterfacePacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	applications/rtpapp/RTPApplication.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	networklayer/contract/IPAddress.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/contract/SCTPCommand.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	transport/contract/SCTPSocket.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	applications/sctpapp/SCTPServer.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	transport/sctp/SCTPMessage_m.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	transport/contract/SCTPCommand.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	applications/sctpapp/SCTPClient.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	transport/contract/SCTPSocket.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/contract/SCTPCommand.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	applications/sctpapp/SCTPPeer.h \
	transport/contract/SCTPSocket.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	transport/sctp/SCTPMessage_m.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
	applications/tcpapp/TCPSinkApp.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
	networklayer/contract/IPvXAddress.h \
	applications/tcpapp/GenericAppMsg_m.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	applications/tcpapp/TCPGenericSrvThread.h \
	transport/contract/TCPSocketMap.h \
	applications/tcpapp/TCPSrvHostApp.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/GenericAppMsg_m.o: applications/tcpapp/GenericAppMsg_m.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	base/INETDefs.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
	applications/tcpapp/TCPGenericSrvApp.h \
	networklayer/contract/IPvXAddress.h \
	applications/tcpapp/GenericAppMsg_m.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
	applications/tcpapp/TCPGenericCliAppBase.h \
	networklayer/contract/IPvXAddress.h \
	applications/tcpapp/TelnetApp.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
	applications/tcpapp/TCPBasicClientApp.h \
	applications/tcpapp/TCPGenericCliAppBase.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TCPSpoof.o: applications/tcpapp/TCPSpoof.cc \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPProtocolId_m.h \
	applications/tcpapp/TCPSpoof.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	base/INETDefs.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPGenericCliAppBase.o: applications/tcpapp/TCPGenericCliAppBase.cc \
	applications/tcpapp/TCPGenericCliAppBase.h \
	networklayer/contract/IPvXAddress.h \
	applications/tcpapp/GenericAppMsg_m.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	applications/tcpapp/TCPEchoApp.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/contract/TCPSocketMap.h \
	applications/tcpapp/TCPSrvHostApp.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
	applications/tcpapp/TCPSessionApp.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
	applications/udpapp/UDPAppBase.h \
	transport/contract/UDPControlInfo_m.h \
	applications/udpapp/UDPSink.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
	applications/udpapp/UDPVideoStreamCli.h \
	applications/udpapp/UDPAppBase.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPEchoAppMsg_m.o: applications/udpapp/UDPEchoAppMsg_m.cc \
	applications/udpapp/UDPEchoAppMsg_m.h \
	base/INETDefs.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
	applications/udpapp/UDPAppBase.h \
	transport/contract/UDPControlInfo_m.h \
	applications/udpapp/UDPVideoStreamSvr.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
	applications/udpapp/UDPBasicApp.h \
	applications/udpapp/UDPAppBase.h \
	transport/contract/UDPControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
	applications/udpapp/UDPEchoAppMsg_m.h \
	applications/udpapp/UDPBasicApp.h \
	applications/udpapp/UDPAppBase.h \
	transport/contract/UDPControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	applications/udpapp/UDPEchoApp.h
$O/applications/udpapp/UDPAppBase.o: applications/udpapp/UDPAppBase.cc \
	transport/contract/UDPControlInfo_m.h \
	applications/udpapp/UDPAppBase.h \
	transport/contract/UDPSocket.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
	base/ByteArrayMessage.h \
	base/INETDefs.h \
	base/ByteArrayMessage_m.h
$O/base/Join.o: base/Join.cc \
	base/INETDefs.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/INETDefs.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
	base/AbstractQueue.h \
	base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	base/BasicModule.h \
	base/INETDefs.h
$O/base/QueueWithQoS.o: base/QueueWithQoS.cc \
	base/AbstractQueue.h \
	base/EnqueueHook.h \
	base/INETDefs.h \
	base/QueueWithQoS.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	base/INETDefs.h
$O/base/QueueBase.o: base/QueueBase.cc \
	base/AbstractQueue.h \
	base/QueueBase.h \
	base/INETDefs.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
	base/NotifierConsts.h \
	base/INETDefs.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
	base/INETDefs.h \
	base/ProtocolMap.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
	base/ModuleAccess.h \
	base/INETDefs.h
$O/base/ByteArrayMessage_m.o: base/ByteArrayMessage_m.cc \
	base/INETDefs.h \
	base/ByteArrayMessage_m.h
$O/base/Sink.o: base/Sink.cc \
	base/INETDefs.h \
	base/Sink.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
	base/INETDefs.h \
	base/ReassemblyBuffer.h
$O/base/Blackboard.o: base/Blackboard.cc \
	base/Blackboard.h \
	base/ModuleAccess.h \
	base/INETDefs.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h
$O/linklayer/contract/PhyControlInfo_m.o: linklayer/contract/PhyControlInfo_m.cc \
	linklayer/contract/PhyControlInfo_m.h \
	base/INETDefs.h
$O/linklayer/contract/Ieee802Ctrl_m.o: linklayer/contract/Ieee802Ctrl_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/contract/TxNotifDetails.h \
	base/NotificationBoard.h \
	base/ModuleAccess.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/ethernet/EtherBus.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	linklayer/ethernet/EtherMACBase.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/ethernet/Ethernet.h \
	base/NotificationBoard.h \
	linklayer/contract/TxNotifDetails.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
	base/INETDefs.h \
	linklayer/ethernet/EtherLLC.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
	base/INotifiable.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/contract/TxNotifDetails.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	linklayer/ethernet/EtherEncap.h \
	base/ModuleAccess.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
	linklayer/ethernet/EtherHub.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherMAC2.o: linklayer/ethernet/EtherMAC2.cc \
	base/INotifiable.h \
	linklayer/ethernet/EtherMAC2.h \
	base/IPassiveQueue.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	linklayer/ethernet/EtherMACBase.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/ethernet/Ethernet.h \
	base/NotificationBoard.h \
	linklayer/contract/TxNotifDetails.h \
	base/ModuleAccess.h \
	linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherFrame_m.o: linklayer/ethernet/EtherFrame_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/etherswitch/MACRelayUnitPP.o: linklayer/etherswitch/MACRelayUnitPP.cc \
	linklayer/etherswitch/MACRelayUnitBase.h \
	linklayer/etherswitch/MACRelayUnitPP.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/etherswitch/MACRelayUnitBase.o: linklayer/etherswitch/MACRelayUnitBase.cc \
	linklayer/etherswitch/MACRelayUnitBase.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/etherswitch/MACRelayUnitNP.o: linklayer/etherswitch/MACRelayUnitNP.cc \
	linklayer/etherswitch/MACRelayUnitBase.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/etherswitch/MACRelayUnitNP.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	base/FSMA.h \
	base/IPassiveQueue.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	linklayer/contract/PhyControlInfo_m.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	base/NotificationBoard.h \
	linklayer/mfcore/WirelessMacBase.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h
$O/linklayer/ieee80211/mac/Ieee80211Frame_m.o: linklayer/ieee80211/mac/Ieee80211Frame_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/NotifierConsts.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/NotificationBoard.h \
	base/ModuleAccess.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/NotifierConsts.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/NotificationBoard.h \
	base/ModuleAccess.h
$O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o: linklayer/ieee80211/mgmt/Ieee80211Primitives_m.cc \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/NotifierConsts.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/NotificationBoard.h \
	base/ModuleAccess.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/NotifierConsts.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/NotificationBoard.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	base/ModuleAccess.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/NotifierConsts.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/NotificationBoard.h \
	base/ModuleAccess.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
	base/INotifiable.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/contract/RadioState.h \
	base/IPassiveQueue.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	base/PassiveQueueBase.h \
	base/NotifierConsts.h \
	linklayer/contract/PhyControlInfo_m.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	base/NotificationBoard.h \
	base/Coord.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
	base/INotifiable.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	base/NotificationBoard.h \
	linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/mf80211/macLayer/Mac80211Pkt_m.o: linklayer/mf80211/macLayer/Mac80211Pkt_m.cc \
	base/INETDefs.h \
	linklayer/mf80211/macLayer/MacPkt_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/mf80211/macLayer/Mac80211Pkt_m.h
$O/linklayer/mf80211/macLayer/Mac80211.o: linklayer/mf80211/macLayer/Mac80211.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/mf80211/macLayer/Consts80211.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/contract/MACAddress.h \
	base/NotificationBoard.h \
	linklayer/mfcore/WirelessMacBase.h \
	linklayer/mf80211/macLayer/Mac80211.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	linklayer/mf80211/macLayer/MacPkt_m.h \
	linklayer/mf80211/macLayer/Mac80211Pkt_m.h
$O/linklayer/mf80211/macLayer/CSMAMacLayer.o: linklayer/mf80211/macLayer/CSMAMacLayer.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/contract/MACAddress.h \
	base/NotificationBoard.h \
	linklayer/mfcore/WirelessMacBase.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	linklayer/mf80211/macLayer/CSMAMacLayer.h \
	linklayer/mf80211/macLayer/MacPkt_m.h
$O/linklayer/mf80211/macLayer/MacPkt_m.o: linklayer/mf80211/macLayer/MacPkt_m.cc \
	base/INETDefs.h \
	linklayer/mf80211/macLayer/MacPkt_m.h \
	linklayer/contract/MACAddress.h
$O/linklayer/mf80211/phyLayer/decider/Decider80211.o: linklayer/mf80211/phyLayer/decider/Decider80211.cc \
	base/INotifiable.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	base/NotifierConsts.h \
	linklayer/mf80211/phyLayer/decider/Decider80211.h \
	base/INETDefs.h \
	linklayer/mf80211/macLayer/Consts80211.h \
	linklayer/mfcore/BasicDecider.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/mf80211/phyLayer/decider/SnrDecider.o: linklayer/mf80211/phyLayer/decider/SnrDecider.cc \
	linklayer/mf80211/phyLayer/decider/SnrDecider.h \
	base/INotifiable.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	base/NotifierConsts.h \
	base/INETDefs.h \
	linklayer/mfcore/BasicDecider.h \
	base/NotificationBoard.h \
	base/Coord.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.o: linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.cc \
	linklayer/mf80211/phyLayer/decider/SnrDecider.h \
	base/INotifiable.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	base/NotifierConsts.h \
	base/INETDefs.h \
	linklayer/mfcore/BasicDecider.h \
	base/NotificationBoard.h \
	linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.h \
	base/Coord.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval.o: linklayer/mf80211/phyLayer/snrEval/SnrEval.cc \
	base/INotifiable.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
	linklayer/contract/RadioState.h \
	world/ChannelAccess.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	base/NotifierConsts.h \
	linklayer/mfcore/SnrList.h \
	world/ChannelControl.h \
	linklayer/contract/PhyControlInfo_m.h \
	base/INETDefs.h \
	base/NotificationBoard.h \
	linklayer/mfcore/BasicSnrEval.h \
	base/Coord.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.o: linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
	world/ChannelAccess.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	base/NotifierConsts.h \
	linklayer/mfcore/SnrList.h \
	world/ChannelControl.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.h \
	base/INETDefs.h \
	base/NotificationBoard.h \
	linklayer/mfcore/BasicSnrEval.h \
	base/Coord.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval80211.o: linklayer/mf80211/phyLayer/snrEval/SnrEval80211.cc \
	base/INotifiable.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
	linklayer/contract/RadioState.h \
	world/ChannelAccess.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	base/NotifierConsts.h \
	linklayer/mfcore/SnrList.h \
	world/ChannelControl.h \
	linklayer/contract/PhyControlInfo_m.h \
	base/INETDefs.h \
	linklayer/mf80211/macLayer/Consts80211.h \
	base/NotificationBoard.h \
	linklayer/mfcore/BasicSnrEval.h \
	base/Coord.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval80211.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/mfcore/BasicDecider.o: linklayer/mfcore/BasicDecider.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	base/Coord.h \
	linklayer/mfcore/SnrList.h \
	base/NotifierConsts.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	linklayer/mfcore/BasicDecider.h
$O/linklayer/mfcore/WirelessMacBase.o: linklayer/mfcore/WirelessMacBase.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	linklayer/mfcore/WirelessMacBase.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	base/INETDefs.h
$O/linklayer/mfcore/AirFrame_m.o: linklayer/mfcore/AirFrame_m.cc \
	base/Coord.h \
	util/FWMath.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h
$O/linklayer/mfcore/TransmComplete_m.o: linklayer/mfcore/TransmComplete_m.cc \
	base/INETDefs.h \
	linklayer/mfcore/TransmComplete_m.h
$O/linklayer/mfcore/BasicSnrEval.o: linklayer/mfcore/BasicSnrEval.cc \
	base/INotifiable.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	world/ChannelAccess.h \
	linklayer/mfcore/SnrList.h \
	base/NotifierConsts.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	base/NotificationBoard.h \
	linklayer/mfcore/BasicSnrEval.h \
	base/Coord.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/TransmComplete_m.h
$O/linklayer/mfcore/SnrControlInfo_m.o: linklayer/mfcore/SnrControlInfo_m.cc \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	base/INETDefs.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	base/NotificationBoard.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/ppp/PPPFrame_m.h \
	networklayer/common/IInterfaceTable.h \
	linklayer/ppp/PPP.h \
	base/ModuleAccess.h
$O/linklayer/ppp/ThruputMeter.o: linklayer/ppp/ThruputMeter.cc \
	linklayer/ppp/ThruputMeter.h \
	base/INETDefs.h
$O/linklayer/ppp/PPPFrame_m.o: linklayer/ppp/PPPFrame_m.cc \
	linklayer/ppp/PPPFrame_m.h \
	base/INETDefs.h
$O/linklayer/radio/PathLossReceptionModel.o: linklayer/radio/PathLossReceptionModel.cc \
	base/Coord.h \
	linklayer/radio/PathLossReceptionModel.h \
	util/FWMath.h \
	world/ChannelControl.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	linklayer/radio/IReceptionModel.h
$O/linklayer/radio/Ieee80211RadioModel.o: linklayer/radio/Ieee80211RadioModel.cc \
	base/Coord.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/Ieee80211RadioModel.h \
	util/FWMath.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	linklayer/radio/IRadioModel.h
$O/linklayer/radio/Ieee80211Radio.o: linklayer/radio/Ieee80211Radio.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	world/ChannelAccess.h \
	linklayer/mfcore/SnrList.h \
	base/NotifierConsts.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/IRadioModel.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	linklayer/radio/Ieee80211Radio.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/radio/IReceptionModel.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
	linklayer/radio/IModulation.h \
	base/INETDefs.h \
	linklayer/radio/Modulation.h
$O/linklayer/radio/GenericRadio.o: linklayer/radio/GenericRadio.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	world/ChannelAccess.h \
	base/NotifierConsts.h \
	linklayer/mfcore/SnrList.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/IRadioModel.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/radio/GenericRadio.h \
	linklayer/radio/IReceptionModel.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
	linklayer/radio/GenericRadioModel.h \
	base/Coord.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/IModulation.h \
	util/FWMath.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	linklayer/radio/Modulation.h \
	linklayer/radio/IRadioModel.h
$O/linklayer/radio/AbstractRadio.o: linklayer/radio/AbstractRadio.cc \
	base/INotifiable.h \
	linklayer/contract/RadioState.h \
	world/ChannelAccess.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	base/NotifierConsts.h \
	linklayer/mfcore/SnrList.h \
	linklayer/contract/PhyControlInfo_m.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/IRadioModel.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/radio/IReceptionModel.h
$O/mobility/BasicMobility.o: mobility/BasicMobility.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	mobility/BasicMobility.h
$O/mobility/RandomWPMobility.o: mobility/RandomWPMobility.cc \
	base/INotifiable.h \
	base/NotifierConsts.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	mobility/BasicMobility.h \
	base/NotificationBoard.h \
	mobility/RandomWPMobility.h \
	base/Coord.h \
	mobility/LineSegmentsMobilityBase.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/mobility/LinearMobility.o: mobility/LinearMobility.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	mobility/LinearMobility.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	util/FWMath.h \
	base/BasicModule.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	mobility/BasicMobility.h
$O/mobility/BonnMotionFileCache.o: mobility/BonnMotionFileCache.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	mobility/BonnMotionFileCache.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/ChannelControl.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	mobility/BasicMobility.h
$O/mobility/CircleMobility.o: mobility/CircleMobility.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	mobility/CircleMobility.h \
	mobility/BasicMobility.h
$O/mobility/RectangleMobility.o: mobility/RectangleMobility.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	mobility/RectangleMobility.h \
	mobility/BasicMobility.h
$O/mobility/LineSegmentsMobilityBase.o: mobility/LineSegmentsMobilityBase.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/NotifierConsts.h \
	mobility/LineSegmentsMobilityBase.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	mobility/BasicMobility.h
$O/mobility/ANSimMobility.o: mobility/ANSimMobility.cc \
	base/INotifiable.h \
	base/NotifierConsts.h \
	mobility/ANSimMobility.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	mobility/BasicMobility.h \
	base/NotificationBoard.h \
	base/Coord.h \
	mobility/LineSegmentsMobilityBase.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/mobility/NullMobility.o: mobility/NullMobility.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	mobility/NullMobility.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/ChannelControl.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	mobility/BasicMobility.h
$O/mobility/MassMobility.o: mobility/MassMobility.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	mobility/MassMobility.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	util/FWMath.h \
	base/BasicModule.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	mobility/BasicMobility.h
$O/mobility/BonnMotionMobility.o: mobility/BonnMotionMobility.cc \
	base/INotifiable.h \
	base/NotifierConsts.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	mobility/BasicMobility.h \
	base/NotificationBoard.h \
	mobility/BonnMotionFileCache.h \
	base/Coord.h \
	mobility/LineSegmentsMobilityBase.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	mobility/BonnMotionMobility.h
$O/mobility/ConstSpeedMobility.o: mobility/ConstSpeedMobility.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	base/Coord.h \
	base/NotifierConsts.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	util/FWMath.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h \
	mobility/ConstSpeedMobility.h \
	mobility/BasicMobility.h
$O/mobility/TurtleMobility.o: mobility/TurtleMobility.cc \
	base/INotifiable.h \
	base/NotifierConsts.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	mobility/BasicMobility.h \
	base/NotificationBoard.h \
	mobility/TurtleMobility.h \
	base/Coord.h \
	mobility/LineSegmentsMobilityBase.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	networklayer/contract/IPControlInfo_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h
$O/networklayer/arp/ARPPacket_m.o: networklayer/arp/ARPPacket_m.cc \
	networklayer/arp/ARPPacket_m.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h
$O/networklayer/autorouting/NetworkConfigurator.o: networklayer/autorouting/NetworkConfigurator.cc \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/autorouting/NetworkConfigurator.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h
$O/networklayer/autorouting/FlatNetworkConfigurator.o: networklayer/autorouting/FlatNetworkConfigurator.cc \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/autorouting/FlatNetworkConfigurator.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h
$O/networklayer/autorouting/FlatNetworkConfigurator6.o: networklayer/autorouting/FlatNetworkConfigurator6.cc \
	base/INotifiable.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	networklayer/autorouting/FlatNetworkConfigurator6.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/contract/IPAddress.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/ModuleAccess.h \
	base/INETDefs.h \
	networklayer/common/InterfaceTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/contract/IPAddress.h
$O/networklayer/contract/IPControlInfo_m.o: networklayer/contract/IPControlInfo_m.cc \
	networklayer/contract/IPProtocolId_m.h \
	base/INETDefs.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPAddress.h
$O/networklayer/contract/IPAddress.o: networklayer/contract/IPAddress.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h
$O/networklayer/contract/IPProtocolId_m.o: networklayer/contract/IPProtocolId_m.cc \
	networklayer/contract/IPProtocolId_m.h \
	base/INETDefs.h
$O/networklayer/contract/IPControlInfo.o: networklayer/contract/IPControlInfo.cc \
	networklayer/contract/IPProtocolId_m.h \
	base/INETDefs.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPv6ControlInfo_m.o: networklayer/contract/IPv6ControlInfo_m.cc \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h
$O/networklayer/contract/IPAddressResolver.o: networklayer/contract/IPAddressResolver.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/contract/IPAddress.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/extras/NetworkInfo.o: networklayer/extras/NetworkInfo.cc \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/contract/MACAddress.h \
	networklayer/extras/NetworkInfo.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h \
	base/IScriptable.h
$O/networklayer/extras/Dummy.o: networklayer/extras/Dummy.cc
$O/networklayer/extras/FailureManager.o: networklayer/extras/FailureManager.cc \
	base/INETDefs.h \
	networklayer/extras/FailureManager.h \
	base/IScriptable.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
	base/INotifiable.h \
	networklayer/contract/IPv6ControlInfo.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/contract/MACAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	base/NotificationBoard.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/icmpv6/ICMPv6.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/icmpv6/IPv6NeighbourCache.h
$O/networklayer/icmpv6/IPv6NDMessage_m.o: networklayer/icmpv6/IPv6NDMessage_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/icmpv6/IPv6NDMessage_m.h
$O/networklayer/icmpv6/ICMPv6Message_m.o: networklayer/icmpv6/ICMPv6Message_m.cc \
	base/INETDefs.h \
	networklayer/icmpv6/ICMPv6Message_m.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
	base/INotifiable.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	base/NotificationBoard.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/ICMPv6.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/icmpv6/IPv6NDMessage_m.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
	networklayer/ipv4/RoutingTableParser.h \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv4/ICMPMessage_m.o: networklayer/ipv4/ICMPMessage_m.cc \
	networklayer/ipv4/ICMPMessage_m.h \
	base/INETDefs.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
	networklayer/ipv4/RoutingTableParser.h \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv4/IP.o: networklayer/ipv4/IP.cc \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/ICMPMessage_m.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ipv4/ICMP.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	base/QueueBase.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	base/ReassemblyBuffer.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	base/AbstractQueue.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/IP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/contract/IPControlInfo.h \
	base/ProtocolMap.h \
	networklayer/ipv4/ICMPAccess.h
$O/networklayer/ipv4/IPRoute.o: networklayer/ipv4/IPRoute.cc \
	networklayer/ipv4/IPRoute.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/contract/IPProtocolId_m.h \
	base/INETDefs.h \
	networklayer/ipv4/ICMP.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv4/IPDatagram_m.o: networklayer/ipv4/IPDatagram_m.cc \
	networklayer/contract/IPProtocolId_m.h \
	base/INETDefs.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv4/IPFragBuf.o: networklayer/ipv4/IPFragBuf.cc \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/contract/IPProtocolId_m.h \
	base/INETDefs.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h \
	base/ReassemblyBuffer.h
$O/networklayer/ipv4/ControlManetRouting_m.o: networklayer/ipv4/ControlManetRouting_m.cc \
	networklayer/ipv4/ControlManetRouting_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
	networklayer/ipv4/IPv4InterfaceData.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/ErrorHandling.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/ICMPMessage.h \
	base/INETDefs.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ipv6/IPv6Datagram_m.o: networklayer/ipv6/IPv6Datagram_m.cc \
	networklayer/contract/IPProtocolId_m.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
	base/INotifiable.h \
	networklayer/ipv6/IPv6FragBuf.h \
	networklayer/contract/IPv6ControlInfo.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	base/NotificationBoard.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/common/IInterfaceTable.h \
	base/QueueBase.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	base/ReassemblyBuffer.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/ipv6/IPv6.h \
	base/AbstractQueue.h \
	networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/ICMPv6.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6Access.h \
	base/ProtocolMap.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/icmpv6/IPv6NDMessage_m.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
	base/INotifiable.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	util/opp_utils.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
	base/INotifiable.h \
	networklayer/ipv6/IPv6FragBuf.h \
	networklayer/contract/IPv6ControlInfo.h \
	base/NotifierConsts.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/contract/MACAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	base/NotificationBoard.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/icmpv6/ICMPv6.h \
	base/ModuleAccess.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	base/ReassemblyBuffer.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ErrorHandling.h
$O/networklayer/ipv6/IPv6ExtensionHeaders_m.o: networklayer/ipv6/IPv6ExtensionHeaders_m.cc \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ldp/LDPPacket_m.o: networklayer/ldp/LDPPacket_m.cc \
	networklayer/ldp/LDPPacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ldp/LDP.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/mpls/LIBTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/mpls/IClassifier.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment_m.h \
	networklayer/ted/TED.h \
	base/NotificationBoard.h \
	transport/tcp/TCPSegment.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ted/TEDAccess.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/ted/TED_m.h \
	transport/contract/UDPSocket.h \
	networklayer/ipv4/IPDatagram_m.h \
	transport/udp/UDPPacket_m.h \
	networklayer/ipv4/IPDatagram.h \
	transport/contract/TCPSocket.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPControlInfo_m.h \
	transport/udp/UDPPacket.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv6Address.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ldp/LDP.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/mpls/ConstType.h \
	networklayer/rsvp_te/Utils.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/IClassifier.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment_m.h \
	base/NotificationBoard.h \
	transport/tcp/TCPSegment.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/rsvp_te/IntServ.h \
	transport/contract/UDPSocket.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	transport/contract/TCPSocket.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/mpls/MPLS.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPControlInfo_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv6Address.h \
	networklayer/mpls/MPLSPacket.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
	base/INETDefs.h \
	networklayer/mpls/MPLSPacket.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/XMLUtils.h \
	networklayer/contract/IPProtocolId_m.h \
	base/ModuleAccess.h \
	base/INETDefs.h \
	networklayer/mpls/ConstType.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/mpls/LIBTable.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/OSPFTimer_m.o: networklayer/ospfv2/OSPFTimer_m.cc \
	networklayer/ospfv2/OSPFTimer_m.h \
	base/INETDefs.h
$O/networklayer/ospfv2/OSPFPacket_m.o: networklayer/ospfv2/OSPFPacket_m.cc \
	networklayer/ospfv2/OSPFPacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/OSPFRouting.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	base/INETDefs.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	base/ModuleAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
	networklayer/ospfv2/router/OSPFcommon.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/queue/REDQueue.o: networklayer/queue/REDQueue.cc \
	networklayer/queue/REDQueue.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/INETDefs.h
$O/networklayer/queue/DropTailQueue.o: networklayer/queue/DropTailQueue.cc \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	networklayer/queue/DropTailQueue.h \
	base/INETDefs.h
$O/networklayer/queue/DropTailQoSQueue.o: networklayer/queue/DropTailQoSQueue.cc \
	networklayer/queue/IQoSClassifier.h \
	networklayer/queue/DropTailQoSQueue.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	base/INETDefs.h
$O/networklayer/queue/BasicDSCPClassifier.o: networklayer/queue/BasicDSCPClassifier.cc \
	networklayer/queue/IQoSClassifier.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/queue/BasicDSCPClassifier.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/IntServ_m.o: networklayer/rsvp_te/IntServ_m.cc \
	networklayer/rsvp_te/IntServ_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVPHello_m.o: networklayer/rsvp_te/RSVPHello_m.cc \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVPPathMsg_m.o: networklayer/rsvp_te/RSVPPathMsg_m.cc \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/RSVPPacket.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
	base/INotifiable.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/mpls/ConstType.h \
	networklayer/rsvp_te/Utils.h \
	networklayer/mpls/LIBTable.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/mpls/IClassifier.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/ted/TED.h \
	networklayer/rsvp_te/RSVP.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ted/TEDAccess.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/ted/TED_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	util/common.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/XMLUtils.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	base/IScriptable.h
$O/networklayer/rsvp_te/RSVPPacket_m.o: networklayer/rsvp_te/RSVPPacket_m.cc \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/SignallingMsg_m.o: networklayer/rsvp_te/SignallingMsg_m.cc \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/rsvp_te/IntServ.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVPResvMsg_m.o: networklayer/rsvp_te/RSVPResvMsg_m.cc \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/RSVPPacket.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
	base/INotifiable.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/ipv4/IRoutingTable.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/mpls/IClassifier.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	base/NotificationBoard.h \
	networklayer/rsvp_te/RSVP.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/rsvp_te/SimpleClassifier.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	base/INETDefs.h \
	networklayer/rsvp_te/RSVPAccess.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/XMLUtils.h \
	base/ModuleAccess.h \
	base/IScriptable.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/IntServ.h \
	base/INETDefs.h \
	networklayer/rsvp_te/Utils.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ted/TED_m.o: networklayer/ted/TED_m.cc \
	networklayer/ted/TED_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
	networklayer/rsvp_te/IntServ_m.h \
	base/INotifiable.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/ted/TED.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/ted/TED_m.h \
	base/ModuleAccess.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ted/LinkStatePacket_m.o: networklayer/ted/LinkStatePacket_m.cc \
	networklayer/ted/TED_m.h \
	networklayer/ted/LinkStatePacket_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ted/LinkStateRouting.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/ted/TED.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ted/TEDAccess.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/ted/TED_m.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ipv4/IPRoute.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ted/LinkStatePacket_m.h \
	base/ModuleAccess.h \
	networklayer/contract/IPControlInfo.h
$O/transport/contract/SCTPCommand_m.o: transport/contract/SCTPCommand_m.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/contract/SCTPCommand.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	networklayer/common/InterfaceTable.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/contract/UDPControlInfo_m.o: transport/contract/UDPControlInfo_m.cc \
	transport/contract/UDPControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	transport/contract/SCTPCommand.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	transport/contract/SCTPSocket.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/contract/TCPSocketMap.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/transport/contract/TCPCommand_m.o: transport/contract/TCPCommand_m.cc \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPCommand_m.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPCommand_m.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/reports.h \
	base/INETDefs.h \
	transport/rtp/sdes.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPReceiverInfo.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/RTPInterfacePacket.o: transport/rtp/RTPInterfacePacket.cc \
	transport/rtp/RTPInterfacePacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/RTPProfile.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInterfacePacket.h \
	transport/contract/UDPControlInfo_m.h \
	transport/rtp/RTP.h \
	transport/contract/UDPSocket.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTCPPacket.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPSenderInfo.h \
	transport/rtp/RTPReceiverInfo.h \
	transport/rtp/RTCP.h \
	transport/contract/UDPControlInfo_m.h \
	transport/rtp/reports.h \
	transport/contract/UDPSocket.h \
	networklayer/contract/IPv6Address.h \
	transport/rtp/sdes.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
	base/INETDefs.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
	transport/rtp/RTCPPacket.h \
	transport/rtp/reports.h \
	base/INETDefs.h \
	transport/rtp/sdes.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/reports.h \
	base/INETDefs.h \
	transport/rtp/sdes.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
	transport/rtp/reports.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/RTPSenderStatusMessage_m.o: transport/rtp/RTPSenderStatusMessage_m.cc \
	transport/rtp/RTPSenderStatusMessage_m.h \
	base/INETDefs.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
	transport/rtp/RTPPacket.h \
	base/INETDefs.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/reports.h \
	base/INETDefs.h \
	transport/rtp/sdes.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPSenderInfo.h
$O/transport/rtp/RTPSenderControlMessage_m.o: transport/rtp/RTPSenderControlMessage_m.cc \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPProfile.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/reports.h \
	transport/rtp/sdes.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
	base/INETDefs.h \
	transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
	transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
	transport/rtp/profiles/avprofile/RTPAVProfile.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/RTPProfile.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPInnerPacket.h \
	networklayer/contract/IPAddress.h
$O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o: transport/rtp/profiles/avprofile/RTPMpegPacket_m.cc \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
	base/INETDefs.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	transport/contract/SCTPCommand.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlg.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	transport/contract/SCTPCommand.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/contract/SCTPCommand.h \
	networklayer/contract/IPv6ControlInfo.h \
	transport/sctp/SCTPAssociation.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	transport/sctp/SCTPMessage_m.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6Address.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/contract/SCTPCommand.h \
	networklayer/contract/IPv6ControlInfo.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPMessage_m.o: transport/sctp/SCTPMessage_m.cc \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/sctp/SCTPMessage_m.h \
	networklayer/contract/IPAddress.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	transport/contract/SCTPCommand.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	transport/contract/SCTPCommand_m.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h \
	transport/contract/TCPCommand_m.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
	transport/tcp/TCP.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/contract/IPControlInfo_m.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h
$O/transport/tcp/TCPSegment.o: transport/tcp/TCPSegment.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	base/INETDefs.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h \
	transport/contract/TCPCommand_m.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h \
	transport/contract/TCPCommand_m.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
	transport/tcp/TCP.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	transport/tcp/TCPConnection.h \
	networklayer/contract/IPAddress.h
$O/transport/tcp/TCPSegment_m.o: transport/tcp/TCPSegment_m.cc \
	transport/tcp/TCPSegment_m.h \
	base/INETDefs.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/flavours/TCPNoCongestionControl.h \
	transport/tcp/TCPConnection.h \
	networklayer/contract/IPAddress.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp/TCPConnection.h \
	networklayer/contract/IPAddress.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/flavours/DumbTCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/TCPConnection.h \
	networklayer/contract/IPAddress.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/flavours/TCPTahoe.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp/TCPConnection.h \
	networklayer/contract/IPAddress.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPReno.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	transport/tcp/queues/TCPMsgBasedSendQueue.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/TCPSendQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCP.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	transport/tcp/queues/TCPVirtualDataSendQueue.h \
	transport/tcp/TCPSendQueue.h \
	networklayer/contract/IPAddress.h \
	transport/tcp/TCPConnection.h
$O/transport/udp/UDPPacket_m.o: transport/udp/UDPPacket_m.cc \
	base/INETDefs.h \
	transport/udp/UDPPacket_m.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/contract/IPv6ControlInfo.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceToken.h \
	networklayer/ipv4/ICMP.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/contract/IPControlInfo_m.h \
	base/NotificationBoard.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/common/IInterfaceTable.h \
	transport/udp/UDP.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv4/IPDatagram_m.h \
	transport/udp/UDPPacket_m.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/udp/UDPPacket.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/icmpv6/ICMPv6.h \
	base/ModuleAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv6/RoutingTable6Access.h
$O/util/NAMTraceWriter.o: util/NAMTraceWriter.cc \
	base/INotifiable.h \
	util/NAMTraceWriter.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	base/INETDefs.h \
	networklayer/common/InterfaceEntry.h \
	linklayer/contract/MACAddress.h \
	base/NotificationBoard.h \
	linklayer/contract/TxNotifDetails.h \
	networklayer/common/IInterfaceTable.h \
	base/ModuleAccess.h \
	world/NAMTrace.h
$O/util/opp_utils.o: util/opp_utils.cc \
	base/INETDefs.h \
	util/opp_utils.h
$O/util/common.o: util/common.cc \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/IntServ.h \
	util/common.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
	util/XMLUtils.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/util/TCPDump.o: util/TCPDump.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/ICMPMessage_m.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/common/InterfaceTableAccess.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	transport/tcp/TCPSegment_m.h \
	transport/sctp/SCTP.h \
	base/NotificationBoard.h \
	transport/tcp/TCPSegment.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	transport/udp/UDPPacket_m.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	util/TCPDump.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	util/headerserializers/IPSerializer.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/common/InterfaceTable.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
	base/INETDefs.h \
	util/ThruputMeteringChannel.h
$O/util/headerserializers/IPSerializer.o: util/headerserializers/IPSerializer.cc \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/contract/IPProtocolId_m.h \
	util/headerserializers/UDPSerializer.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/ip.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	util/headerserializers/TCPSerializer.h \
	networklayer/ipv4/IPDatagram_m.h \
	util/headerserializers/SCTPSerializer.h \
	networklayer/ipv4/IPDatagram.h \
	transport/udp/UDPPacket_m.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	util/headerserializers/headers/defs.h \
	networklayer/contract/IPvXAddress.h \
	base/INETDefs.h \
	util/headerserializers/ICMPSerializer.h \
	transport/udp/UDPPacket.h \
	util/headerserializers/IPSerializer.h \
	util/headerserializers/headers/tcp.h \
	networklayer/contract/IPv6Address.h \
	transport/sctp/SCTPMessage_m.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/in.h
$O/util/headerserializers/SCTPSerializer.o: util/headerserializers/SCTPSerializer.cc \
	base/INotifiable.h \
	networklayer/ipv4/IRoutingTable.h \
	transport/sctp/SCTPAssociation.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	base/NotifierConsts.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/common/InterfaceEntry.h \
	util/headerserializers/headers/bsdint.h \
	transport/sctp/SCTP.h \
	util/headerserializers/headers/ip.h \
	base/NotificationBoard.h \
	networklayer/common/IInterfaceTable.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/headerserializers/SCTPSerializer.h \
	networklayer/contract/IPAddress.h \
	transport/sctp/SCTPMessage.h \
	networklayer/ipv4/IPRoute.h \
	util/headerserializers/headers/defs.h \
	networklayer/contract/IPvXAddress.h \
	util/headerserializers/headers/sctp.h \
	base/INETDefs.h \
	networklayer/ipv4/RoutingTable.h \
	linklayer/contract/MACAddress.h \
	networklayer/ipv4/RoutingTableAccess.h \
	base/ModuleAccess.h \
	transport/sctp/SCTPQueue.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/common/InterfaceTable.h \
	transport/sctp/SCTPMessage_m.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/in.h
$O/util/headerserializers/ICMPSerializer.o: util/headerserializers/ICMPSerializer.cc \
	networklayer/ipv4/ICMPMessage_m.h \
	util/headerserializers/headers/defs.h \
	networklayer/contract/IPProtocolId_m.h \
	util/headerserializers/headers/ip_icmp.h \
	base/INETDefs.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/ip.h \
	util/headerserializers/ICMPSerializer.h \
	util/headerserializers/IPSerializer.h \
	applications/pingapp/PingPayload_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/contract/IPAddress.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h
$O/util/headerserializers/UDPSerializer.o: util/headerserializers/UDPSerializer.cc \
	transport/udp/UDPPacket.h \
	util/headerserializers/headers/defs.h \
	base/INETDefs.h \
	util/headerserializers/UDPSerializer.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/headers/udp.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/bsdint.h
$O/util/headerserializers/TCPSerializer.o: util/headerserializers/TCPSerializer.cc \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSegment.h \
	util/headerserializers/headers/tcp.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/TCPSerializer.h \
	base/INETDefs.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/bsdint.h
$O/world/ChannelInstaller.o: world/ChannelInstaller.cc \
	base/INETDefs.h \
	world/ChannelInstaller.h
$O/world/ScenarioManager.o: world/ScenarioManager.cc \
	base/INETDefs.h \
	world/ScenarioManager.h \
	base/IScriptable.h
$O/world/NAMTrace.o: world/NAMTrace.cc \
	base/INETDefs.h \
	world/NAMTrace.h
$O/world/ChannelControl.o: world/ChannelControl.cc \
	base/Coord.h \
	util/FWMath.h \
	world/ChannelControl.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h
$O/world/ChannelAccess.o: world/ChannelAccess.cc \
	base/INotifiable.h \
	base/NotificationBoard.h \
	world/ChannelAccess.h \
	base/Coord.h \
	base/NotifierConsts.h \
	util/FWMath.h \
	base/ModuleAccess.h \
	world/ChannelControl.h \
	base/BasicModule.h \
	linklayer/mfcore/AirFrame_m.h \
	base/INETDefs.h

