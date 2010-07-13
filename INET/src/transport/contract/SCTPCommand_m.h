//
// Generated file, do not edit! Created by opp_msgc 4.1 from transport/contract/SCTPCommand.msg.
//

#ifndef _SCTPCOMMAND_M_H_
#define _SCTPCOMMAND_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API 
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API 
#  endif
#endif

// cplusplus {{
#include "IPvXAddress.h"
#include "SCTPAssociation.h"
#include "SCTPCommand.h"
// }}



/**
 * Enum generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * enum SCTPErrorCode
 * {
 * 
 * }
 * </pre>
 */
enum SCTPErrorCode {
};

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPCommand extends cPacket
 * {
 *     int assocId = -1;   
 *     int sid = -1;
 *     int numMsgs = 1;
 *     int ssn = -1;
 *     unsigned short sendUnordered = false;
 *     double lifetime = 0;
 *     IPvXAddress localAddr = IPvXAddress("0.0.0.0");
 *     IPvXAddress remoteAddr = IPvXAddress("0.0.0.0");
 *     int gate = -1;
 * }
 * </pre>
 */
class INET_API SCTPCommand : public ::cPacket
{
  protected:
    int assocId_var;
    int sid_var;
    int numMsgs_var;
    int ssn_var;
    unsigned short sendUnordered_var;
    double lifetime_var;
    ::IPvXAddress localAddr_var;
    ::IPvXAddress remoteAddr_var;
    int gate_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPCommand&);

  public:
    SCTPCommand(const char *name=NULL);
    SCTPCommand(const SCTPCommand& other);
    virtual ~SCTPCommand();
    SCTPCommand& operator=(const SCTPCommand& other);
    virtual SCTPCommand *dup() const {return new SCTPCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getAssocId() const;
    virtual void setAssocId(int assocId_var);
    virtual int getSid() const;
    virtual void setSid(int sid_var);
    virtual int getNumMsgs() const;
    virtual void setNumMsgs(int numMsgs_var);
    virtual int getSsn() const;
    virtual void setSsn(int ssn_var);
    virtual unsigned short getSendUnordered() const;
    virtual void setSendUnordered(unsigned short sendUnordered_var);
    virtual double getLifetime() const;
    virtual void setLifetime(double lifetime_var);
    virtual IPvXAddress& getLocalAddr();
    virtual const IPvXAddress& getLocalAddr() const {return const_cast<SCTPCommand*>(this)->getLocalAddr();}
    virtual void setLocalAddr(const IPvXAddress& localAddr_var);
    virtual IPvXAddress& getRemoteAddr();
    virtual const IPvXAddress& getRemoteAddr() const {return const_cast<SCTPCommand*>(this)->getRemoteAddr();}
    virtual void setRemoteAddr(const IPvXAddress& remoteAddr_var);
    virtual int getGate() const;
    virtual void setGate(int gate_var);
};

inline void doPacking(cCommBuffer *b, SCTPCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPErrorInfo extends SCTPCommand
 * {
 *     int errorCode enum(SCTPErrorCode);
 *     string messageText;
 * }
 * </pre>
 */
class INET_API SCTPErrorInfo : public ::SCTPCommand
{
  protected:
    int errorCode_var;
    opp_string messageText_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPErrorInfo&);

  public:
    SCTPErrorInfo(const char *name=NULL);
    SCTPErrorInfo(const SCTPErrorInfo& other);
    virtual ~SCTPErrorInfo();
    SCTPErrorInfo& operator=(const SCTPErrorInfo& other);
    virtual SCTPErrorInfo *dup() const {return new SCTPErrorInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getErrorCode() const;
    virtual void setErrorCode(int errorCode_var);
    virtual const char * getMessageText() const;
    virtual void setMessageText(const char * messageText_var);
};

inline void doPacking(cCommBuffer *b, SCTPErrorInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPErrorInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPOpenCommand extends SCTPCommand
 * {
 *    
 *     AddressVector localAddresses;
 *     IPvXAddress remoteAddr;            
 *     AddressVector remoteAddresses;
 *     int localPort = -1;              
 *     int remotePort = -1;             
 *     bool fork = false;               
 *     string queueClass = "SCTPQueue"; 
 *     string sctpAlgorithmClass;       
 *     uint32 outboundStreams;	
 *     uint32 numRequests;
 *     uint32 messagesToPush;
 * }
 * </pre>
 */
class INET_API SCTPOpenCommand : public ::SCTPCommand
{
  protected:
    ::AddressVector localAddresses_var;
    ::IPvXAddress remoteAddr_var;
    ::AddressVector remoteAddresses_var;
    int localPort_var;
    int remotePort_var;
    bool fork_var;
    opp_string queueClass_var;
    opp_string sctpAlgorithmClass_var;
    uint32 outboundStreams_var;
    uint32 numRequests_var;
    uint32 messagesToPush_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPOpenCommand&);

  public:
    SCTPOpenCommand(const char *name=NULL);
    SCTPOpenCommand(const SCTPOpenCommand& other);
    virtual ~SCTPOpenCommand();
    SCTPOpenCommand& operator=(const SCTPOpenCommand& other);
    virtual SCTPOpenCommand *dup() const {return new SCTPOpenCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual AddressVector& getLocalAddresses();
    virtual const AddressVector& getLocalAddresses() const {return const_cast<SCTPOpenCommand*>(this)->getLocalAddresses();}
    virtual void setLocalAddresses(const AddressVector& localAddresses_var);
    virtual IPvXAddress& getRemoteAddr();
    virtual const IPvXAddress& getRemoteAddr() const {return const_cast<SCTPOpenCommand*>(this)->getRemoteAddr();}
    virtual void setRemoteAddr(const IPvXAddress& remoteAddr_var);
    virtual AddressVector& getRemoteAddresses();
    virtual const AddressVector& getRemoteAddresses() const {return const_cast<SCTPOpenCommand*>(this)->getRemoteAddresses();}
    virtual void setRemoteAddresses(const AddressVector& remoteAddresses_var);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort_var);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort_var);
    virtual bool getFork() const;
    virtual void setFork(bool fork_var);
    virtual const char * getQueueClass() const;
    virtual void setQueueClass(const char * queueClass_var);
    virtual const char * getSctpAlgorithmClass() const;
    virtual void setSctpAlgorithmClass(const char * sctpAlgorithmClass_var);
    virtual uint32 getOutboundStreams() const;
    virtual void setOutboundStreams(uint32 outboundStreams_var);
    virtual uint32 getNumRequests() const;
    virtual void setNumRequests(uint32 numRequests_var);
    virtual uint32 getMessagesToPush() const;
    virtual void setMessagesToPush(uint32 messagesToPush_var);
};

inline void doPacking(cCommBuffer *b, SCTPOpenCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPOpenCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPSendCommand extends SCTPCommand
 * {
 *     bool last;
 *     unsigned int ppid = 0;
 *     bool primary = true;
 * }
 * </pre>
 */
class INET_API SCTPSendCommand : public ::SCTPCommand
{
  protected:
    bool last_var;
    unsigned int ppid_var;
    bool primary_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPSendCommand&);

  public:
    SCTPSendCommand(const char *name=NULL);
    SCTPSendCommand(const SCTPSendCommand& other);
    virtual ~SCTPSendCommand();
    SCTPSendCommand& operator=(const SCTPSendCommand& other);
    virtual SCTPSendCommand *dup() const {return new SCTPSendCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getLast() const;
    virtual void setLast(bool last_var);
    virtual unsigned int getPpid() const;
    virtual void setPpid(unsigned int ppid_var);
    virtual bool getPrimary() const;
    virtual void setPrimary(bool primary_var);
};

inline void doPacking(cCommBuffer *b, SCTPSendCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPSendCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPConnectInfo extends SCTPCommand
 * {
 *     
 *     
 *     AddressVector remoteAddresses;
 *     int localPort;
 *     int remotePort;
 *     int status;
 *     int inboundStreams;
 *     int outboundStreams;
 * }
 * </pre>
 */
class INET_API SCTPConnectInfo : public ::SCTPCommand
{
  protected:
    ::AddressVector remoteAddresses_var;
    int localPort_var;
    int remotePort_var;
    int status_var;
    int inboundStreams_var;
    int outboundStreams_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPConnectInfo&);

  public:
    SCTPConnectInfo(const char *name=NULL);
    SCTPConnectInfo(const SCTPConnectInfo& other);
    virtual ~SCTPConnectInfo();
    SCTPConnectInfo& operator=(const SCTPConnectInfo& other);
    virtual SCTPConnectInfo *dup() const {return new SCTPConnectInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual AddressVector& getRemoteAddresses();
    virtual const AddressVector& getRemoteAddresses() const {return const_cast<SCTPConnectInfo*>(this)->getRemoteAddresses();}
    virtual void setRemoteAddresses(const AddressVector& remoteAddresses_var);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort_var);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort_var);
    virtual int getStatus() const;
    virtual void setStatus(int status_var);
    virtual int getInboundStreams() const;
    virtual void setInboundStreams(int inboundStreams_var);
    virtual int getOutboundStreams() const;
    virtual void setOutboundStreams(int outboundStreams_var);
};

inline void doPacking(cCommBuffer *b, SCTPConnectInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPConnectInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPStatusInfo extends SCTPCommand
 * {
 *     int state;
 *     string stateName;
 *     IPvXAddress pathId;
 *     bool active;
 * }
 * </pre>
 */
class INET_API SCTPStatusInfo : public ::SCTPCommand
{
  protected:
    int state_var;
    opp_string stateName_var;
    ::IPvXAddress pathId_var;
    bool active_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPStatusInfo&);

  public:
    SCTPStatusInfo(const char *name=NULL);
    SCTPStatusInfo(const SCTPStatusInfo& other);
    virtual ~SCTPStatusInfo();
    SCTPStatusInfo& operator=(const SCTPStatusInfo& other);
    virtual SCTPStatusInfo *dup() const {return new SCTPStatusInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getState() const;
    virtual void setState(int state_var);
    virtual const char * getStateName() const;
    virtual void setStateName(const char * stateName_var);
    virtual IPvXAddress& getPathId();
    virtual const IPvXAddress& getPathId() const {return const_cast<SCTPStatusInfo*>(this)->getPathId();}
    virtual void setPathId(const IPvXAddress& pathId_var);
    virtual bool getActive() const;
    virtual void setActive(bool active_var);
};

inline void doPacking(cCommBuffer *b, SCTPStatusInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPStatusInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPPathInfo extends SCTPCommand
 * {
 *     IPvXAddress remoteAddress;
 * }
 * </pre>
 */
class INET_API SCTPPathInfo : public ::SCTPCommand
{
  protected:
    ::IPvXAddress remoteAddress_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPPathInfo&);

  public:
    SCTPPathInfo(const char *name=NULL);
    SCTPPathInfo(const SCTPPathInfo& other);
    virtual ~SCTPPathInfo();
    SCTPPathInfo& operator=(const SCTPPathInfo& other);
    virtual SCTPPathInfo *dup() const {return new SCTPPathInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPvXAddress& getRemoteAddress();
    virtual const IPvXAddress& getRemoteAddress() const {return const_cast<SCTPPathInfo*>(this)->getRemoteAddress();}
    virtual void setRemoteAddress(const IPvXAddress& remoteAddress_var);
};

inline void doPacking(cCommBuffer *b, SCTPPathInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPPathInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPResetInfo extends SCTPCommand
 * {
 *     IPvXAddress remoteAddr;
 *     unsigned short requestType = 0;
 *     char streams[];
 * }
 * </pre>
 */
class INET_API SCTPResetInfo : public ::SCTPCommand
{
  protected:
    ::IPvXAddress remoteAddr_var;
    unsigned short requestType_var;
    char *streams_var; // array ptr
    unsigned int streams_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPResetInfo&);

  public:
    SCTPResetInfo(const char *name=NULL);
    SCTPResetInfo(const SCTPResetInfo& other);
    virtual ~SCTPResetInfo();
    SCTPResetInfo& operator=(const SCTPResetInfo& other);
    virtual SCTPResetInfo *dup() const {return new SCTPResetInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPvXAddress& getRemoteAddr();
    virtual const IPvXAddress& getRemoteAddr() const {return const_cast<SCTPResetInfo*>(this)->getRemoteAddr();}
    virtual void setRemoteAddr(const IPvXAddress& remoteAddr_var);
    virtual unsigned short getRequestType() const;
    virtual void setRequestType(unsigned short requestType_var);
    virtual void setStreamsArraySize(unsigned int size);
    virtual unsigned int getStreamsArraySize() const;
    virtual char getStreams(unsigned int k) const;
    virtual void setStreams(unsigned int k, char streams_var);
};

inline void doPacking(cCommBuffer *b, SCTPResetInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPResetInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg</tt> by opp_msgc.
 * <pre>
 * class SCTPInfo extends SCTPCommand
 * {
 *     int text = 0;
 * }
 * </pre>
 */
class INET_API SCTPInfo : public ::SCTPCommand
{
  protected:
    int text_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPInfo&);

  public:
    SCTPInfo(const char *name=NULL);
    SCTPInfo(const SCTPInfo& other);
    virtual ~SCTPInfo();
    SCTPInfo& operator=(const SCTPInfo& other);
    virtual SCTPInfo *dup() const {return new SCTPInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getText() const;
    virtual void setText(int text_var);
};

inline void doPacking(cCommBuffer *b, SCTPInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPInfo& obj) {obj.parsimUnpack(b);}


#endif // _SCTPCOMMAND_M_H_