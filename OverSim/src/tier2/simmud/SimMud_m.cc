//
// Generated file, do not edit! Created by opp_msgc 4.0 from tier2/simmud/SimMud.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SimMud_m.h"

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




Register_Class(SimMudMoveMessage);

SimMudMoveMessage::SimMudMoveMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->posX_var = 0;
    this->posY_var = 0;
    this->timestamp_var = 0;
    this->leaveRegion_var = false;
}

SimMudMoveMessage::SimMudMoveMessage(const SimMudMoveMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

SimMudMoveMessage::~SimMudMoveMessage()
{
}

SimMudMoveMessage& SimMudMoveMessage::operator=(const SimMudMoveMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->src_var = other.src_var;
    this->posX_var = other.posX_var;
    this->posY_var = other.posY_var;
    this->timestamp_var = other.timestamp_var;
    this->leaveRegion_var = other.leaveRegion_var;
    return *this;
}

void SimMudMoveMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->posX_var);
    doPacking(b,this->posY_var);
    doPacking(b,this->timestamp_var);
    doPacking(b,this->leaveRegion_var);
}

void SimMudMoveMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->posX_var);
    doUnpacking(b,this->posY_var);
    doUnpacking(b,this->timestamp_var);
    doUnpacking(b,this->leaveRegion_var);
}

NodeHandle& SimMudMoveMessage::getSrc()
{
    return src_var;
}

void SimMudMoveMessage::setSrc(const NodeHandle& src_var)
{
    this->src_var = src_var;
}

double SimMudMoveMessage::getPosX() const
{
    return posX_var;
}

void SimMudMoveMessage::setPosX(double posX_var)
{
    this->posX_var = posX_var;
}

double SimMudMoveMessage::getPosY() const
{
    return posY_var;
}

void SimMudMoveMessage::setPosY(double posY_var)
{
    this->posY_var = posY_var;
}

simtime_t SimMudMoveMessage::getTimestamp() const
{
    return timestamp_var;
}

void SimMudMoveMessage::setTimestamp(simtime_t timestamp_var)
{
    this->timestamp_var = timestamp_var;
}

bool SimMudMoveMessage::getLeaveRegion() const
{
    return leaveRegion_var;
}

void SimMudMoveMessage::setLeaveRegion(bool leaveRegion_var)
{
    this->leaveRegion_var = leaveRegion_var;
}

class SimMudMoveMessageDescriptor : public cClassDescriptor
{
  public:
    SimMudMoveMessageDescriptor();
    virtual ~SimMudMoveMessageDescriptor();

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

Register_ClassDescriptor(SimMudMoveMessageDescriptor);

SimMudMoveMessageDescriptor::SimMudMoveMessageDescriptor() : cClassDescriptor("SimMudMoveMessage", "cPacket")
{
}

SimMudMoveMessageDescriptor::~SimMudMoveMessageDescriptor()
{
}

bool SimMudMoveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SimMudMoveMessage *>(obj)!=NULL;
}

const char *SimMudMoveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SimMudMoveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SimMudMoveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *SimMudMoveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "src";
        case 1: return "posX";
        case 2: return "posY";
        case 3: return "timestamp";
        case 4: return "leaveRegion";
        default: return NULL;
    }
}

const char *SimMudMoveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle";
        case 1: return "double";
        case 2: return "double";
        case 3: return "simtime_t";
        case 4: return "bool";
        default: return NULL;
    }
}

const char *SimMudMoveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SimMudMoveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SimMudMoveMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: double2string(pp->getPosX(),resultbuf,bufsize); return true;
        case 2: double2string(pp->getPosY(),resultbuf,bufsize); return true;
        case 3: double2string(pp->getTimestamp(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->getLeaveRegion(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SimMudMoveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setPosX(string2double(value)); return true;
        case 2: pp->setPosY(string2double(value)); return true;
        case 3: pp->setTimestamp(string2double(value)); return true;
        case 4: pp->setLeaveRegion(string2bool(value)); return true;
        default: return false;
    }
}

const char *SimMudMoveMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *SimMudMoveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}


