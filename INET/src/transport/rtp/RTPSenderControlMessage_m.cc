//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/rtp/RTPSenderControlMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPSenderControlMessage_m.h"

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




Register_Class(RTPSenderControlMessage);

RTPSenderControlMessage::RTPSenderControlMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->command_var = 0;
    this->commandParameter1_var = 0;
    this->commandParameter2_var = 0;
}

RTPSenderControlMessage::RTPSenderControlMessage(const RTPSenderControlMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

RTPSenderControlMessage::~RTPSenderControlMessage()
{
}

RTPSenderControlMessage& RTPSenderControlMessage::operator=(const RTPSenderControlMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->command_var = other.command_var;
    this->commandParameter1_var = other.commandParameter1_var;
    this->commandParameter2_var = other.commandParameter2_var;
    return *this;
}

void RTPSenderControlMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->commandParameter1_var);
    doPacking(b,this->commandParameter2_var);
}

void RTPSenderControlMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->commandParameter1_var);
    doUnpacking(b,this->commandParameter2_var);
}

const char * RTPSenderControlMessage::getCommand() const
{
    return command_var.c_str();
}

void RTPSenderControlMessage::setCommand(const char * command_var)
{
    this->command_var = command_var;
}

float RTPSenderControlMessage::getCommandParameter1() const
{
    return commandParameter1_var;
}

void RTPSenderControlMessage::setCommandParameter1(float commandParameter1_var)
{
    this->commandParameter1_var = commandParameter1_var;
}

float RTPSenderControlMessage::getCommandParameter2() const
{
    return commandParameter2_var;
}

void RTPSenderControlMessage::setCommandParameter2(float commandParameter2_var)
{
    this->commandParameter2_var = commandParameter2_var;
}

class RTPSenderControlMessageDescriptor : public cClassDescriptor
{
  public:
    RTPSenderControlMessageDescriptor();
    virtual ~RTPSenderControlMessageDescriptor();

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

Register_ClassDescriptor(RTPSenderControlMessageDescriptor);

RTPSenderControlMessageDescriptor::RTPSenderControlMessageDescriptor() : cClassDescriptor("RTPSenderControlMessage", "cPacket")
{
}

RTPSenderControlMessageDescriptor::~RTPSenderControlMessageDescriptor()
{
}

bool RTPSenderControlMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPSenderControlMessage *>(obj)!=NULL;
}

const char *RTPSenderControlMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPSenderControlMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RTPSenderControlMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *RTPSenderControlMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "command";
        case 1: return "commandParameter1";
        case 2: return "commandParameter2";
        default: return NULL;
    }
}

const char *RTPSenderControlMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "float";
        case 2: return "float";
        default: return NULL;
    }
}

const char *RTPSenderControlMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPSenderControlMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RTPSenderControlMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getCommand(),resultbuf,bufsize); return true;
        case 1: double2string(pp->getCommandParameter1(),resultbuf,bufsize); return true;
        case 2: double2string(pp->getCommandParameter2(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RTPSenderControlMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand((value)); return true;
        case 1: pp->setCommandParameter1(string2double(value)); return true;
        case 2: pp->setCommandParameter2(string2double(value)); return true;
        default: return false;
    }
}

const char *RTPSenderControlMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPSenderControlMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


