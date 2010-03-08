//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/rsvp_te/SignallingMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SignallingMsg_m.h"

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




Register_Class(SignallingMsg);

SignallingMsg::SignallingMsg(const char *name, int kind) : cMessage(name,kind)
{
    this->command_var = 0;
}

SignallingMsg::SignallingMsg(const SignallingMsg& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

SignallingMsg::~SignallingMsg()
{
}

SignallingMsg& SignallingMsg::operator=(const SignallingMsg& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    this->command_var = other.command_var;
    return *this;
}

void SignallingMsg::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->command_var);
}

void SignallingMsg::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
}

int SignallingMsg::getCommand() const
{
    return command_var;
}

void SignallingMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class SignallingMsgDescriptor : public cClassDescriptor
{
  public:
    SignallingMsgDescriptor();
    virtual ~SignallingMsgDescriptor();

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

Register_ClassDescriptor(SignallingMsgDescriptor);

SignallingMsgDescriptor::SignallingMsgDescriptor() : cClassDescriptor("SignallingMsg", "cMessage")
{
}

SignallingMsgDescriptor::~SignallingMsgDescriptor()
{
}

bool SignallingMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SignallingMsg *>(obj)!=NULL;
}

const char *SignallingMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SignallingMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SignallingMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SignallingMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "command";
        default: return NULL;
    }
}

const char *SignallingMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SignallingMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SignallingMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SignallingMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SignallingMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *SignallingMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *SignallingMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PsbTimerMsg);

PsbTimerMsg::PsbTimerMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_PSB_TIMER;
}

PsbTimerMsg::PsbTimerMsg(const PsbTimerMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

PsbTimerMsg::~PsbTimerMsg()
{
}

PsbTimerMsg& PsbTimerMsg::operator=(const PsbTimerMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->id_var = other.id_var;
    this->command_var = other.command_var;
    return *this;
}

void PsbTimerMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void PsbTimerMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int PsbTimerMsg::getId() const
{
    return id_var;
}

void PsbTimerMsg::setId(int id_var)
{
    this->id_var = id_var;
}

int PsbTimerMsg::getCommand() const
{
    return command_var;
}

void PsbTimerMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class PsbTimerMsgDescriptor : public cClassDescriptor
{
  public:
    PsbTimerMsgDescriptor();
    virtual ~PsbTimerMsgDescriptor();

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

Register_ClassDescriptor(PsbTimerMsgDescriptor);

PsbTimerMsgDescriptor::PsbTimerMsgDescriptor() : cClassDescriptor("PsbTimerMsg", "SignallingMsg")
{
}

PsbTimerMsgDescriptor::~PsbTimerMsgDescriptor()
{
}

bool PsbTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PsbTimerMsg *>(obj)!=NULL;
}

const char *PsbTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PsbTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PsbTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PsbTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "command";
        default: return NULL;
    }
}

const char *PsbTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PsbTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PsbTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PsbTimerMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PsbTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *PsbTimerMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *PsbTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PsbTimeoutMsg);

PsbTimeoutMsg::PsbTimeoutMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_PSB_TIMEOUT;
}

PsbTimeoutMsg::PsbTimeoutMsg(const PsbTimeoutMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

PsbTimeoutMsg::~PsbTimeoutMsg()
{
}

PsbTimeoutMsg& PsbTimeoutMsg::operator=(const PsbTimeoutMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->id_var = other.id_var;
    this->command_var = other.command_var;
    return *this;
}

void PsbTimeoutMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void PsbTimeoutMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int PsbTimeoutMsg::getId() const
{
    return id_var;
}

void PsbTimeoutMsg::setId(int id_var)
{
    this->id_var = id_var;
}

int PsbTimeoutMsg::getCommand() const
{
    return command_var;
}

void PsbTimeoutMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class PsbTimeoutMsgDescriptor : public cClassDescriptor
{
  public:
    PsbTimeoutMsgDescriptor();
    virtual ~PsbTimeoutMsgDescriptor();

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

Register_ClassDescriptor(PsbTimeoutMsgDescriptor);

PsbTimeoutMsgDescriptor::PsbTimeoutMsgDescriptor() : cClassDescriptor("PsbTimeoutMsg", "SignallingMsg")
{
}

PsbTimeoutMsgDescriptor::~PsbTimeoutMsgDescriptor()
{
}

bool PsbTimeoutMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PsbTimeoutMsg *>(obj)!=NULL;
}

const char *PsbTimeoutMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PsbTimeoutMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PsbTimeoutMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PsbTimeoutMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "command";
        default: return NULL;
    }
}

const char *PsbTimeoutMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PsbTimeoutMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PsbTimeoutMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PsbTimeoutMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PsbTimeoutMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *PsbTimeoutMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *PsbTimeoutMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RsbRefreshTimerMsg);

RsbRefreshTimerMsg::RsbRefreshTimerMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_RSB_REFRESH_TIMER;
}

RsbRefreshTimerMsg::RsbRefreshTimerMsg(const RsbRefreshTimerMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

RsbRefreshTimerMsg::~RsbRefreshTimerMsg()
{
}

RsbRefreshTimerMsg& RsbRefreshTimerMsg::operator=(const RsbRefreshTimerMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->id_var = other.id_var;
    this->command_var = other.command_var;
    return *this;
}

void RsbRefreshTimerMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void RsbRefreshTimerMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int RsbRefreshTimerMsg::getId() const
{
    return id_var;
}

void RsbRefreshTimerMsg::setId(int id_var)
{
    this->id_var = id_var;
}

int RsbRefreshTimerMsg::getCommand() const
{
    return command_var;
}

void RsbRefreshTimerMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class RsbRefreshTimerMsgDescriptor : public cClassDescriptor
{
  public:
    RsbRefreshTimerMsgDescriptor();
    virtual ~RsbRefreshTimerMsgDescriptor();

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

Register_ClassDescriptor(RsbRefreshTimerMsgDescriptor);

RsbRefreshTimerMsgDescriptor::RsbRefreshTimerMsgDescriptor() : cClassDescriptor("RsbRefreshTimerMsg", "SignallingMsg")
{
}

RsbRefreshTimerMsgDescriptor::~RsbRefreshTimerMsgDescriptor()
{
}

bool RsbRefreshTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RsbRefreshTimerMsg *>(obj)!=NULL;
}

const char *RsbRefreshTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RsbRefreshTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RsbRefreshTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RsbRefreshTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "command";
        default: return NULL;
    }
}

const char *RsbRefreshTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RsbRefreshTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RsbRefreshTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RsbRefreshTimerMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RsbRefreshTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *RsbRefreshTimerMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RsbRefreshTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RsbCommitTimerMsg);

RsbCommitTimerMsg::RsbCommitTimerMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_RSB_COMMIT_TIMER;
}

RsbCommitTimerMsg::RsbCommitTimerMsg(const RsbCommitTimerMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

RsbCommitTimerMsg::~RsbCommitTimerMsg()
{
}

RsbCommitTimerMsg& RsbCommitTimerMsg::operator=(const RsbCommitTimerMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->id_var = other.id_var;
    this->command_var = other.command_var;
    return *this;
}

void RsbCommitTimerMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void RsbCommitTimerMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int RsbCommitTimerMsg::getId() const
{
    return id_var;
}

void RsbCommitTimerMsg::setId(int id_var)
{
    this->id_var = id_var;
}

int RsbCommitTimerMsg::getCommand() const
{
    return command_var;
}

void RsbCommitTimerMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class RsbCommitTimerMsgDescriptor : public cClassDescriptor
{
  public:
    RsbCommitTimerMsgDescriptor();
    virtual ~RsbCommitTimerMsgDescriptor();

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

Register_ClassDescriptor(RsbCommitTimerMsgDescriptor);

RsbCommitTimerMsgDescriptor::RsbCommitTimerMsgDescriptor() : cClassDescriptor("RsbCommitTimerMsg", "SignallingMsg")
{
}

RsbCommitTimerMsgDescriptor::~RsbCommitTimerMsgDescriptor()
{
}

bool RsbCommitTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RsbCommitTimerMsg *>(obj)!=NULL;
}

const char *RsbCommitTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RsbCommitTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RsbCommitTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RsbCommitTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "command";
        default: return NULL;
    }
}

const char *RsbCommitTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RsbCommitTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RsbCommitTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RsbCommitTimerMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RsbCommitTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *RsbCommitTimerMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RsbCommitTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RsbTimeoutMsg);

RsbTimeoutMsg::RsbTimeoutMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_RSB_TIMEOUT;
}

RsbTimeoutMsg::RsbTimeoutMsg(const RsbTimeoutMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

RsbTimeoutMsg::~RsbTimeoutMsg()
{
}

RsbTimeoutMsg& RsbTimeoutMsg::operator=(const RsbTimeoutMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->id_var = other.id_var;
    this->command_var = other.command_var;
    return *this;
}

void RsbTimeoutMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void RsbTimeoutMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int RsbTimeoutMsg::getId() const
{
    return id_var;
}

void RsbTimeoutMsg::setId(int id_var)
{
    this->id_var = id_var;
}

int RsbTimeoutMsg::getCommand() const
{
    return command_var;
}

void RsbTimeoutMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class RsbTimeoutMsgDescriptor : public cClassDescriptor
{
  public:
    RsbTimeoutMsgDescriptor();
    virtual ~RsbTimeoutMsgDescriptor();

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

Register_ClassDescriptor(RsbTimeoutMsgDescriptor);

RsbTimeoutMsgDescriptor::RsbTimeoutMsgDescriptor() : cClassDescriptor("RsbTimeoutMsg", "SignallingMsg")
{
}

RsbTimeoutMsgDescriptor::~RsbTimeoutMsgDescriptor()
{
}

bool RsbTimeoutMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RsbTimeoutMsg *>(obj)!=NULL;
}

const char *RsbTimeoutMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RsbTimeoutMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RsbTimeoutMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RsbTimeoutMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "command";
        default: return NULL;
    }
}

const char *RsbTimeoutMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RsbTimeoutMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RsbTimeoutMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RsbTimeoutMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RsbTimeoutMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *RsbTimeoutMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RsbTimeoutMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HelloTimerMsg);

HelloTimerMsg::HelloTimerMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->command_var = MSG_HELLO_TIMER;
}

HelloTimerMsg::HelloTimerMsg(const HelloTimerMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

HelloTimerMsg::~HelloTimerMsg()
{
}

HelloTimerMsg& HelloTimerMsg::operator=(const HelloTimerMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->peer_var = other.peer_var;
    this->command_var = other.command_var;
    return *this;
}

void HelloTimerMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->peer_var);
    doPacking(b,this->command_var);
}

void HelloTimerMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->peer_var);
    doUnpacking(b,this->command_var);
}

IPAddress& HelloTimerMsg::getPeer()
{
    return peer_var;
}

void HelloTimerMsg::setPeer(const IPAddress& peer_var)
{
    this->peer_var = peer_var;
}

int HelloTimerMsg::getCommand() const
{
    return command_var;
}

void HelloTimerMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class HelloTimerMsgDescriptor : public cClassDescriptor
{
  public:
    HelloTimerMsgDescriptor();
    virtual ~HelloTimerMsgDescriptor();

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

Register_ClassDescriptor(HelloTimerMsgDescriptor);

HelloTimerMsgDescriptor::HelloTimerMsgDescriptor() : cClassDescriptor("HelloTimerMsg", "SignallingMsg")
{
}

HelloTimerMsgDescriptor::~HelloTimerMsgDescriptor()
{
}

bool HelloTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HelloTimerMsg *>(obj)!=NULL;
}

const char *HelloTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HelloTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HelloTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HelloTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "peer";
        case 1: return "command";
        default: return NULL;
    }
}

const char *HelloTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "int";
        default: return NULL;
    }
}

const char *HelloTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HelloTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool HelloTimerMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPeer(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool HelloTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *HelloTimerMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        default: return NULL;
    }
}

void *HelloTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPeer()); break;
        default: return NULL;
    }
}

Register_Class(HelloTimeoutMsg);

HelloTimeoutMsg::HelloTimeoutMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->command_var = MSG_HELLO_TIMEOUT;
}

HelloTimeoutMsg::HelloTimeoutMsg(const HelloTimeoutMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

HelloTimeoutMsg::~HelloTimeoutMsg()
{
}

HelloTimeoutMsg& HelloTimeoutMsg::operator=(const HelloTimeoutMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->peer_var = other.peer_var;
    this->command_var = other.command_var;
    return *this;
}

void HelloTimeoutMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->peer_var);
    doPacking(b,this->command_var);
}

void HelloTimeoutMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->peer_var);
    doUnpacking(b,this->command_var);
}

IPAddress& HelloTimeoutMsg::getPeer()
{
    return peer_var;
}

void HelloTimeoutMsg::setPeer(const IPAddress& peer_var)
{
    this->peer_var = peer_var;
}

int HelloTimeoutMsg::getCommand() const
{
    return command_var;
}

void HelloTimeoutMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class HelloTimeoutMsgDescriptor : public cClassDescriptor
{
  public:
    HelloTimeoutMsgDescriptor();
    virtual ~HelloTimeoutMsgDescriptor();

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

Register_ClassDescriptor(HelloTimeoutMsgDescriptor);

HelloTimeoutMsgDescriptor::HelloTimeoutMsgDescriptor() : cClassDescriptor("HelloTimeoutMsg", "SignallingMsg")
{
}

HelloTimeoutMsgDescriptor::~HelloTimeoutMsgDescriptor()
{
}

bool HelloTimeoutMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HelloTimeoutMsg *>(obj)!=NULL;
}

const char *HelloTimeoutMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HelloTimeoutMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HelloTimeoutMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HelloTimeoutMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "peer";
        case 1: return "command";
        default: return NULL;
    }
}

const char *HelloTimeoutMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "int";
        default: return NULL;
    }
}

const char *HelloTimeoutMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HelloTimeoutMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool HelloTimeoutMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPeer(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool HelloTimeoutMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *HelloTimeoutMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        default: return NULL;
    }
}

void *HelloTimeoutMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPeer()); break;
        default: return NULL;
    }
}

Register_Class(PathNotifyMsg);

PathNotifyMsg::PathNotifyMsg(const char *name, int kind) : SignallingMsg(name,kind)
{
    this->status_var = 0;
    this->command_var = MSG_PATH_NOTIFY;
}

PathNotifyMsg::PathNotifyMsg(const PathNotifyMsg& other) : SignallingMsg()
{
    setName(other.getName());
    operator=(other);
}

PathNotifyMsg::~PathNotifyMsg()
{
}

PathNotifyMsg& PathNotifyMsg::operator=(const PathNotifyMsg& other)
{
    if (this==&other) return *this;
    SignallingMsg::operator=(other);
    this->session_var = other.session_var;
    this->sender_var = other.sender_var;
    this->status_var = other.status_var;
    this->command_var = other.command_var;
    return *this;
}

void PathNotifyMsg::parsimPack(cCommBuffer *b)
{
    SignallingMsg::parsimPack(b);
    doPacking(b,this->session_var);
    doPacking(b,this->sender_var);
    doPacking(b,this->status_var);
    doPacking(b,this->command_var);
}

void PathNotifyMsg::parsimUnpack(cCommBuffer *b)
{
    SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->session_var);
    doUnpacking(b,this->sender_var);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->command_var);
}

SessionObj_t& PathNotifyMsg::getSession()
{
    return session_var;
}

void PathNotifyMsg::setSession(const SessionObj_t& session_var)
{
    this->session_var = session_var;
}

SenderTemplateObj_t& PathNotifyMsg::getSender()
{
    return sender_var;
}

void PathNotifyMsg::setSender(const SenderTemplateObj_t& sender_var)
{
    this->sender_var = sender_var;
}

int PathNotifyMsg::getStatus() const
{
    return status_var;
}

void PathNotifyMsg::setStatus(int status_var)
{
    this->status_var = status_var;
}

int PathNotifyMsg::getCommand() const
{
    return command_var;
}

void PathNotifyMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class PathNotifyMsgDescriptor : public cClassDescriptor
{
  public:
    PathNotifyMsgDescriptor();
    virtual ~PathNotifyMsgDescriptor();

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

Register_ClassDescriptor(PathNotifyMsgDescriptor);

PathNotifyMsgDescriptor::PathNotifyMsgDescriptor() : cClassDescriptor("PathNotifyMsg", "SignallingMsg")
{
}

PathNotifyMsgDescriptor::~PathNotifyMsgDescriptor()
{
}

bool PathNotifyMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PathNotifyMsg *>(obj)!=NULL;
}

const char *PathNotifyMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PathNotifyMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PathNotifyMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PathNotifyMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "session";
        case 1: return "sender";
        case 2: return "status";
        case 3: return "command";
        default: return NULL;
    }
}

const char *PathNotifyMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SessionObj_t";
        case 1: return "SenderTemplateObj_t";
        case 2: return "int";
        case 3: return "int";
        default: return NULL;
    }
}

const char *PathNotifyMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PathNotifyMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PathNotifyMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSession(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getSender(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getStatus(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PathNotifyMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        case 2: pp->setStatus(string2long(value)); return true;
        case 3: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *PathNotifyMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SessionObj_t"; break;
        case 1: return "SenderTemplateObj_t"; break;
        default: return NULL;
    }
}

void *PathNotifyMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSession()); break;
        case 1: return (void *)(&pp->getSender()); break;
        default: return NULL;
    }
}


