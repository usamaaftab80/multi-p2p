//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/contract/UDPControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UDPControlInfo_m.h"

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
    cEnum *e = cEnum::find("UDPCommandCode");
    if (!e) enums.getInstance()->add(e = new cEnum("UDPCommandCode"));
    e->insert(UDP_C_DATA, "UDP_C_DATA");
    e->insert(UDP_C_BIND, "UDP_C_BIND");
    e->insert(UDP_C_CONNECT, "UDP_C_CONNECT");
    e->insert(UDP_C_UNBIND, "UDP_C_UNBIND");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("UDPStatusInd");
    if (!e) enums.getInstance()->add(e = new cEnum("UDPStatusInd"));
    e->insert(UDP_I_DATA, "UDP_I_DATA");
    e->insert(UDP_I_ERROR, "UDP_I_ERROR");
);

Register_Class(UDPControlInfo);

UDPControlInfo::UDPControlInfo() : cObject()
{
    this->sockId_var = -1;
    this->userId_var = -1;
    this->srcPort_var = 0;
    this->destPort_var = 0;
    this->interfaceId_var = -1;
    this->timeToLive_var = 0;
    this->minBW_var = 0;
}

UDPControlInfo::UDPControlInfo(const UDPControlInfo& other) : cObject()
{
    operator=(other);
}

UDPControlInfo::~UDPControlInfo()
{
}

UDPControlInfo& UDPControlInfo::operator=(const UDPControlInfo& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->sockId_var = other.sockId_var;
    this->userId_var = other.userId_var;
    this->srcAddr_var = other.srcAddr_var;
    this->destAddr_var = other.destAddr_var;
    this->srcPort_var = other.srcPort_var;
    this->destPort_var = other.destPort_var;
    this->interfaceId_var = other.interfaceId_var;
    this->timeToLive_var = other.timeToLive_var;
    this->minBW_var = other.minBW_var;
    return *this;
}

void UDPControlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->sockId_var);
    doPacking(b,this->userId_var);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcPort_var);
    doPacking(b,this->destPort_var);
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->timeToLive_var);
    doPacking(b,this->minBW_var);
}

void UDPControlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->sockId_var);
    doUnpacking(b,this->userId_var);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcPort_var);
    doUnpacking(b,this->destPort_var);
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->timeToLive_var);
    doUnpacking(b,this->minBW_var);
}

int UDPControlInfo::getSockId() const
{
    return sockId_var;
}

void UDPControlInfo::setSockId(int sockId_var)
{
    this->sockId_var = sockId_var;
}

int UDPControlInfo::getUserId() const
{
    return userId_var;
}

void UDPControlInfo::setUserId(int userId_var)
{
    this->userId_var = userId_var;
}

IPvXAddress& UDPControlInfo::getSrcAddr()
{
    return srcAddr_var;
}

void UDPControlInfo::setSrcAddr(const IPvXAddress& srcAddr_var)
{
    this->srcAddr_var = srcAddr_var;
}

IPvXAddress& UDPControlInfo::getDestAddr()
{
    return destAddr_var;
}

void UDPControlInfo::setDestAddr(const IPvXAddress& destAddr_var)
{
    this->destAddr_var = destAddr_var;
}

int UDPControlInfo::getSrcPort() const
{
    return srcPort_var;
}

void UDPControlInfo::setSrcPort(int srcPort_var)
{
    this->srcPort_var = srcPort_var;
}

int UDPControlInfo::getDestPort() const
{
    return destPort_var;
}

void UDPControlInfo::setDestPort(int destPort_var)
{
    this->destPort_var = destPort_var;
}

int UDPControlInfo::getInterfaceId() const
{
    return interfaceId_var;
}

void UDPControlInfo::setInterfaceId(int interfaceId_var)
{
    this->interfaceId_var = interfaceId_var;
}

int UDPControlInfo::getTimeToLive() const
{
    return timeToLive_var;
}

void UDPControlInfo::setTimeToLive(int timeToLive_var)
{
    this->timeToLive_var = timeToLive_var;
}

double UDPControlInfo::getMinBW() const
{
    return minBW_var;
}

void UDPControlInfo::setMinBW(double minBW_var)
{
    this->minBW_var = minBW_var;
}

class UDPControlInfoDescriptor : public cClassDescriptor
{
  public:
    UDPControlInfoDescriptor();
    virtual ~UDPControlInfoDescriptor();

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

Register_ClassDescriptor(UDPControlInfoDescriptor);

UDPControlInfoDescriptor::UDPControlInfoDescriptor() : cClassDescriptor("UDPControlInfo", "cObject")
{
}

UDPControlInfoDescriptor::~UDPControlInfoDescriptor()
{
}

bool UDPControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPControlInfo *>(obj)!=NULL;
}

const char *UDPControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int UDPControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISCOMPOUND;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *UDPControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "sockId";
        case 1: return "userId";
        case 2: return "srcAddr";
        case 3: return "destAddr";
        case 4: return "srcPort";
        case 5: return "destPort";
        case 6: return "interfaceId";
        case 7: return "timeToLive";
        case 8: return "minBW";
        default: return NULL;
    }
}

const char *UDPControlInfoDescriptor::getFieldTypeString(void *object, int field) const
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
        case 2: return "IPvXAddress";
        case 3: return "IPvXAddress";
        case 4: return "int";
        case 5: return "int";
        case 6: return "int";
        case 7: return "int";
        case 8: return "double";
        default: return NULL;
    }
}

const char *UDPControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool UDPControlInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getSockId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getUserId(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getSrcAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: {std::stringstream out; out << pp->getDestAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getSrcPort(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getDestPort(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getInterfaceId(),resultbuf,bufsize); return true;
        case 7: long2string(pp->getTimeToLive(),resultbuf,bufsize); return true;
        case 8: double2string(pp->getMinBW(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool UDPControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setSockId(string2long(value)); return true;
        case 1: pp->setUserId(string2long(value)); return true;
        case 4: pp->setSrcPort(string2long(value)); return true;
        case 5: pp->setDestPort(string2long(value)); return true;
        case 6: pp->setInterfaceId(string2long(value)); return true;
        case 7: pp->setTimeToLive(string2long(value)); return true;
        case 8: pp->setMinBW(string2double(value)); return true;
        default: return false;
    }
}

const char *UDPControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "IPvXAddress"; break;
        case 3: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *UDPControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSrcAddr()); break;
        case 3: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}


