//
// Generated file, do not edit! Created by opp_msgc 4.0 from common/Churn.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Churn_m.h"

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




Register_Class(ChurnMessage);

ChurnMessage::ChurnMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->createNode_var = 0;
    this->lifetime_var = 0;
}

ChurnMessage::ChurnMessage(const ChurnMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

ChurnMessage::~ChurnMessage()
{
}

ChurnMessage& ChurnMessage::operator=(const ChurnMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->createNode_var = other.createNode_var;
    this->lifetime_var = other.lifetime_var;
    this->addr_var = other.addr_var;
    return *this;
}

void ChurnMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->createNode_var);
    doPacking(b,this->lifetime_var);
    doPacking(b,this->addr_var);
}

void ChurnMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->createNode_var);
    doUnpacking(b,this->lifetime_var);
    doUnpacking(b,this->addr_var);
}

bool ChurnMessage::getCreateNode() const
{
    return createNode_var;
}

void ChurnMessage::setCreateNode(bool createNode_var)
{
    this->createNode_var = createNode_var;
}

double ChurnMessage::getLifetime() const
{
    return lifetime_var;
}

void ChurnMessage::setLifetime(double lifetime_var)
{
    this->lifetime_var = lifetime_var;
}

TransportAddress& ChurnMessage::getAddr()
{
    return addr_var;
}

void ChurnMessage::setAddr(const TransportAddress& addr_var)
{
    this->addr_var = addr_var;
}

class ChurnMessageDescriptor : public cClassDescriptor
{
  public:
    ChurnMessageDescriptor();
    virtual ~ChurnMessageDescriptor();

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

Register_ClassDescriptor(ChurnMessageDescriptor);

ChurnMessageDescriptor::ChurnMessageDescriptor() : cClassDescriptor("ChurnMessage", "cPacket")
{
}

ChurnMessageDescriptor::~ChurnMessageDescriptor()
{
}

bool ChurnMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ChurnMessage *>(obj)!=NULL;
}

const char *ChurnMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ChurnMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int ChurnMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ChurnMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "createNode";
        case 1: return "lifetime";
        case 2: return "addr";
        default: return NULL;
    }
}

const char *ChurnMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "double";
        case 2: return "TransportAddress";
        default: return NULL;
    }
}

const char *ChurnMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ChurnMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ChurnMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getCreateNode(),resultbuf,bufsize); return true;
        case 1: double2string(pp->getLifetime(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool ChurnMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCreateNode(string2bool(value)); return true;
        case 1: pp->setLifetime(string2double(value)); return true;
        default: return false;
    }
}

const char *ChurnMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *ChurnMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getAddr()); break;
        default: return NULL;
    }
}

Register_Class(ParetoChurnMessage);

ParetoChurnMessage::ParetoChurnMessage(const char *name, int kind) : ChurnMessage(name,kind)
{
    this->meanLifetime_var = 0;
    this->meanDeadtime_var = 0;
}

ParetoChurnMessage::ParetoChurnMessage(const ParetoChurnMessage& other) : ChurnMessage()
{
    setName(other.getName());
    operator=(other);
}

ParetoChurnMessage::~ParetoChurnMessage()
{
}

ParetoChurnMessage& ParetoChurnMessage::operator=(const ParetoChurnMessage& other)
{
    if (this==&other) return *this;
    ChurnMessage::operator=(other);
    this->meanLifetime_var = other.meanLifetime_var;
    this->meanDeadtime_var = other.meanDeadtime_var;
    return *this;
}

void ParetoChurnMessage::parsimPack(cCommBuffer *b)
{
    ChurnMessage::parsimPack(b);
    doPacking(b,this->meanLifetime_var);
    doPacking(b,this->meanDeadtime_var);
}

void ParetoChurnMessage::parsimUnpack(cCommBuffer *b)
{
    ChurnMessage::parsimUnpack(b);
    doUnpacking(b,this->meanLifetime_var);
    doUnpacking(b,this->meanDeadtime_var);
}

double ParetoChurnMessage::getMeanLifetime() const
{
    return meanLifetime_var;
}

void ParetoChurnMessage::setMeanLifetime(double meanLifetime_var)
{
    this->meanLifetime_var = meanLifetime_var;
}

double ParetoChurnMessage::getMeanDeadtime() const
{
    return meanDeadtime_var;
}

void ParetoChurnMessage::setMeanDeadtime(double meanDeadtime_var)
{
    this->meanDeadtime_var = meanDeadtime_var;
}

class ParetoChurnMessageDescriptor : public cClassDescriptor
{
  public:
    ParetoChurnMessageDescriptor();
    virtual ~ParetoChurnMessageDescriptor();

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

Register_ClassDescriptor(ParetoChurnMessageDescriptor);

ParetoChurnMessageDescriptor::ParetoChurnMessageDescriptor() : cClassDescriptor("ParetoChurnMessage", "ChurnMessage")
{
}

ParetoChurnMessageDescriptor::~ParetoChurnMessageDescriptor()
{
}

bool ParetoChurnMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ParetoChurnMessage *>(obj)!=NULL;
}

const char *ParetoChurnMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ParetoChurnMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ParetoChurnMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ParetoChurnMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "meanLifetime";
        case 1: return "meanDeadtime";
        default: return NULL;
    }
}

const char *ParetoChurnMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "double";
        case 1: return "double";
        default: return NULL;
    }
}

const char *ParetoChurnMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ParetoChurnMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ParetoChurnMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: double2string(pp->getMeanLifetime(),resultbuf,bufsize); return true;
        case 1: double2string(pp->getMeanDeadtime(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool ParetoChurnMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setMeanLifetime(string2double(value)); return true;
        case 1: pp->setMeanDeadtime(string2double(value)); return true;
        default: return false;
    }
}

const char *ParetoChurnMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ParetoChurnMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


