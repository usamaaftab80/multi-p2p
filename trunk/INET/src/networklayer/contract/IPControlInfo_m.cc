//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/contract/IPControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPControlInfo_m.h"

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




IPControlInfo_Base::IPControlInfo_Base() : cObject()
{
    this->interfaceId_var = -1;
    this->protocol_var = 0;
    this->diffServCodePoint_var = 0;
    this->timeToLive_var = 0;
    this->dontFragment_var = 0;
    this->minBW_var = 0;
}

IPControlInfo_Base::IPControlInfo_Base(const IPControlInfo_Base& other) : cObject()
{
    operator=(other);
}

IPControlInfo_Base::~IPControlInfo_Base()
{
}

IPControlInfo_Base& IPControlInfo_Base::operator=(const IPControlInfo_Base& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->destAddr_var = other.destAddr_var;
    this->srcAddr_var = other.srcAddr_var;
    this->interfaceId_var = other.interfaceId_var;
    this->protocol_var = other.protocol_var;
    this->diffServCodePoint_var = other.diffServCodePoint_var;
    this->timeToLive_var = other.timeToLive_var;
    this->dontFragment_var = other.dontFragment_var;
    this->minBW_var = other.minBW_var;
    return *this;
}

void IPControlInfo_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->protocol_var);
    doPacking(b,this->diffServCodePoint_var);
    doPacking(b,this->timeToLive_var);
    doPacking(b,this->dontFragment_var);
    doPacking(b,this->minBW_var);
}

void IPControlInfo_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->protocol_var);
    doUnpacking(b,this->diffServCodePoint_var);
    doUnpacking(b,this->timeToLive_var);
    doUnpacking(b,this->dontFragment_var);
    doUnpacking(b,this->minBW_var);
}

IPAddress& IPControlInfo_Base::getDestAddr()
{
    return destAddr_var;
}

void IPControlInfo_Base::setDestAddr(const IPAddress& destAddr_var)
{
    this->destAddr_var = destAddr_var;
}

IPAddress& IPControlInfo_Base::getSrcAddr()
{
    return srcAddr_var;
}

void IPControlInfo_Base::setSrcAddr(const IPAddress& srcAddr_var)
{
    this->srcAddr_var = srcAddr_var;
}

int IPControlInfo_Base::getInterfaceId() const
{
    return interfaceId_var;
}

void IPControlInfo_Base::setInterfaceId(int interfaceId_var)
{
    this->interfaceId_var = interfaceId_var;
}

short IPControlInfo_Base::getProtocol() const
{
    return protocol_var;
}

void IPControlInfo_Base::setProtocol(short protocol_var)
{
    this->protocol_var = protocol_var;
}

unsigned char IPControlInfo_Base::getDiffServCodePoint() const
{
    return diffServCodePoint_var;
}

void IPControlInfo_Base::setDiffServCodePoint(unsigned char diffServCodePoint_var)
{
    this->diffServCodePoint_var = diffServCodePoint_var;
}

short IPControlInfo_Base::getTimeToLive() const
{
    return timeToLive_var;
}

void IPControlInfo_Base::setTimeToLive(short timeToLive_var)
{
    this->timeToLive_var = timeToLive_var;
}

bool IPControlInfo_Base::getDontFragment() const
{
    return dontFragment_var;
}

void IPControlInfo_Base::setDontFragment(bool dontFragment_var)
{
    this->dontFragment_var = dontFragment_var;
}

double IPControlInfo_Base::getMinBW() const
{
    return minBW_var;
}

void IPControlInfo_Base::setMinBW(double minBW_var)
{
    this->minBW_var = minBW_var;
}

class IPControlInfoDescriptor : public cClassDescriptor
{
  public:
    IPControlInfoDescriptor();
    virtual ~IPControlInfoDescriptor();

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

Register_ClassDescriptor(IPControlInfoDescriptor);

IPControlInfoDescriptor::IPControlInfoDescriptor() : cClassDescriptor("IPControlInfo", "cObject")
{
}

IPControlInfoDescriptor::~IPControlInfoDescriptor()
{
}

bool IPControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPControlInfo_Base *>(obj)!=NULL;
}

const char *IPControlInfoDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int IPControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *IPControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destAddr";
        case 1: return "srcAddr";
        case 2: return "interfaceId";
        case 3: return "protocol";
        case 4: return "diffServCodePoint";
        case 5: return "timeToLive";
        case 6: return "dontFragment";
        case 7: return "minBW";
        default: return NULL;
    }
}

const char *IPControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "IPAddress";
        case 2: return "int";
        case 3: return "short";
        case 4: return "unsigned char";
        case 5: return "short";
        case 6: return "bool";
        case 7: return "double";
        default: return NULL;
    }
}

const char *IPControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int IPControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPControlInfo_Base *pp = (IPControlInfo_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool IPControlInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPControlInfo_Base *pp = (IPControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getSrcAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getInterfaceId(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getProtocol(),resultbuf,bufsize); return true;
        case 4: ulong2string(pp->getDiffServCodePoint(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getTimeToLive(),resultbuf,bufsize); return true;
        case 6: bool2string(pp->getDontFragment(),resultbuf,bufsize); return true;
        case 7: double2string(pp->getMinBW(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool IPControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPControlInfo_Base *pp = (IPControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setInterfaceId(string2long(value)); return true;
        case 3: pp->setProtocol(string2long(value)); return true;
        case 4: pp->setDiffServCodePoint(string2ulong(value)); return true;
        case 5: pp->setTimeToLive(string2long(value)); return true;
        case 6: pp->setDontFragment(string2bool(value)); return true;
        case 7: pp->setMinBW(string2double(value)); return true;
        default: return false;
    }
}

const char *IPControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        case 1: return "IPAddress"; break;
        default: return NULL;
    }
}

void *IPControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPControlInfo_Base *pp = (IPControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        case 1: return (void *)(&pp->getSrcAddr()); break;
        default: return NULL;
    }
}

Register_Class(IPRoutingDecision);

IPRoutingDecision::IPRoutingDecision() : cObject()
{
    this->interfaceId_var = -1;
}

IPRoutingDecision::IPRoutingDecision(const IPRoutingDecision& other) : cObject()
{
    operator=(other);
}

IPRoutingDecision::~IPRoutingDecision()
{
}

IPRoutingDecision& IPRoutingDecision::operator=(const IPRoutingDecision& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->interfaceId_var = other.interfaceId_var;
    this->nextHopAddr_var = other.nextHopAddr_var;
    return *this;
}

void IPRoutingDecision::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->nextHopAddr_var);
}

void IPRoutingDecision::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->nextHopAddr_var);
}

int IPRoutingDecision::getInterfaceId() const
{
    return interfaceId_var;
}

void IPRoutingDecision::setInterfaceId(int interfaceId_var)
{
    this->interfaceId_var = interfaceId_var;
}

IPAddress& IPRoutingDecision::getNextHopAddr()
{
    return nextHopAddr_var;
}

void IPRoutingDecision::setNextHopAddr(const IPAddress& nextHopAddr_var)
{
    this->nextHopAddr_var = nextHopAddr_var;
}

class IPRoutingDecisionDescriptor : public cClassDescriptor
{
  public:
    IPRoutingDecisionDescriptor();
    virtual ~IPRoutingDecisionDescriptor();

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

Register_ClassDescriptor(IPRoutingDecisionDescriptor);

IPRoutingDecisionDescriptor::IPRoutingDecisionDescriptor() : cClassDescriptor("IPRoutingDecision", "cObject")
{
}

IPRoutingDecisionDescriptor::~IPRoutingDecisionDescriptor()
{
}

bool IPRoutingDecisionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPRoutingDecision *>(obj)!=NULL;
}

const char *IPRoutingDecisionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPRoutingDecisionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int IPRoutingDecisionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *IPRoutingDecisionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "interfaceId";
        case 1: return "nextHopAddr";
        default: return NULL;
    }
}

const char *IPRoutingDecisionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "IPAddress";
        default: return NULL;
    }
}

const char *IPRoutingDecisionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPRoutingDecisionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPRoutingDecision *pp = (IPRoutingDecision *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool IPRoutingDecisionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPRoutingDecision *pp = (IPRoutingDecision *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getInterfaceId(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getNextHopAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool IPRoutingDecisionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPRoutingDecision *pp = (IPRoutingDecision *)object; (void)pp;
    switch (field) {
        case 0: pp->setInterfaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *IPRoutingDecisionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "IPAddress"; break;
        default: return NULL;
    }
}

void *IPRoutingDecisionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPRoutingDecision *pp = (IPRoutingDecision *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getNextHopAddr()); break;
        default: return NULL;
    }
}


