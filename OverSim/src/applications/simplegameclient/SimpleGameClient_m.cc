//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/simplegameclient/SimpleGameClient.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SimpleGameClient_m.h"

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




Register_Class(SCSnowTimer);

SCSnowTimer::SCSnowTimer(const char *name, int kind) : cMessage(name,kind)
{
    this->ip_var = 0;
}

SCSnowTimer::SCSnowTimer(const SCSnowTimer& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

SCSnowTimer::~SCSnowTimer()
{
}

SCSnowTimer& SCSnowTimer::operator=(const SCSnowTimer& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    this->position_var = other.position_var;
    this->ip_var = other.ip_var;
    return *this;
}

void SCSnowTimer::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->position_var);
    doPacking(b,this->ip_var);
}

void SCSnowTimer::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->position_var);
    doUnpacking(b,this->ip_var);
}

Vector2D& SCSnowTimer::getPosition()
{
    return position_var;
}

void SCSnowTimer::setPosition(const Vector2D& position_var)
{
    this->position_var = position_var;
}

unsigned int SCSnowTimer::getIp() const
{
    return ip_var;
}

void SCSnowTimer::setIp(unsigned int ip_var)
{
    this->ip_var = ip_var;
}

class SCSnowTimerDescriptor : public cClassDescriptor
{
  public:
    SCSnowTimerDescriptor();
    virtual ~SCSnowTimerDescriptor();

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

Register_ClassDescriptor(SCSnowTimerDescriptor);

SCSnowTimerDescriptor::SCSnowTimerDescriptor() : cClassDescriptor("SCSnowTimer", "cMessage")
{
}

SCSnowTimerDescriptor::~SCSnowTimerDescriptor()
{
}

bool SCSnowTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCSnowTimer *>(obj)!=NULL;
}

const char *SCSnowTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCSnowTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCSnowTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *SCSnowTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "position";
        case 1: return "ip";
        default: return NULL;
    }
}

const char *SCSnowTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Vector2D";
        case 1: return "unsigned int";
        default: return NULL;
    }
}

const char *SCSnowTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCSnowTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCSnowTimer *pp = (SCSnowTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCSnowTimerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCSnowTimer *pp = (SCSnowTimer *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPosition(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getIp(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCSnowTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCSnowTimer *pp = (SCSnowTimer *)object; (void)pp;
    switch (field) {
        case 1: pp->setIp(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCSnowTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Vector2D"; break;
        default: return NULL;
    }
}

void *SCSnowTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCSnowTimer *pp = (SCSnowTimer *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}


