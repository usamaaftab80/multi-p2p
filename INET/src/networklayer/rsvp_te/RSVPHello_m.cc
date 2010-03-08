//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/rsvp_te/RSVPHello.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RSVPHello_m.h"

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




RSVPHelloMsg_Base::RSVPHelloMsg_Base(const char *name, int kind) : RSVPMessage(name,kind)
{
    this->request_var = 0;
    this->ack_var = 0;
    this->srcInstance_var = 0;
    this->dstInstance_var = 0;
    this->rsvpKind_var = HELLO_MESSAGE;
}

RSVPHelloMsg_Base::RSVPHelloMsg_Base(const RSVPHelloMsg_Base& other) : RSVPMessage()
{
    setName(other.getName());
    operator=(other);
}

RSVPHelloMsg_Base::~RSVPHelloMsg_Base()
{
}

RSVPHelloMsg_Base& RSVPHelloMsg_Base::operator=(const RSVPHelloMsg_Base& other)
{
    if (this==&other) return *this;
    RSVPMessage::operator=(other);
    this->request_var = other.request_var;
    this->ack_var = other.ack_var;
    this->srcInstance_var = other.srcInstance_var;
    this->dstInstance_var = other.dstInstance_var;
    this->rsvpKind_var = other.rsvpKind_var;
    return *this;
}

void RSVPHelloMsg_Base::parsimPack(cCommBuffer *b)
{
    RSVPMessage::parsimPack(b);
    doPacking(b,this->request_var);
    doPacking(b,this->ack_var);
    doPacking(b,this->srcInstance_var);
    doPacking(b,this->dstInstance_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPHelloMsg_Base::parsimUnpack(cCommBuffer *b)
{
    RSVPMessage::parsimUnpack(b);
    doUnpacking(b,this->request_var);
    doUnpacking(b,this->ack_var);
    doUnpacking(b,this->srcInstance_var);
    doUnpacking(b,this->dstInstance_var);
    doUnpacking(b,this->rsvpKind_var);
}

bool RSVPHelloMsg_Base::getRequest() const
{
    return request_var;
}

void RSVPHelloMsg_Base::setRequest(bool request_var)
{
    this->request_var = request_var;
}

bool RSVPHelloMsg_Base::getAck() const
{
    return ack_var;
}

void RSVPHelloMsg_Base::setAck(bool ack_var)
{
    this->ack_var = ack_var;
}

int RSVPHelloMsg_Base::getSrcInstance() const
{
    return srcInstance_var;
}

void RSVPHelloMsg_Base::setSrcInstance(int srcInstance_var)
{
    this->srcInstance_var = srcInstance_var;
}

int RSVPHelloMsg_Base::getDstInstance() const
{
    return dstInstance_var;
}

void RSVPHelloMsg_Base::setDstInstance(int dstInstance_var)
{
    this->dstInstance_var = dstInstance_var;
}

int RSVPHelloMsg_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPHelloMsg_Base::setRsvpKind(int rsvpKind_var)
{
    this->rsvpKind_var = rsvpKind_var;
}

class RSVPHelloMsgDescriptor : public cClassDescriptor
{
  public:
    RSVPHelloMsgDescriptor();
    virtual ~RSVPHelloMsgDescriptor();

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

Register_ClassDescriptor(RSVPHelloMsgDescriptor);

RSVPHelloMsgDescriptor::RSVPHelloMsgDescriptor() : cClassDescriptor("RSVPHelloMsg", "RSVPMessage")
{
}

RSVPHelloMsgDescriptor::~RSVPHelloMsgDescriptor()
{
}

bool RSVPHelloMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPHelloMsg_Base *>(obj)!=NULL;
}

const char *RSVPHelloMsgDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPHelloMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int RSVPHelloMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *RSVPHelloMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "request";
        case 1: return "ack";
        case 2: return "srcInstance";
        case 3: return "dstInstance";
        case 4: return "rsvpKind";
        default: return NULL;
    }
}

const char *RSVPHelloMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "bool";
        case 2: return "int";
        case 3: return "int";
        case 4: return "int";
        default: return NULL;
    }
}

const char *RSVPHelloMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPHelloMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RSVPHelloMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getRequest(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->getAck(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getSrcInstance(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getDstInstance(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getRsvpKind(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RSVPHelloMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequest(string2bool(value)); return true;
        case 1: pp->setAck(string2bool(value)); return true;
        case 2: pp->setSrcInstance(string2long(value)); return true;
        case 3: pp->setDstInstance(string2long(value)); return true;
        case 4: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPHelloMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RSVPHelloMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


