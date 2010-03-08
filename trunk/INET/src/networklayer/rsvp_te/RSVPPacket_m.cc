//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/rsvp_te/RSVPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RSVPPacket_m.h"

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




Register_Class(RSVPMessage);

RSVPMessage::RSVPMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->rsvpKind_var = 0;
}

RSVPMessage::RSVPMessage(const RSVPMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

RSVPMessage::~RSVPMessage()
{
}

RSVPMessage& RSVPMessage::operator=(const RSVPMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->rsvpKind_var = other.rsvpKind_var;
    return *this;
}

void RSVPMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->rsvpKind_var);
}

void RSVPMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->rsvpKind_var);
}

int RSVPMessage::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPMessage::setRsvpKind(int rsvpKind_var)
{
    this->rsvpKind_var = rsvpKind_var;
}

class RSVPMessageDescriptor : public cClassDescriptor
{
  public:
    RSVPMessageDescriptor();
    virtual ~RSVPMessageDescriptor();

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

Register_ClassDescriptor(RSVPMessageDescriptor);

RSVPMessageDescriptor::RSVPMessageDescriptor() : cClassDescriptor("RSVPMessage", "cPacket")
{
}

RSVPMessageDescriptor::~RSVPMessageDescriptor()
{
}

bool RSVPMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPMessage *>(obj)!=NULL;
}

const char *RSVPMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RSVPMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RSVPMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "rsvpKind";
        default: return NULL;
    }
}

const char *RSVPMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RSVPMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RSVPMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getRsvpKind(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RSVPMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *RSVPMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

RSVPPacket_Base::RSVPPacket_Base(const char *name, int kind) : RSVPMessage(name,kind)
{
    this->checksumValid_var = true;
}

RSVPPacket_Base::RSVPPacket_Base(const RSVPPacket_Base& other) : RSVPMessage()
{
    setName(other.getName());
    operator=(other);
}

RSVPPacket_Base::~RSVPPacket_Base()
{
}

RSVPPacket_Base& RSVPPacket_Base::operator=(const RSVPPacket_Base& other)
{
    if (this==&other) return *this;
    RSVPMessage::operator=(other);
    this->session_var = other.session_var;
    this->checksumValid_var = other.checksumValid_var;
    return *this;
}

void RSVPPacket_Base::parsimPack(cCommBuffer *b)
{
    RSVPMessage::parsimPack(b);
    doPacking(b,this->session_var);
    doPacking(b,this->checksumValid_var);
}

void RSVPPacket_Base::parsimUnpack(cCommBuffer *b)
{
    RSVPMessage::parsimUnpack(b);
    doUnpacking(b,this->session_var);
    doUnpacking(b,this->checksumValid_var);
}

SessionObj_t& RSVPPacket_Base::getSession()
{
    return session_var;
}

void RSVPPacket_Base::setSession(const SessionObj_t& session_var)
{
    this->session_var = session_var;
}

bool RSVPPacket_Base::getChecksumValid() const
{
    return checksumValid_var;
}

void RSVPPacket_Base::setChecksumValid(bool checksumValid_var)
{
    this->checksumValid_var = checksumValid_var;
}

class RSVPPacketDescriptor : public cClassDescriptor
{
  public:
    RSVPPacketDescriptor();
    virtual ~RSVPPacketDescriptor();

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

Register_ClassDescriptor(RSVPPacketDescriptor);

RSVPPacketDescriptor::RSVPPacketDescriptor() : cClassDescriptor("RSVPPacket", "RSVPMessage")
{
}

RSVPPacketDescriptor::~RSVPPacketDescriptor()
{
}

bool RSVPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPPacket_Base *>(obj)!=NULL;
}

const char *RSVPPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RSVPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RSVPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "session";
        case 1: return "checksumValid";
        default: return NULL;
    }
}

const char *RSVPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SessionObj_t";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *RSVPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RSVPPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSession(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->getChecksumValid(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RSVPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        case 1: pp->setChecksumValid(string2bool(value)); return true;
        default: return false;
    }
}

const char *RSVPPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SessionObj_t"; break;
        default: return NULL;
    }
}

void *RSVPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSession()); break;
        default: return NULL;
    }
}


