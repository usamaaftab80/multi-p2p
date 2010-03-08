//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/udpapp/UDPEchoAppMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UDPEchoAppMsg_m.h"

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




Register_Class(UDPEchoAppMsg);

UDPEchoAppMsg::UDPEchoAppMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->isRequest_var = true;
}

UDPEchoAppMsg::UDPEchoAppMsg(const UDPEchoAppMsg& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

UDPEchoAppMsg::~UDPEchoAppMsg()
{
}

UDPEchoAppMsg& UDPEchoAppMsg::operator=(const UDPEchoAppMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->isRequest_var = other.isRequest_var;
    return *this;
}

void UDPEchoAppMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->isRequest_var);
}

void UDPEchoAppMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->isRequest_var);
}

bool UDPEchoAppMsg::getIsRequest() const
{
    return isRequest_var;
}

void UDPEchoAppMsg::setIsRequest(bool isRequest_var)
{
    this->isRequest_var = isRequest_var;
}

class UDPEchoAppMsgDescriptor : public cClassDescriptor
{
  public:
    UDPEchoAppMsgDescriptor();
    virtual ~UDPEchoAppMsgDescriptor();

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

Register_ClassDescriptor(UDPEchoAppMsgDescriptor);

UDPEchoAppMsgDescriptor::UDPEchoAppMsgDescriptor() : cClassDescriptor("UDPEchoAppMsg", "cPacket")
{
}

UDPEchoAppMsgDescriptor::~UDPEchoAppMsgDescriptor()
{
}

bool UDPEchoAppMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPEchoAppMsg *>(obj)!=NULL;
}

const char *UDPEchoAppMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPEchoAppMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPEchoAppMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPEchoAppMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isRequest";
        default: return NULL;
    }
}

const char *UDPEchoAppMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        default: return NULL;
    }
}

const char *UDPEchoAppMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPEchoAppMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPEchoAppMsg *pp = (UDPEchoAppMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool UDPEchoAppMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    UDPEchoAppMsg *pp = (UDPEchoAppMsg *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getIsRequest(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool UDPEchoAppMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPEchoAppMsg *pp = (UDPEchoAppMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setIsRequest(string2bool(value)); return true;
        default: return false;
    }
}

const char *UDPEchoAppMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPEchoAppMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPEchoAppMsg *pp = (UDPEchoAppMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


