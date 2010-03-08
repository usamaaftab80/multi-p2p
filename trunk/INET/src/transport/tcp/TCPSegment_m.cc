//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/tcp/TCPSegment.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TCPSegment_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




TCPPayloadMessage::TCPPayloadMessage()
{
    endSequenceNo = 0;
}

void doPacking(cCommBuffer *b, TCPPayloadMessage& a)
{
    doPacking(b,a.endSequenceNo);
    doPacking(b,a.msg);
}

void doUnpacking(cCommBuffer *b, TCPPayloadMessage& a)
{
    doUnpacking(b,a.endSequenceNo);
    doUnpacking(b,a.msg);
}

class TCPPayloadMessageDescriptor : public cClassDescriptor
{
  public:
    TCPPayloadMessageDescriptor();
    virtual ~TCPPayloadMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(TCPPayloadMessageDescriptor);

TCPPayloadMessageDescriptor::TCPPayloadMessageDescriptor() : cClassDescriptor("TCPPayloadMessage", "")
{
}

TCPPayloadMessageDescriptor::~TCPPayloadMessageDescriptor()
{
}

bool TCPPayloadMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPPayloadMessage *>(obj)!=NULL;
}

const char *TCPPayloadMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPPayloadMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TCPPayloadMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *TCPPayloadMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "endSequenceNo";
        case 1: return "msg";
        default: return NULL;
    }
}

const char *TCPPayloadMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned int";
        case 1: return "cPacketPtr";
        default: return NULL;
    }
}

const char *TCPPayloadMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int TCPPayloadMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TCPPayloadMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->endSequenceNo,resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->msg; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool TCPPayloadMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->endSequenceNo = string2ulong(value); return true;
        default: return false;
    }
}

const char *TCPPayloadMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cPacketPtr"; break;
        default: return NULL;
    }
}

void *TCPPayloadMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->msg); break;
        default: return NULL;
    }
}

TCPSegment_Base::TCPSegment_Base(const char *name, int kind) : cPacket(name,kind)
{
    this->srcPort_var = 0;
    this->destPort_var = 0;
    this->sequenceNo_var = 0;
    this->ackNo_var = 0;
    this->urgBit_var = 0;
    this->ackBit_var = 0;
    this->pshBit_var = 0;
    this->rstBit_var = 0;
    this->synBit_var = 0;
    this->finBit_var = 0;
    this->window_var = 0;
    this->urgentPointer_var = 0;
    this->payloadLength_var = 0;
}

TCPSegment_Base::TCPSegment_Base(const TCPSegment_Base& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

TCPSegment_Base::~TCPSegment_Base()
{
}

TCPSegment_Base& TCPSegment_Base::operator=(const TCPSegment_Base& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->srcPort_var = other.srcPort_var;
    this->destPort_var = other.destPort_var;
    this->sequenceNo_var = other.sequenceNo_var;
    this->ackNo_var = other.ackNo_var;
    this->urgBit_var = other.urgBit_var;
    this->ackBit_var = other.ackBit_var;
    this->pshBit_var = other.pshBit_var;
    this->rstBit_var = other.rstBit_var;
    this->synBit_var = other.synBit_var;
    this->finBit_var = other.finBit_var;
    this->window_var = other.window_var;
    this->urgentPointer_var = other.urgentPointer_var;
    this->payloadLength_var = other.payloadLength_var;
    return *this;
}

void TCPSegment_Base::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->srcPort_var);
    doPacking(b,this->destPort_var);
    doPacking(b,this->sequenceNo_var);
    doPacking(b,this->ackNo_var);
    doPacking(b,this->urgBit_var);
    doPacking(b,this->ackBit_var);
    doPacking(b,this->pshBit_var);
    doPacking(b,this->rstBit_var);
    doPacking(b,this->synBit_var);
    doPacking(b,this->finBit_var);
    doPacking(b,this->window_var);
    doPacking(b,this->urgentPointer_var);
    doPacking(b,this->payloadLength_var);
    // field payload is abstract -- please do packing in customized class
}

void TCPSegment_Base::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcPort_var);
    doUnpacking(b,this->destPort_var);
    doUnpacking(b,this->sequenceNo_var);
    doUnpacking(b,this->ackNo_var);
    doUnpacking(b,this->urgBit_var);
    doUnpacking(b,this->ackBit_var);
    doUnpacking(b,this->pshBit_var);
    doUnpacking(b,this->rstBit_var);
    doUnpacking(b,this->synBit_var);
    doUnpacking(b,this->finBit_var);
    doUnpacking(b,this->window_var);
    doUnpacking(b,this->urgentPointer_var);
    doUnpacking(b,this->payloadLength_var);
    // field payload is abstract -- please do unpacking in customized class
}

short TCPSegment_Base::getSrcPort() const
{
    return srcPort_var;
}

void TCPSegment_Base::setSrcPort(short srcPort_var)
{
    this->srcPort_var = srcPort_var;
}

short TCPSegment_Base::getDestPort() const
{
    return destPort_var;
}

void TCPSegment_Base::setDestPort(short destPort_var)
{
    this->destPort_var = destPort_var;
}

unsigned int TCPSegment_Base::getSequenceNo() const
{
    return sequenceNo_var;
}

void TCPSegment_Base::setSequenceNo(unsigned int sequenceNo_var)
{
    this->sequenceNo_var = sequenceNo_var;
}

unsigned int TCPSegment_Base::getAckNo() const
{
    return ackNo_var;
}

void TCPSegment_Base::setAckNo(unsigned int ackNo_var)
{
    this->ackNo_var = ackNo_var;
}

bool TCPSegment_Base::getUrgBit() const
{
    return urgBit_var;
}

void TCPSegment_Base::setUrgBit(bool urgBit_var)
{
    this->urgBit_var = urgBit_var;
}

bool TCPSegment_Base::getAckBit() const
{
    return ackBit_var;
}

void TCPSegment_Base::setAckBit(bool ackBit_var)
{
    this->ackBit_var = ackBit_var;
}

bool TCPSegment_Base::getPshBit() const
{
    return pshBit_var;
}

void TCPSegment_Base::setPshBit(bool pshBit_var)
{
    this->pshBit_var = pshBit_var;
}

bool TCPSegment_Base::getRstBit() const
{
    return rstBit_var;
}

void TCPSegment_Base::setRstBit(bool rstBit_var)
{
    this->rstBit_var = rstBit_var;
}

bool TCPSegment_Base::getSynBit() const
{
    return synBit_var;
}

void TCPSegment_Base::setSynBit(bool synBit_var)
{
    this->synBit_var = synBit_var;
}

bool TCPSegment_Base::getFinBit() const
{
    return finBit_var;
}

void TCPSegment_Base::setFinBit(bool finBit_var)
{
    this->finBit_var = finBit_var;
}

unsigned long TCPSegment_Base::getWindow() const
{
    return window_var;
}

void TCPSegment_Base::setWindow(unsigned long window_var)
{
    this->window_var = window_var;
}

unsigned long TCPSegment_Base::getUrgentPointer() const
{
    return urgentPointer_var;
}

void TCPSegment_Base::setUrgentPointer(unsigned long urgentPointer_var)
{
    this->urgentPointer_var = urgentPointer_var;
}

int TCPSegment_Base::getPayloadLength() const
{
    return payloadLength_var;
}

void TCPSegment_Base::setPayloadLength(int payloadLength_var)
{
    this->payloadLength_var = payloadLength_var;
}

class TCPSegmentDescriptor : public cClassDescriptor
{
  public:
    TCPSegmentDescriptor();
    virtual ~TCPSegmentDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(TCPSegmentDescriptor);

TCPSegmentDescriptor::TCPSegmentDescriptor() : cClassDescriptor("TCPSegment", "cPacket")
{
}

TCPSegmentDescriptor::~TCPSegmentDescriptor()
{
}

bool TCPSegmentDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPSegment_Base *>(obj)!=NULL;
}

const char *TCPSegmentDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPSegmentDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 14+basedesc->getFieldCount(object) : 14;
}

unsigned int TCPSegmentDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        case 9: return FD_ISEDITABLE;
        case 10: return FD_ISEDITABLE;
        case 11: return FD_ISEDITABLE;
        case 12: return FD_ISEDITABLE;
        case 13: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *TCPSegmentDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "srcPort";
        case 1: return "destPort";
        case 2: return "sequenceNo";
        case 3: return "ackNo";
        case 4: return "urgBit";
        case 5: return "ackBit";
        case 6: return "pshBit";
        case 7: return "rstBit";
        case 8: return "synBit";
        case 9: return "finBit";
        case 10: return "window";
        case 11: return "urgentPointer";
        case 12: return "payloadLength";
        case 13: return "payload";
        default: return NULL;
    }
}

const char *TCPSegmentDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "short";
        case 1: return "short";
        case 2: return "unsigned int";
        case 3: return "unsigned int";
        case 4: return "bool";
        case 5: return "bool";
        case 6: return "bool";
        case 7: return "bool";
        case 8: return "bool";
        case 9: return "bool";
        case 10: return "unsigned long";
        case 11: return "unsigned long";
        case 12: return "int";
        case 13: return "TCPPayloadMessage";
        default: return NULL;
    }
}

const char *TCPSegmentDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int TCPSegmentDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 13: return pp->getPayloadArraySize();
        default: return 0;
    }
}

bool TCPSegmentDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getSrcPort(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getDestPort(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getSequenceNo(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getAckNo(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->getUrgBit(),resultbuf,bufsize); return true;
        case 5: bool2string(pp->getAckBit(),resultbuf,bufsize); return true;
        case 6: bool2string(pp->getPshBit(),resultbuf,bufsize); return true;
        case 7: bool2string(pp->getRstBit(),resultbuf,bufsize); return true;
        case 8: bool2string(pp->getSynBit(),resultbuf,bufsize); return true;
        case 9: bool2string(pp->getFinBit(),resultbuf,bufsize); return true;
        case 10: ulong2string(pp->getWindow(),resultbuf,bufsize); return true;
        case 11: ulong2string(pp->getUrgentPointer(),resultbuf,bufsize); return true;
        case 12: long2string(pp->getPayloadLength(),resultbuf,bufsize); return true;
        case 13: {std::stringstream out; out << pp->getPayload(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool TCPSegmentDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrcPort(string2long(value)); return true;
        case 1: pp->setDestPort(string2long(value)); return true;
        case 2: pp->setSequenceNo(string2ulong(value)); return true;
        case 3: pp->setAckNo(string2ulong(value)); return true;
        case 4: pp->setUrgBit(string2bool(value)); return true;
        case 5: pp->setAckBit(string2bool(value)); return true;
        case 6: pp->setPshBit(string2bool(value)); return true;
        case 7: pp->setRstBit(string2bool(value)); return true;
        case 8: pp->setSynBit(string2bool(value)); return true;
        case 9: pp->setFinBit(string2bool(value)); return true;
        case 10: pp->setWindow(string2ulong(value)); return true;
        case 11: pp->setUrgentPointer(string2ulong(value)); return true;
        case 12: pp->setPayloadLength(string2long(value)); return true;
        default: return false;
    }
}

const char *TCPSegmentDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 13: return "TCPPayloadMessage"; break;
        default: return NULL;
    }
}

void *TCPSegmentDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 13: return (void *)(&pp->getPayload(i)); break;
        default: return NULL;
    }
}


