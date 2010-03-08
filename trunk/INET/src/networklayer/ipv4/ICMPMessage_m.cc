//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ipv4/ICMPMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ICMPMessage_m.h"

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




EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("ICMPType");
    if (!e) enums.getInstance()->add(e = new cEnum("ICMPType"));
    e->insert(ICMP_DESTINATION_UNREACHABLE, "ICMP_DESTINATION_UNREACHABLE");
    e->insert(ICMP_REDIRECT, "ICMP_REDIRECT");
    e->insert(ICMP_TIME_EXCEEDED, "ICMP_TIME_EXCEEDED");
    e->insert(ICMP_PARAMETER_PROBLEM, "ICMP_PARAMETER_PROBLEM");
    e->insert(ICMP_ECHO_REQUEST, "ICMP_ECHO_REQUEST");
    e->insert(ICMP_ECHO_REPLY, "ICMP_ECHO_REPLY");
    e->insert(ICMP_TIMESTAMP_REQUEST, "ICMP_TIMESTAMP_REQUEST");
    e->insert(ICMP_TIMESTAMP_REPLY, "ICMP_TIMESTAMP_REPLY");
);

Register_Class(ICMPMessage);

ICMPMessage::ICMPMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = 0;
    this->code_var = 0;
}

ICMPMessage::ICMPMessage(const ICMPMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

ICMPMessage::~ICMPMessage()
{
}

ICMPMessage& ICMPMessage::operator=(const ICMPMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->type_var = other.type_var;
    this->code_var = other.code_var;
    return *this;
}

void ICMPMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->code_var);
}

void ICMPMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->code_var);
}

int ICMPMessage::getType() const
{
    return type_var;
}

void ICMPMessage::setType(int type_var)
{
    this->type_var = type_var;
}

int ICMPMessage::getCode() const
{
    return code_var;
}

void ICMPMessage::setCode(int code_var)
{
    this->code_var = code_var;
}

class ICMPMessageDescriptor : public cClassDescriptor
{
  public:
    ICMPMessageDescriptor();
    virtual ~ICMPMessageDescriptor();

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

Register_ClassDescriptor(ICMPMessageDescriptor);

ICMPMessageDescriptor::ICMPMessageDescriptor() : cClassDescriptor("ICMPMessage", "cPacket")
{
}

ICMPMessageDescriptor::~ICMPMessageDescriptor()
{
}

bool ICMPMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPMessage *>(obj)!=NULL;
}

const char *ICMPMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ICMPMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ICMPMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "type";
        case 1: return "code";
        default: return NULL;
    }
}

const char *ICMPMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "int";
        default: return NULL;
    }
}

const char *ICMPMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "ICMPType";
            return NULL;
        default: return NULL;
    }
}

int ICMPMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ICMPMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getType(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getCode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool ICMPMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


