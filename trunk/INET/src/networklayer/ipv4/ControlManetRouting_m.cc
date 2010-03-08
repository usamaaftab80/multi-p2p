//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ipv4/ControlManetRouting.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ControlManetRouting_m.h"

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
    cEnum *e = cEnum::find("ManetControlType");
    if (!e) enums.getInstance()->add(e = new cEnum("ManetControlType"));
    e->insert(MANET_ROUTE_NO_OPTION, "MANET_ROUTE_NO_OPTION");
    e->insert(MANET_ROUTE_UPDATE, "MANET_ROUTE_UPDATE");
    e->insert(MANET_ROUTE_NOROUTE, "MANET_ROUTE_NOROUTE");
);

Register_Class(ControlManetRouting);

ControlManetRouting::ControlManetRouting(const char *name, int kind) : cPacket(name,kind)
{
    this->optionCode_var = MANET_ROUTE_NO_OPTION;
}

ControlManetRouting::ControlManetRouting(const ControlManetRouting& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

ControlManetRouting::~ControlManetRouting()
{
}

ControlManetRouting& ControlManetRouting::operator=(const ControlManetRouting& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->optionCode_var = other.optionCode_var;
    return *this;
}

void ControlManetRouting::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->optionCode_var);
}

void ControlManetRouting::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->optionCode_var);
}

IPAddress& ControlManetRouting::getSrcAddress()
{
    return srcAddress_var;
}

void ControlManetRouting::setSrcAddress(const IPAddress& srcAddress_var)
{
    this->srcAddress_var = srcAddress_var;
}

IPAddress& ControlManetRouting::getDestAddress()
{
    return destAddress_var;
}

void ControlManetRouting::setDestAddress(const IPAddress& destAddress_var)
{
    this->destAddress_var = destAddress_var;
}

int ControlManetRouting::getOptionCode() const
{
    return optionCode_var;
}

void ControlManetRouting::setOptionCode(int optionCode_var)
{
    this->optionCode_var = optionCode_var;
}

class ControlManetRoutingDescriptor : public cClassDescriptor
{
  public:
    ControlManetRoutingDescriptor();
    virtual ~ControlManetRoutingDescriptor();

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

Register_ClassDescriptor(ControlManetRoutingDescriptor);

ControlManetRoutingDescriptor::ControlManetRoutingDescriptor() : cClassDescriptor("ControlManetRouting", "cPacket")
{
}

ControlManetRoutingDescriptor::~ControlManetRoutingDescriptor()
{
}

bool ControlManetRoutingDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ControlManetRouting *>(obj)!=NULL;
}

const char *ControlManetRoutingDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ControlManetRoutingDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int ControlManetRoutingDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *ControlManetRoutingDescriptor::getFieldName(void *object, int field) const
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
        case 2: return "optionCode";
        default: return NULL;
    }
}

const char *ControlManetRoutingDescriptor::getFieldTypeString(void *object, int field) const
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
        default: return NULL;
    }
}

const char *ControlManetRoutingDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "ManetControlType";
            return NULL;
        default: return NULL;
    }
}

int ControlManetRoutingDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ControlManetRoutingDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getDestAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getOptionCode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool ControlManetRoutingDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        case 2: pp->setOptionCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ControlManetRoutingDescriptor::getFieldStructName(void *object, int field) const
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

void *ControlManetRoutingDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddress()); break;
        case 1: return (void *)(&pp->getDestAddress()); break;
        default: return NULL;
    }
}


