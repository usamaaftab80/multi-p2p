//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/dht/DHTMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DHTMessage_m.h"

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




Register_Class(DHTPutCall);

DHTPutCall::DHTPutCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->kind_var = 0;
    this->id_var = 0;
    this->ttl_var = 0;
    this->isModifiable_var = 0;
    this->maintenance_var = 0;
}

DHTPutCall::DHTPutCall(const DHTPutCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTPutCall::~DHTPutCall()
{
}

DHTPutCall& DHTPutCall::operator=(const DHTPutCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->key_var = other.key_var;
    this->value_var = other.value_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    this->ttl_var = other.ttl_var;
    this->isModifiable_var = other.isModifiable_var;
    this->maintenance_var = other.maintenance_var;
    this->ownerNode_var = other.ownerNode_var;
    return *this;
}

void DHTPutCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->value_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
    doPacking(b,this->ttl_var);
    doPacking(b,this->isModifiable_var);
    doPacking(b,this->maintenance_var);
    doPacking(b,this->ownerNode_var);
}

void DHTPutCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->value_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->ttl_var);
    doUnpacking(b,this->isModifiable_var);
    doUnpacking(b,this->maintenance_var);
    doUnpacking(b,this->ownerNode_var);
}

OverlayKey& DHTPutCall::getKey()
{
    return key_var;
}

void DHTPutCall::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

BinaryValue& DHTPutCall::getValue()
{
    return value_var;
}

void DHTPutCall::setValue(const BinaryValue& value_var)
{
    this->value_var = value_var;
}

uint32_t DHTPutCall::getKind() const
{
    return kind_var;
}

void DHTPutCall::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t DHTPutCall::getId() const
{
    return id_var;
}

void DHTPutCall::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

int DHTPutCall::getTtl() const
{
    return ttl_var;
}

void DHTPutCall::setTtl(int ttl_var)
{
    this->ttl_var = ttl_var;
}

bool DHTPutCall::getIsModifiable() const
{
    return isModifiable_var;
}

void DHTPutCall::setIsModifiable(bool isModifiable_var)
{
    this->isModifiable_var = isModifiable_var;
}

bool DHTPutCall::getMaintenance() const
{
    return maintenance_var;
}

void DHTPutCall::setMaintenance(bool maintenance_var)
{
    this->maintenance_var = maintenance_var;
}

NodeHandle& DHTPutCall::getOwnerNode()
{
    return ownerNode_var;
}

void DHTPutCall::setOwnerNode(const NodeHandle& ownerNode_var)
{
    this->ownerNode_var = ownerNode_var;
}

class DHTPutCallDescriptor : public cClassDescriptor
{
  public:
    DHTPutCallDescriptor();
    virtual ~DHTPutCallDescriptor();

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

Register_ClassDescriptor(DHTPutCallDescriptor);

DHTPutCallDescriptor::DHTPutCallDescriptor() : cClassDescriptor("DHTPutCall", "BaseCallMessage")
{
}

DHTPutCallDescriptor::~DHTPutCallDescriptor()
{
}

bool DHTPutCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTPutCall *>(obj)!=NULL;
}

const char *DHTPutCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTPutCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int DHTPutCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 7: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *DHTPutCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "value";
        case 2: return "kind";
        case 3: return "id";
        case 4: return "ttl";
        case 5: return "isModifiable";
        case 6: return "maintenance";
        case 7: return "ownerNode";
        default: return NULL;
    }
}

const char *DHTPutCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "BinaryValue";
        case 2: return "uint32_t";
        case 3: return "uint32_t";
        case 4: return "int";
        case 5: return "bool";
        case 6: return "bool";
        case 7: return "NodeHandle";
        default: return NULL;
    }
}

const char *DHTPutCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTPutCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutCall *pp = (DHTPutCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTPutCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutCall *pp = (DHTPutCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getValue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getTtl(),resultbuf,bufsize); return true;
        case 5: bool2string(pp->getIsModifiable(),resultbuf,bufsize); return true;
        case 6: bool2string(pp->getMaintenance(),resultbuf,bufsize); return true;
        case 7: {std::stringstream out; out << pp->getOwnerNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool DHTPutCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutCall *pp = (DHTPutCall *)object; (void)pp;
    switch (field) {
        case 2: pp->setKind(string2ulong(value)); return true;
        case 3: pp->setId(string2ulong(value)); return true;
        case 4: pp->setTtl(string2long(value)); return true;
        case 5: pp->setIsModifiable(string2bool(value)); return true;
        case 6: pp->setMaintenance(string2bool(value)); return true;
        default: return false;
    }
}

const char *DHTPutCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 1: return "BinaryValue"; break;
        case 7: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *DHTPutCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutCall *pp = (DHTPutCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        case 1: return (void *)(&pp->getValue()); break;
        case 7: return (void *)(&pp->getOwnerNode()); break;
        default: return NULL;
    }
}

Register_Class(DHTGetCall);

DHTGetCall::DHTGetCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->kind_var = 0;
    this->id_var = 0;
    this->isHash_var = 0;
}

DHTGetCall::DHTGetCall(const DHTGetCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTGetCall::~DHTGetCall()
{
}

DHTGetCall& DHTGetCall::operator=(const DHTGetCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->key_var = other.key_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    this->isHash_var = other.isHash_var;
    return *this;
}

void DHTGetCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
    doPacking(b,this->isHash_var);
}

void DHTGetCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->isHash_var);
}

OverlayKey& DHTGetCall::getKey()
{
    return key_var;
}

void DHTGetCall::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

uint32_t DHTGetCall::getKind() const
{
    return kind_var;
}

void DHTGetCall::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t DHTGetCall::getId() const
{
    return id_var;
}

void DHTGetCall::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

bool DHTGetCall::getIsHash() const
{
    return isHash_var;
}

void DHTGetCall::setIsHash(bool isHash_var)
{
    this->isHash_var = isHash_var;
}

class DHTGetCallDescriptor : public cClassDescriptor
{
  public:
    DHTGetCallDescriptor();
    virtual ~DHTGetCallDescriptor();

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

Register_ClassDescriptor(DHTGetCallDescriptor);

DHTGetCallDescriptor::DHTGetCallDescriptor() : cClassDescriptor("DHTGetCall", "BaseCallMessage")
{
}

DHTGetCallDescriptor::~DHTGetCallDescriptor()
{
}

bool DHTGetCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTGetCall *>(obj)!=NULL;
}

const char *DHTGetCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTGetCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int DHTGetCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *DHTGetCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "kind";
        case 2: return "id";
        case 3: return "isHash";
        default: return NULL;
    }
}

const char *DHTGetCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "uint32_t";
        case 2: return "uint32_t";
        case 3: return "bool";
        default: return NULL;
    }
}

const char *DHTGetCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTGetCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetCall *pp = (DHTGetCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTGetCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetCall *pp = (DHTGetCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->getIsHash(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DHTGetCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetCall *pp = (DHTGetCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setKind(string2ulong(value)); return true;
        case 2: pp->setId(string2ulong(value)); return true;
        case 3: pp->setIsHash(string2bool(value)); return true;
        default: return false;
    }
}

const char *DHTGetCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *DHTGetCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetCall *pp = (DHTGetCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}

Register_Class(DHTPutResponse);

DHTPutResponse::DHTPutResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

DHTPutResponse::DHTPutResponse(const DHTPutResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTPutResponse::~DHTPutResponse()
{
}

DHTPutResponse& DHTPutResponse::operator=(const DHTPutResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->key_var = other.key_var;
    this->value_var = other.value_var;
    return *this;
}

void DHTPutResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->value_var);
}

void DHTPutResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->value_var);
}

OverlayKey& DHTPutResponse::getKey()
{
    return key_var;
}

void DHTPutResponse::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

BinaryValue& DHTPutResponse::getValue()
{
    return value_var;
}

void DHTPutResponse::setValue(const BinaryValue& value_var)
{
    this->value_var = value_var;
}

class DHTPutResponseDescriptor : public cClassDescriptor
{
  public:
    DHTPutResponseDescriptor();
    virtual ~DHTPutResponseDescriptor();

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

Register_ClassDescriptor(DHTPutResponseDescriptor);

DHTPutResponseDescriptor::DHTPutResponseDescriptor() : cClassDescriptor("DHTPutResponse", "BaseResponseMessage")
{
}

DHTPutResponseDescriptor::~DHTPutResponseDescriptor()
{
}

bool DHTPutResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTPutResponse *>(obj)!=NULL;
}

const char *DHTPutResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTPutResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int DHTPutResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *DHTPutResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "value";
        default: return NULL;
    }
}

const char *DHTPutResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "BinaryValue";
        default: return NULL;
    }
}

const char *DHTPutResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTPutResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutResponse *pp = (DHTPutResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTPutResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutResponse *pp = (DHTPutResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getValue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool DHTPutResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutResponse *pp = (DHTPutResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *DHTPutResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 1: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *DHTPutResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTPutResponse *pp = (DHTPutResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        case 1: return (void *)(&pp->getValue()); break;
        default: return NULL;
    }
}

Register_Class(DHTGetResponse);

DHTGetResponse::DHTGetResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->isHash_var = 0;
    result_arraysize = 0;
    this->result_var = 0;
}

DHTGetResponse::DHTGetResponse(const DHTGetResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    result_arraysize = 0;
    this->result_var = 0;
    operator=(other);
}

DHTGetResponse::~DHTGetResponse()
{
    delete [] result_var;
}

DHTGetResponse& DHTGetResponse::operator=(const DHTGetResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->key_var = other.key_var;
    this->hashValue_var = other.hashValue_var;
    this->isHash_var = other.isHash_var;
    delete [] this->result_var;
    this->result_var = (other.result_arraysize==0) ? NULL : new DhtDumpEntry[other.result_arraysize];
    result_arraysize = other.result_arraysize;
    for (unsigned int i=0; i<result_arraysize; i++)
        this->result_var[i] = other.result_var[i];
    return *this;
}

void DHTGetResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->hashValue_var);
    doPacking(b,this->isHash_var);
    b->pack(result_arraysize);
    doPacking(b,this->result_var,result_arraysize);
}

void DHTGetResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->hashValue_var);
    doUnpacking(b,this->isHash_var);
    delete [] this->result_var;
    b->unpack(result_arraysize);
    if (result_arraysize==0) {
        this->result_var = 0;
    } else {
        this->result_var = new DhtDumpEntry[result_arraysize];
        doUnpacking(b,this->result_var,result_arraysize);
    }
}

OverlayKey& DHTGetResponse::getKey()
{
    return key_var;
}

void DHTGetResponse::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

BinaryValue& DHTGetResponse::getHashValue()
{
    return hashValue_var;
}

void DHTGetResponse::setHashValue(const BinaryValue& hashValue_var)
{
    this->hashValue_var = hashValue_var;
}

bool DHTGetResponse::getIsHash() const
{
    return isHash_var;
}

void DHTGetResponse::setIsHash(bool isHash_var)
{
    this->isHash_var = isHash_var;
}

void DHTGetResponse::setResultArraySize(unsigned int size)
{
    DhtDumpEntry *result_var2 = (size==0) ? NULL : new DhtDumpEntry[size];
    unsigned int sz = result_arraysize < size ? result_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        result_var2[i] = this->result_var[i];
    result_arraysize = size;
    delete [] this->result_var;
    this->result_var = result_var2;
}

unsigned int DHTGetResponse::getResultArraySize() const
{
    return result_arraysize;
}

DhtDumpEntry& DHTGetResponse::getResult(unsigned int k)
{
    if (k>=result_arraysize) throw cRuntimeError("Array of size %d indexed by %d", result_arraysize, k);
    return result_var[k];
}

void DHTGetResponse::setResult(unsigned int k, const DhtDumpEntry& result_var)
{
    if (k>=result_arraysize) throw cRuntimeError("Array of size %d indexed by %d", result_arraysize, k);
    this->result_var[k]=result_var;
}

class DHTGetResponseDescriptor : public cClassDescriptor
{
  public:
    DHTGetResponseDescriptor();
    virtual ~DHTGetResponseDescriptor();

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

Register_ClassDescriptor(DHTGetResponseDescriptor);

DHTGetResponseDescriptor::DHTGetResponseDescriptor() : cClassDescriptor("DHTGetResponse", "BaseResponseMessage")
{
}

DHTGetResponseDescriptor::~DHTGetResponseDescriptor()
{
}

bool DHTGetResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTGetResponse *>(obj)!=NULL;
}

const char *DHTGetResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTGetResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int DHTGetResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *DHTGetResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "hashValue";
        case 2: return "isHash";
        case 3: return "result";
        default: return NULL;
    }
}

const char *DHTGetResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "BinaryValue";
        case 2: return "bool";
        case 3: return "DhtDumpEntry";
        default: return NULL;
    }
}

const char *DHTGetResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTGetResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetResponse *pp = (DHTGetResponse *)object; (void)pp;
    switch (field) {
        case 3: return pp->getResultArraySize();
        default: return 0;
    }
}

bool DHTGetResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetResponse *pp = (DHTGetResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getHashValue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: bool2string(pp->getIsHash(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getResult(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool DHTGetResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetResponse *pp = (DHTGetResponse *)object; (void)pp;
    switch (field) {
        case 2: pp->setIsHash(string2bool(value)); return true;
        default: return false;
    }
}

const char *DHTGetResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 1: return "BinaryValue"; break;
        case 3: return "DhtDumpEntry"; break;
        default: return NULL;
    }
}

void *DHTGetResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTGetResponse *pp = (DHTGetResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        case 1: return (void *)(&pp->getHashValue()); break;
        case 3: return (void *)(&pp->getResult(i)); break;
        default: return NULL;
    }
}

Register_Class(DHTTtlTimer);

DHTTtlTimer::DHTTtlTimer(const char *name, int kind) : cMessage(name,kind)
{
    this->kind_var = 0;
    this->id_var = 0;
}

DHTTtlTimer::DHTTtlTimer(const DHTTtlTimer& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTTtlTimer::~DHTTtlTimer()
{
}

DHTTtlTimer& DHTTtlTimer::operator=(const DHTTtlTimer& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    this->key_var = other.key_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    return *this;
}

void DHTTtlTimer::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
}

void DHTTtlTimer::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
}

OverlayKey& DHTTtlTimer::getKey()
{
    return key_var;
}

void DHTTtlTimer::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

uint32_t DHTTtlTimer::getKind() const
{
    return kind_var;
}

void DHTTtlTimer::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t DHTTtlTimer::getId() const
{
    return id_var;
}

void DHTTtlTimer::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

class DHTTtlTimerDescriptor : public cClassDescriptor
{
  public:
    DHTTtlTimerDescriptor();
    virtual ~DHTTtlTimerDescriptor();

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

Register_ClassDescriptor(DHTTtlTimerDescriptor);

DHTTtlTimerDescriptor::DHTTtlTimerDescriptor() : cClassDescriptor("DHTTtlTimer", "cMessage")
{
}

DHTTtlTimerDescriptor::~DHTTtlTimerDescriptor()
{
}

bool DHTTtlTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTTtlTimer *>(obj)!=NULL;
}

const char *DHTTtlTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTTtlTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DHTTtlTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *DHTTtlTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "kind";
        case 2: return "id";
        default: return NULL;
    }
}

const char *DHTTtlTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "uint32_t";
        case 2: return "uint32_t";
        default: return NULL;
    }
}

const char *DHTTtlTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTTtlTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTTtlTimer *pp = (DHTTtlTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTTtlTimerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTTtlTimer *pp = (DHTTtlTimer *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DHTTtlTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTTtlTimer *pp = (DHTTtlTimer *)object; (void)pp;
    switch (field) {
        case 1: pp->setKind(string2ulong(value)); return true;
        case 2: pp->setId(string2ulong(value)); return true;
        default: return false;
    }
}

const char *DHTTtlTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *DHTTtlTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTTtlTimer *pp = (DHTTtlTimer *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}


