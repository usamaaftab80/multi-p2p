//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/arp/ARPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ARPPacket_m.h"

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
    cEnum *e = cEnum::find("ARPOpcode");
    if (!e) enums.getInstance()->add(e = new cEnum("ARPOpcode"));
    e->insert(ARP_REQUEST, "ARP_REQUEST");
    e->insert(ARP_REPLY, "ARP_REPLY");
    e->insert(ARP_RARP_REQUEST, "ARP_RARP_REQUEST");
    e->insert(ARP_RARP_REPLY, "ARP_RARP_REPLY");
);

Register_Class(ARPPacket);

ARPPacket::ARPPacket(const char *name, int kind) : cPacket(name,kind)
{
    this->opcode_var = 0;
}

ARPPacket::ARPPacket(const ARPPacket& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

ARPPacket::~ARPPacket()
{
}

ARPPacket& ARPPacket::operator=(const ARPPacket& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->opcode_var = other.opcode_var;
    this->srcMACAddress_var = other.srcMACAddress_var;
    this->destMACAddress_var = other.destMACAddress_var;
    this->srcIPAddress_var = other.srcIPAddress_var;
    this->destIPAddress_var = other.destIPAddress_var;
    return *this;
}

void ARPPacket::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->opcode_var);
    doPacking(b,this->srcMACAddress_var);
    doPacking(b,this->destMACAddress_var);
    doPacking(b,this->srcIPAddress_var);
    doPacking(b,this->destIPAddress_var);
}

void ARPPacket::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->opcode_var);
    doUnpacking(b,this->srcMACAddress_var);
    doUnpacking(b,this->destMACAddress_var);
    doUnpacking(b,this->srcIPAddress_var);
    doUnpacking(b,this->destIPAddress_var);
}

int ARPPacket::getOpcode() const
{
    return opcode_var;
}

void ARPPacket::setOpcode(int opcode_var)
{
    this->opcode_var = opcode_var;
}

MACAddress& ARPPacket::getSrcMACAddress()
{
    return srcMACAddress_var;
}

void ARPPacket::setSrcMACAddress(const MACAddress& srcMACAddress_var)
{
    this->srcMACAddress_var = srcMACAddress_var;
}

MACAddress& ARPPacket::getDestMACAddress()
{
    return destMACAddress_var;
}

void ARPPacket::setDestMACAddress(const MACAddress& destMACAddress_var)
{
    this->destMACAddress_var = destMACAddress_var;
}

IPAddress& ARPPacket::getSrcIPAddress()
{
    return srcIPAddress_var;
}

void ARPPacket::setSrcIPAddress(const IPAddress& srcIPAddress_var)
{
    this->srcIPAddress_var = srcIPAddress_var;
}

IPAddress& ARPPacket::getDestIPAddress()
{
    return destIPAddress_var;
}

void ARPPacket::setDestIPAddress(const IPAddress& destIPAddress_var)
{
    this->destIPAddress_var = destIPAddress_var;
}

class ARPPacketDescriptor : public cClassDescriptor
{
  public:
    ARPPacketDescriptor();
    virtual ~ARPPacketDescriptor();

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

Register_ClassDescriptor(ARPPacketDescriptor);

ARPPacketDescriptor::ARPPacketDescriptor() : cClassDescriptor("ARPPacket", "cPacket")
{
}

ARPPacketDescriptor::~ARPPacketDescriptor()
{
}

bool ARPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ARPPacket *>(obj)!=NULL;
}

const char *ARPPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ARPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int ARPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISCOMPOUND;
        case 4: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *ARPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "opcode";
        case 1: return "srcMACAddress";
        case 2: return "destMACAddress";
        case 3: return "srcIPAddress";
        case 4: return "destIPAddress";
        default: return NULL;
    }
}

const char *ARPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "MACAddress";
        case 2: return "MACAddress";
        case 3: return "IPAddress";
        case 4: return "IPAddress";
        default: return NULL;
    }
}

const char *ARPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "ARPOpcode";
            return NULL;
        default: return NULL;
    }
}

int ARPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ARPPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getOpcode(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSrcMACAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getDestMACAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: {std::stringstream out; out << pp->getSrcIPAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: {std::stringstream out; out << pp->getDestIPAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool ARPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setOpcode(string2long(value)); return true;
        default: return false;
    }
}

const char *ARPPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "MACAddress"; break;
        case 2: return "MACAddress"; break;
        case 3: return "IPAddress"; break;
        case 4: return "IPAddress"; break;
        default: return NULL;
    }
}

void *ARPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSrcMACAddress()); break;
        case 2: return (void *)(&pp->getDestMACAddress()); break;
        case 3: return (void *)(&pp->getSrcIPAddress()); break;
        case 4: return (void *)(&pp->getDestIPAddress()); break;
        default: return NULL;
    }
}


