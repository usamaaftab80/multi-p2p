//
// Generated file, do not edit! Created by opp_msgc 4.1 from applications/almtest/ALMTestTracedMessage.msg.
//

#ifndef _ALMTESTTRACEDMESSAGE_M_H_
#define _ALMTESTTRACEDMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include <OverlayKey.h>
// }}



/**
 * Class generated from <tt>applications/almtest/ALMTestTracedMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ALMTestTracedMessage
 * {
 *     
 *     OverlayKey groupId;
 * 
 *     
 *     long mcastId;
 * 
 *     
 *     
 *     int senderId;
 * 
 *     
 *     
 *     int receiverId;
 * }
 * </pre>
 */
class ALMTestTracedMessage : public ::cPacket
{
  protected:
    ::OverlayKey groupId_var;
    long mcastId_var;
    int senderId_var;
    int receiverId_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ALMTestTracedMessage&);

  public:
    ALMTestTracedMessage(const char *name=NULL, int kind=0);
    ALMTestTracedMessage(const ALMTestTracedMessage& other);
    virtual ~ALMTestTracedMessage();
    ALMTestTracedMessage& operator=(const ALMTestTracedMessage& other);
    virtual ALMTestTracedMessage *dup() const {return new ALMTestTracedMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OverlayKey& getGroupId();
    virtual const OverlayKey& getGroupId() const {return const_cast<ALMTestTracedMessage*>(this)->getGroupId();}
    virtual void setGroupId(const OverlayKey& groupId_var);
    virtual long getMcastId() const;
    virtual void setMcastId(long mcastId_var);
    virtual int getSenderId() const;
    virtual void setSenderId(int senderId_var);
    virtual int getReceiverId() const;
    virtual void setReceiverId(int receiverId_var);
};

inline void doPacking(cCommBuffer *b, ALMTestTracedMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ALMTestTracedMessage& obj) {obj.parsimUnpack(b);}


#endif // _ALMTESTTRACEDMESSAGE_M_H_