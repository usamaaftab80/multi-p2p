//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/nicetestapp/NiceTestAppMsg.msg.
//

#ifndef _NICETESTAPPMSG_M_H_
#define _NICETESTAPPMSG_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{ ... }} section:

#include <TransportAddress.h>
// end cplusplus



/**
 * Enum generated from <tt>applications/nicetestapp/NiceTestAppMsg.msg</tt> by opp_msgc.
 * <pre>
 * enum MessageType 
 * {
 *     MYMSG_PING = 1;           
 *     MYMSG_PONG = 2;           
 * }
 * </pre>
 */
enum MessageType {
    MYMSG_PING = 1,
    MYMSG_PONG = 2
};

/**
 * Class generated from <tt>applications/nicetestapp/NiceTestAppMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet NiceTestAppMsg 
 * {
 *     int type;                        
 *     TransportAddress senderAddress;  
 *     string data;
 *     int seqNo;
 * }
 * </pre>
 */
class NiceTestAppMsg : public cPacket
{
  protected:
    int type_var;
    TransportAddress senderAddress_var;
    opp_string data_var;
    int seqNo_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NiceTestAppMsg&);

  public:
    NiceTestAppMsg(const char *name=NULL, int kind=0);
    NiceTestAppMsg(const NiceTestAppMsg& other);
    virtual ~NiceTestAppMsg();
    NiceTestAppMsg& operator=(const NiceTestAppMsg& other);
    virtual NiceTestAppMsg *dup() const {return new NiceTestAppMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type_var);
    virtual TransportAddress& getSenderAddress();
    virtual const TransportAddress& getSenderAddress() const {return const_cast<NiceTestAppMsg*>(this)->getSenderAddress();}
    virtual void setSenderAddress(const TransportAddress& senderAddress_var);
    virtual const char * getData() const;
    virtual void setData(const char * data_var);
    virtual int getSeqNo() const;
    virtual void setSeqNo(int seqNo_var);
};

inline void doPacking(cCommBuffer *b, NiceTestAppMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NiceTestAppMsg& obj) {obj.parsimUnpack(b);}


#endif // _NICETESTAPPMSG_M_H_
