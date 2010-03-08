//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/realworldtestapp/RealWorldTestMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RealWorldTestMessage_m.h"

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




Register_Class(RealWorldTestMessage);

RealWorldTestMessage::RealWorldTestMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->msg_var = 0;
}

RealWorldTestMessage::RealWorldTestMessage(const RealWorldTestMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

RealWorldTestMessage::~RealWorldTestMessage()
{
}

RealWorldTestMessage& RealWorldTestMessage::operator=(const RealWorldTestMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->msg_var = other.msg_var;
    return *this;
}

void RealWorldTestMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->msg_var);
}

void RealWorldTestMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->msg_var);
}

const char * RealWorldTestMessage::getMsg() const
{
    return msg_var.c_str();
}

void RealWorldTestMessage::setMsg(const char * msg_var)
{
    this->msg_var = msg_var;
}

class RealWorldTestMessageDescriptor : public cClassDescriptor
{
  public:
    RealWorldTestMessageDescriptor();
    virtual ~RealWorldTestMessageDescriptor();

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

Register_ClassDescriptor(RealWorldTestMessageDescriptor);

RealWorldTestMessageDescriptor::RealWorldTestMessageDescriptor() : cClassDescriptor("RealWorldTestMessage", "cPacket")
{
}

RealWorldTestMessageDescriptor::~RealWorldTestMessageDescriptor()
{
}

bool RealWorldTestMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RealWorldTestMessage *>(obj)!=NULL;
}

const char *RealWorldTestMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RealWorldTestMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RealWorldTestMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *RealWorldTestMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "msg";
        default: return NULL;
    }
}

const char *RealWorldTestMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        default: return NULL;
    }
}

const char *RealWorldTestMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RealWorldTestMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RealWorldTestMessage *pp = (RealWorldTestMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RealWorldTestMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RealWorldTestMessage *pp = (RealWorldTestMessage *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getMsg(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RealWorldTestMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RealWorldTestMessage *pp = (RealWorldTestMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setMsg((value)); return true;
        default: return false;
    }
}

const char *RealWorldTestMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *RealWorldTestMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RealWorldTestMessage *pp = (RealWorldTestMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


