//
// Generated file, do not edit! Created by opp_msgc 4.1 from transport/contract/UDPControlInfo.msg.
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
    this->delayInfo_var = 0;
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
    this->delayInfo_var = other.delayInfo_var;
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
    doPacking(b,this->delayInfo_var);
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
    doUnpacking(b,this->delayInfo_var);
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

double UDPControlInfo::getDelayInfo() const
{
    return delayInfo_var;
}

void UDPControlInfo::setDelayInfo(double delayInfo_var)
{
    this->delayInfo_var = delayInfo_var;
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
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
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
    return basedesc ? 10+basedesc->getFieldCount(object) : 10;
}

unsigned int UDPControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<10) ? fieldTypeFlags[field] : 0;
}

const char *UDPControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sockId",
        "userId",
        "srcAddr",
        "destAddr",
        "srcPort",
        "destPort",
        "interfaceId",
        "timeToLive",
        "minBW",
        "delayInfo",
    };
    return (field>=0 && field<10) ? fieldNames[field] : NULL;
}

int UDPControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sockId")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "userId")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcPort")==0) return base+4;
    if (fieldName[0]=='d' && strcmp(fieldName, "destPort")==0) return base+5;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeToLive")==0) return base+7;
    if (fieldName[0]=='m' && strcmp(fieldName, "minBW")==0) return base+8;
    if (fieldName[0]=='d' && strcmp(fieldName, "delayInfo")==0) return base+9;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "IPvXAddress",
        "IPvXAddress",
        "int",
        "int",
        "int",
        "int",
        "double",
        "double",
    };
    return (field>=0 && field<10) ? fieldTypeStrings[field] : NULL;
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

std::string UDPControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSockId());
        case 1: return long2string(pp->getUserId());
        case 2: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 3: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 4: return long2string(pp->getSrcPort());
        case 5: return long2string(pp->getDestPort());
        case 6: return long2string(pp->getInterfaceId());
        case 7: return long2string(pp->getTimeToLive());
        case 8: return double2string(pp->getMinBW());
        case 9: return double2string(pp->getDelayInfo());
        default: return "";
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
        case 9: pp->setDelayInfo(string2double(value)); return true;
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
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
        "IPvXAddress",
        "IPvXAddress",
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<10) ? fieldStructNames[field] : NULL;
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


