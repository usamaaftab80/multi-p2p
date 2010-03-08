//
// Generated file, do not edit! Created by opp_msgc 4.0 from common/GlobalTraceManager.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "GlobalTraceManager_m.h"

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




Register_Class(GlobalTraceManagerMessage);

GlobalTraceManagerMessage::GlobalTraceManagerMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->internalNodeId_var = 0;
    this->lineNumber_var = 0;
}

GlobalTraceManagerMessage::GlobalTraceManagerMessage(const GlobalTraceManagerMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

GlobalTraceManagerMessage::~GlobalTraceManagerMessage()
{
}

GlobalTraceManagerMessage& GlobalTraceManagerMessage::operator=(const GlobalTraceManagerMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->internalNodeId_var = other.internalNodeId_var;
    this->lineNumber_var = other.lineNumber_var;
    return *this;
}

void GlobalTraceManagerMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->internalNodeId_var);
    doPacking(b,this->lineNumber_var);
}

void GlobalTraceManagerMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->internalNodeId_var);
    doUnpacking(b,this->lineNumber_var);
}

int GlobalTraceManagerMessage::getInternalNodeId() const
{
    return internalNodeId_var;
}

void GlobalTraceManagerMessage::setInternalNodeId(int internalNodeId_var)
{
    this->internalNodeId_var = internalNodeId_var;
}

int GlobalTraceManagerMessage::getLineNumber() const
{
    return lineNumber_var;
}

void GlobalTraceManagerMessage::setLineNumber(int lineNumber_var)
{
    this->lineNumber_var = lineNumber_var;
}

class GlobalTraceManagerMessageDescriptor : public cClassDescriptor
{
  public:
    GlobalTraceManagerMessageDescriptor();
    virtual ~GlobalTraceManagerMessageDescriptor();

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

Register_ClassDescriptor(GlobalTraceManagerMessageDescriptor);

GlobalTraceManagerMessageDescriptor::GlobalTraceManagerMessageDescriptor() : cClassDescriptor("GlobalTraceManagerMessage", "cPacket")
{
}

GlobalTraceManagerMessageDescriptor::~GlobalTraceManagerMessageDescriptor()
{
}

bool GlobalTraceManagerMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GlobalTraceManagerMessage *>(obj)!=NULL;
}

const char *GlobalTraceManagerMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GlobalTraceManagerMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int GlobalTraceManagerMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GlobalTraceManagerMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "internalNodeId";
        case 1: return "lineNumber";
        default: return NULL;
    }
}

const char *GlobalTraceManagerMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *GlobalTraceManagerMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GlobalTraceManagerMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GlobalTraceManagerMessage *pp = (GlobalTraceManagerMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool GlobalTraceManagerMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GlobalTraceManagerMessage *pp = (GlobalTraceManagerMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getInternalNodeId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getLineNumber(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool GlobalTraceManagerMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GlobalTraceManagerMessage *pp = (GlobalTraceManagerMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setInternalNodeId(string2long(value)); return true;
        case 1: pp->setLineNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *GlobalTraceManagerMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *GlobalTraceManagerMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GlobalTraceManagerMessage *pp = (GlobalTraceManagerMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


