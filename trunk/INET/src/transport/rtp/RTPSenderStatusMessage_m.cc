//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/rtp/RTPSenderStatusMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPSenderStatusMessage_m.h"

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




Register_Class(RTPSenderStatusMessage);

RTPSenderStatusMessage::RTPSenderStatusMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->status_var = 0;
    this->timeStamp_var = 0;
}

RTPSenderStatusMessage::RTPSenderStatusMessage(const RTPSenderStatusMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

RTPSenderStatusMessage::~RTPSenderStatusMessage()
{
}

RTPSenderStatusMessage& RTPSenderStatusMessage::operator=(const RTPSenderStatusMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->status_var = other.status_var;
    this->timeStamp_var = other.timeStamp_var;
    return *this;
}

void RTPSenderStatusMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->timeStamp_var);
}

void RTPSenderStatusMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->timeStamp_var);
}

const char * RTPSenderStatusMessage::getStatus() const
{
    return status_var.c_str();
}

void RTPSenderStatusMessage::setStatus(const char * status_var)
{
    this->status_var = status_var;
}

uint32 RTPSenderStatusMessage::getTimeStamp() const
{
    return timeStamp_var;
}

void RTPSenderStatusMessage::setTimeStamp(uint32 timeStamp_var)
{
    this->timeStamp_var = timeStamp_var;
}

class RTPSenderStatusMessageDescriptor : public cClassDescriptor
{
  public:
    RTPSenderStatusMessageDescriptor();
    virtual ~RTPSenderStatusMessageDescriptor();

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

Register_ClassDescriptor(RTPSenderStatusMessageDescriptor);

RTPSenderStatusMessageDescriptor::RTPSenderStatusMessageDescriptor() : cClassDescriptor("RTPSenderStatusMessage", "cPacket")
{
}

RTPSenderStatusMessageDescriptor::~RTPSenderStatusMessageDescriptor()
{
}

bool RTPSenderStatusMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPSenderStatusMessage *>(obj)!=NULL;
}

const char *RTPSenderStatusMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPSenderStatusMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RTPSenderStatusMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *RTPSenderStatusMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "status";
        case 1: return "timeStamp";
        default: return NULL;
    }
}

const char *RTPSenderStatusMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "uint32";
        default: return NULL;
    }
}

const char *RTPSenderStatusMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPSenderStatusMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RTPSenderStatusMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getStatus(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getTimeStamp(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RTPSenderStatusMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus((value)); return true;
        case 1: pp->setTimeStamp(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RTPSenderStatusMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *RTPSenderStatusMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


