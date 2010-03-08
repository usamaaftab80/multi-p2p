//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/i3/i3Apps/I3TriggersMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "I3TriggersMessage_m.h"

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




Register_Class(TriggersHandshakeMsg);

TriggersHandshakeMsg::TriggersHandshakeMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->value_var = 0;
}

TriggersHandshakeMsg::TriggersHandshakeMsg(const TriggersHandshakeMsg& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

TriggersHandshakeMsg::~TriggersHandshakeMsg()
{
}

TriggersHandshakeMsg& TriggersHandshakeMsg::operator=(const TriggersHandshakeMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->value_var = other.value_var;
    this->triggerId_var = other.triggerId_var;
    return *this;
}

void TriggersHandshakeMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->value_var);
    doPacking(b,this->triggerId_var);
}

void TriggersHandshakeMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->value_var);
    doUnpacking(b,this->triggerId_var);
}

int TriggersHandshakeMsg::getValue() const
{
    return value_var;
}

void TriggersHandshakeMsg::setValue(int value_var)
{
    this->value_var = value_var;
}

I3Identifier& TriggersHandshakeMsg::getTriggerId()
{
    return triggerId_var;
}

void TriggersHandshakeMsg::setTriggerId(const I3Identifier& triggerId_var)
{
    this->triggerId_var = triggerId_var;
}

class TriggersHandshakeMsgDescriptor : public cClassDescriptor
{
  public:
    TriggersHandshakeMsgDescriptor();
    virtual ~TriggersHandshakeMsgDescriptor();

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

Register_ClassDescriptor(TriggersHandshakeMsgDescriptor);

TriggersHandshakeMsgDescriptor::TriggersHandshakeMsgDescriptor() : cClassDescriptor("TriggersHandshakeMsg", "cPacket")
{
}

TriggersHandshakeMsgDescriptor::~TriggersHandshakeMsgDescriptor()
{
}

bool TriggersHandshakeMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TriggersHandshakeMsg *>(obj)!=NULL;
}

const char *TriggersHandshakeMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TriggersHandshakeMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TriggersHandshakeMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TriggersHandshakeMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "value";
        case 1: return "triggerId";
        default: return NULL;
    }
}

const char *TriggersHandshakeMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "I3Identifier";
        default: return NULL;
    }
}

const char *TriggersHandshakeMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TriggersHandshakeMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TriggersHandshakeMsg *pp = (TriggersHandshakeMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TriggersHandshakeMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TriggersHandshakeMsg *pp = (TriggersHandshakeMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getValue(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getTriggerId(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool TriggersHandshakeMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TriggersHandshakeMsg *pp = (TriggersHandshakeMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setValue(string2long(value)); return true;
        default: return false;
    }
}

const char *TriggersHandshakeMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "I3Identifier"; break;
        default: return NULL;
    }
}

void *TriggersHandshakeMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TriggersHandshakeMsg *pp = (TriggersHandshakeMsg *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getTriggerId()); break;
        default: return NULL;
    }
}

Register_Class(TriggersMsg);

TriggersMsg::TriggersMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->value_var = 0;
}

TriggersMsg::TriggersMsg(const TriggersMsg& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

TriggersMsg::~TriggersMsg()
{
}

TriggersMsg& TriggersMsg::operator=(const TriggersMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->value_var = other.value_var;
    return *this;
}

void TriggersMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->value_var);
}

void TriggersMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->value_var);
}

int TriggersMsg::getValue() const
{
    return value_var;
}

void TriggersMsg::setValue(int value_var)
{
    this->value_var = value_var;
}

class TriggersMsgDescriptor : public cClassDescriptor
{
  public:
    TriggersMsgDescriptor();
    virtual ~TriggersMsgDescriptor();

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

Register_ClassDescriptor(TriggersMsgDescriptor);

TriggersMsgDescriptor::TriggersMsgDescriptor() : cClassDescriptor("TriggersMsg", "cPacket")
{
}

TriggersMsgDescriptor::~TriggersMsgDescriptor()
{
}

bool TriggersMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TriggersMsg *>(obj)!=NULL;
}

const char *TriggersMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TriggersMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TriggersMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TriggersMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "value";
        default: return NULL;
    }
}

const char *TriggersMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *TriggersMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TriggersMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TriggersMsg *pp = (TriggersMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TriggersMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TriggersMsg *pp = (TriggersMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getValue(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TriggersMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TriggersMsg *pp = (TriggersMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setValue(string2long(value)); return true;
        default: return false;
    }
}

const char *TriggersMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *TriggersMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TriggersMsg *pp = (TriggersMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


