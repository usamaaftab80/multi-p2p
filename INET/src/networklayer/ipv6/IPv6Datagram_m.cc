//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ipv6/IPv6Datagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv6Datagram_m.h"

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




IPv6Datagram_Base::IPv6Datagram_Base(const char *name, int kind) : cPacket(name,kind)
{
    this->trafficClass_var = 0;
    this->flowLabel_var = 0;
    this->hopLimit_var = 0;
    this->transportProtocol_var = 0;
    extensionHeader_arraysize = 0;
    this->extensionHeader_var = 0;
}

IPv6Datagram_Base::IPv6Datagram_Base(const IPv6Datagram_Base& other) : cPacket()
{
    setName(other.getName());
    extensionHeader_arraysize = 0;
    this->extensionHeader_var = 0;
    operator=(other);
}

IPv6Datagram_Base::~IPv6Datagram_Base()
{
    delete [] extensionHeader_var;
}

IPv6Datagram_Base& IPv6Datagram_Base::operator=(const IPv6Datagram_Base& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->trafficClass_var = other.trafficClass_var;
    this->flowLabel_var = other.flowLabel_var;
    this->hopLimit_var = other.hopLimit_var;
    this->transportProtocol_var = other.transportProtocol_var;
    delete [] this->extensionHeader_var;
    this->extensionHeader_var = (other.extensionHeader_arraysize==0) ? NULL : new IPv6ExtensionHeaderPtr[other.extensionHeader_arraysize];
    extensionHeader_arraysize = other.extensionHeader_arraysize;
    for (unsigned int i=0; i<extensionHeader_arraysize; i++)
        this->extensionHeader_var[i] = other.extensionHeader_var[i];
    return *this;
}

void IPv6Datagram_Base::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->trafficClass_var);
    doPacking(b,this->flowLabel_var);
    doPacking(b,this->hopLimit_var);
    doPacking(b,this->transportProtocol_var);
    b->pack(extensionHeader_arraysize);
    doPacking(b,this->extensionHeader_var,extensionHeader_arraysize);
}

void IPv6Datagram_Base::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->trafficClass_var);
    doUnpacking(b,this->flowLabel_var);
    doUnpacking(b,this->hopLimit_var);
    doUnpacking(b,this->transportProtocol_var);
    delete [] this->extensionHeader_var;
    b->unpack(extensionHeader_arraysize);
    if (extensionHeader_arraysize==0) {
        this->extensionHeader_var = 0;
    } else {
        this->extensionHeader_var = new IPv6ExtensionHeaderPtr[extensionHeader_arraysize];
        doUnpacking(b,this->extensionHeader_var,extensionHeader_arraysize);
    }
}

IPv6Address& IPv6Datagram_Base::getSrcAddress()
{
    return srcAddress_var;
}

void IPv6Datagram_Base::setSrcAddress(const IPv6Address& srcAddress_var)
{
    this->srcAddress_var = srcAddress_var;
}

IPv6Address& IPv6Datagram_Base::getDestAddress()
{
    return destAddress_var;
}

void IPv6Datagram_Base::setDestAddress(const IPv6Address& destAddress_var)
{
    this->destAddress_var = destAddress_var;
}

unsigned int IPv6Datagram_Base::getTrafficClass() const
{
    return trafficClass_var;
}

void IPv6Datagram_Base::setTrafficClass(unsigned int trafficClass_var)
{
    this->trafficClass_var = trafficClass_var;
}

unsigned int IPv6Datagram_Base::getFlowLabel() const
{
    return flowLabel_var;
}

void IPv6Datagram_Base::setFlowLabel(unsigned int flowLabel_var)
{
    this->flowLabel_var = flowLabel_var;
}

short IPv6Datagram_Base::getHopLimit() const
{
    return hopLimit_var;
}

void IPv6Datagram_Base::setHopLimit(short hopLimit_var)
{
    this->hopLimit_var = hopLimit_var;
}

int IPv6Datagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void IPv6Datagram_Base::setTransportProtocol(int transportProtocol_var)
{
    this->transportProtocol_var = transportProtocol_var;
}

void IPv6Datagram_Base::setExtensionHeaderArraySize(unsigned int size)
{
    IPv6ExtensionHeaderPtr *extensionHeader_var2 = (size==0) ? NULL : new IPv6ExtensionHeaderPtr[size];
    unsigned int sz = extensionHeader_arraysize < size ? extensionHeader_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        extensionHeader_var2[i] = this->extensionHeader_var[i];
    extensionHeader_arraysize = size;
    delete [] this->extensionHeader_var;
    this->extensionHeader_var = extensionHeader_var2;
}

unsigned int IPv6Datagram_Base::getExtensionHeaderArraySize() const
{
    return extensionHeader_arraysize;
}

IPv6ExtensionHeaderPtr& IPv6Datagram_Base::getExtensionHeader(unsigned int k)
{
    if (k>=extensionHeader_arraysize) throw cRuntimeError("Array of size %d indexed by %d", extensionHeader_arraysize, k);
    return extensionHeader_var[k];
}

void IPv6Datagram_Base::setExtensionHeader(unsigned int k, const IPv6ExtensionHeaderPtr& extensionHeader_var)
{
    if (k>=extensionHeader_arraysize) throw cRuntimeError("Array of size %d indexed by %d", extensionHeader_arraysize, k);
    this->extensionHeader_var[k]=extensionHeader_var;
}

class IPv6DatagramDescriptor : public cClassDescriptor
{
  public:
    IPv6DatagramDescriptor();
    virtual ~IPv6DatagramDescriptor();

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

Register_ClassDescriptor(IPv6DatagramDescriptor);

IPv6DatagramDescriptor::IPv6DatagramDescriptor() : cClassDescriptor("IPv6Datagram", "cPacket")
{
}

IPv6DatagramDescriptor::~IPv6DatagramDescriptor()
{
}

bool IPv6DatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6Datagram_Base *>(obj)!=NULL;
}

const char *IPv6DatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6DatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int IPv6DatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 6: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *IPv6DatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "srcAddress";
        case 1: return "destAddress";
        case 2: return "trafficClass";
        case 3: return "flowLabel";
        case 4: return "hopLimit";
        case 5: return "transportProtocol";
        case 6: return "extensionHeader";
        default: return NULL;
    }
}

const char *IPv6DatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPv6Address";
        case 1: return "IPv6Address";
        case 2: return "unsigned int";
        case 3: return "unsigned int";
        case 4: return "short";
        case 5: return "int";
        case 6: return "IPv6ExtensionHeaderPtr";
        default: return NULL;
    }
}

const char *IPv6DatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int IPv6DatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 6: return pp->getExtensionHeaderArraySize();
        default: return 0;
    }
}

bool IPv6DatagramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getDestAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: ulong2string(pp->getTrafficClass(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getFlowLabel(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getHopLimit(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getTransportProtocol(),resultbuf,bufsize); return true;
        case 6: {std::stringstream out; out << pp->getExtensionHeader(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool IPv6DatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setTrafficClass(string2ulong(value)); return true;
        case 3: pp->setFlowLabel(string2ulong(value)); return true;
        case 4: pp->setHopLimit(string2long(value)); return true;
        case 5: pp->setTransportProtocol(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv6DatagramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPv6Address"; break;
        case 1: return "IPv6Address"; break;
        case 6: return "IPv6ExtensionHeaderPtr"; break;
        default: return NULL;
    }
}

void *IPv6DatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddress()); break;
        case 1: return (void *)(&pp->getDestAddress()); break;
        case 6: return (void *)(&pp->getExtensionHeader(i)); break;
        default: return NULL;
    }
}

IPv6ExtensionHeader_Base::IPv6ExtensionHeader_Base() : cObject()
{
}

IPv6ExtensionHeader_Base::IPv6ExtensionHeader_Base(const IPv6ExtensionHeader_Base& other) : cObject()
{
    operator=(other);
}

IPv6ExtensionHeader_Base::~IPv6ExtensionHeader_Base()
{
}

IPv6ExtensionHeader_Base& IPv6ExtensionHeader_Base::operator=(const IPv6ExtensionHeader_Base& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    return *this;
}

void IPv6ExtensionHeader_Base::parsimPack(cCommBuffer *b)
{
}

void IPv6ExtensionHeader_Base::parsimUnpack(cCommBuffer *b)
{
}

class IPv6ExtensionHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6ExtensionHeaderDescriptor();
    virtual ~IPv6ExtensionHeaderDescriptor();

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

Register_ClassDescriptor(IPv6ExtensionHeaderDescriptor);

IPv6ExtensionHeaderDescriptor::IPv6ExtensionHeaderDescriptor() : cClassDescriptor("IPv6ExtensionHeader", "cObject")
{
}

IPv6ExtensionHeaderDescriptor::~IPv6ExtensionHeaderDescriptor()
{
}

bool IPv6ExtensionHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6ExtensionHeader_Base *>(obj)!=NULL;
}

const char *IPv6ExtensionHeaderDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6ExtensionHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv6ExtensionHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *IPv6ExtensionHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *IPv6ExtensionHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *IPv6ExtensionHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6ExtensionHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool IPv6ExtensionHeaderDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool IPv6ExtensionHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6ExtensionHeaderDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv6ExtensionHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


