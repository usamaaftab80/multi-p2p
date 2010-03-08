//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/i3/i3Apps/I3SessionMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "I3SessionMessage_m.h"

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
    cEnum *e = cEnum::find("SessionMsgType");
    if (!e) enums.getInstance()->add(e = new cEnum("SessionMsgType"));
    e->insert(PAYLOAD, "PAYLOAD");
    e->insert(CHANGE_SESSION, "CHANGE_SESSION");
    e->insert(TRIGGER_CONFIRMATION, "TRIGGER_CONFIRMATION");
);

Register_Class(SessionMsg);

SessionMsg::SessionMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = 0;
    this->value_var = 0;
}

SessionMsg::SessionMsg(const SessionMsg& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

SessionMsg::~SessionMsg()
{
}

SessionMsg& SessionMsg::operator=(const SessionMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->type_var = other.type_var;
    this->value_var = other.value_var;
    this->source_var = other.source_var;
    return *this;
}

void SessionMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->value_var);
    doPacking(b,this->source_var);
}

void SessionMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->value_var);
    doUnpacking(b,this->source_var);
}

int SessionMsg::getType() const
{
    return type_var;
}

void SessionMsg::setType(int type_var)
{
    this->type_var = type_var;
}

double SessionMsg::getValue() const
{
    return value_var;
}

void SessionMsg::setValue(double value_var)
{
    this->value_var = value_var;
}

I3Identifier& SessionMsg::getSource()
{
    return source_var;
}

void SessionMsg::setSource(const I3Identifier& source_var)
{
    this->source_var = source_var;
}

class SessionMsgDescriptor : public cClassDescriptor
{
  public:
    SessionMsgDescriptor();
    virtual ~SessionMsgDescriptor();

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

Register_ClassDescriptor(SessionMsgDescriptor);

SessionMsgDescriptor::SessionMsgDescriptor() : cClassDescriptor("SessionMsg", "cPacket")
{
}

SessionMsgDescriptor::~SessionMsgDescriptor()
{
}

bool SessionMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SessionMsg *>(obj)!=NULL;
}

const char *SessionMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SessionMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SessionMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *SessionMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "type";
        case 1: return "value";
        case 2: return "source";
        default: return NULL;
    }
}

const char *SessionMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "double";
        case 2: return "I3Identifier";
        default: return NULL;
    }
}

const char *SessionMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "SessionMsgType";
            return NULL;
        default: return NULL;
    }
}

int SessionMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SessionMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getType(),resultbuf,bufsize); return true;
        case 1: double2string(pp->getValue(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getSource(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool SessionMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setValue(string2double(value)); return true;
        default: return false;
    }
}

const char *SessionMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "I3Identifier"; break;
        default: return NULL;
    }
}

void *SessionMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSource()); break;
        default: return NULL;
    }
}


