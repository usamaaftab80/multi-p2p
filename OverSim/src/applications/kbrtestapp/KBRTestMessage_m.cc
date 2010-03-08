//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/kbrtestapp/KBRTestMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "KBRTestMessage_m.h"

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




Register_Class(KBRTestMessage);

KBRTestMessage::KBRTestMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->id_var = 0;
    this->seqNum_var = 0;
    this->measurementPhase_var = 0;
    visitedNodes_arraysize = 0;
    this->visitedNodes_var = 0;
}

KBRTestMessage::KBRTestMessage(const KBRTestMessage& other) : cPacket()
{
    setName(other.getName());
    visitedNodes_arraysize = 0;
    this->visitedNodes_var = 0;
    operator=(other);
}

KBRTestMessage::~KBRTestMessage()
{
    delete [] visitedNodes_var;
}

KBRTestMessage& KBRTestMessage::operator=(const KBRTestMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->id_var = other.id_var;
    this->seqNum_var = other.seqNum_var;
    this->measurementPhase_var = other.measurementPhase_var;
    delete [] this->visitedNodes_var;
    this->visitedNodes_var = (other.visitedNodes_arraysize==0) ? NULL : new IPvXAddress[other.visitedNodes_arraysize];
    visitedNodes_arraysize = other.visitedNodes_arraysize;
    for (unsigned int i=0; i<visitedNodes_arraysize; i++)
        this->visitedNodes_var[i] = other.visitedNodes_var[i];
    return *this;
}

void KBRTestMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->seqNum_var);
    doPacking(b,this->measurementPhase_var);
    b->pack(visitedNodes_arraysize);
    doPacking(b,this->visitedNodes_var,visitedNodes_arraysize);
}

void KBRTestMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->seqNum_var);
    doUnpacking(b,this->measurementPhase_var);
    delete [] this->visitedNodes_var;
    b->unpack(visitedNodes_arraysize);
    if (visitedNodes_arraysize==0) {
        this->visitedNodes_var = 0;
    } else {
        this->visitedNodes_var = new IPvXAddress[visitedNodes_arraysize];
        doUnpacking(b,this->visitedNodes_var,visitedNodes_arraysize);
    }
}

int KBRTestMessage::getId() const
{
    return id_var;
}

void KBRTestMessage::setId(int id_var)
{
    this->id_var = id_var;
}

int KBRTestMessage::getSeqNum() const
{
    return seqNum_var;
}

void KBRTestMessage::setSeqNum(int seqNum_var)
{
    this->seqNum_var = seqNum_var;
}

bool KBRTestMessage::getMeasurementPhase() const
{
    return measurementPhase_var;
}

void KBRTestMessage::setMeasurementPhase(bool measurementPhase_var)
{
    this->measurementPhase_var = measurementPhase_var;
}

void KBRTestMessage::setVisitedNodesArraySize(unsigned int size)
{
    IPvXAddress *visitedNodes_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = visitedNodes_arraysize < size ? visitedNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        visitedNodes_var2[i] = this->visitedNodes_var[i];
    visitedNodes_arraysize = size;
    delete [] this->visitedNodes_var;
    this->visitedNodes_var = visitedNodes_var2;
}

unsigned int KBRTestMessage::getVisitedNodesArraySize() const
{
    return visitedNodes_arraysize;
}

IPvXAddress& KBRTestMessage::getVisitedNodes(unsigned int k)
{
    if (k>=visitedNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedNodes_arraysize, k);
    return visitedNodes_var[k];
}

void KBRTestMessage::setVisitedNodes(unsigned int k, const IPvXAddress& visitedNodes_var)
{
    if (k>=visitedNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedNodes_arraysize, k);
    this->visitedNodes_var[k]=visitedNodes_var;
}

class KBRTestMessageDescriptor : public cClassDescriptor
{
  public:
    KBRTestMessageDescriptor();
    virtual ~KBRTestMessageDescriptor();

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

Register_ClassDescriptor(KBRTestMessageDescriptor);

KBRTestMessageDescriptor::KBRTestMessageDescriptor() : cClassDescriptor("KBRTestMessage", "cPacket")
{
}

KBRTestMessageDescriptor::~KBRTestMessageDescriptor()
{
}

bool KBRTestMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KBRTestMessage *>(obj)!=NULL;
}

const char *KBRTestMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KBRTestMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int KBRTestMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *KBRTestMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "seqNum";
        case 2: return "measurementPhase";
        case 3: return "visitedNodes";
        default: return NULL;
    }
}

const char *KBRTestMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        case 2: return "bool";
        case 3: return "IPvXAddress";
        default: return NULL;
    }
}

const char *KBRTestMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KBRTestMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 3: return pp->getVisitedNodesArraySize();
        default: return 0;
    }
}

bool KBRTestMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getSeqNum(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->getMeasurementPhase(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getVisitedNodes(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool KBRTestMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setSeqNum(string2long(value)); return true;
        case 2: pp->setMeasurementPhase(string2bool(value)); return true;
        default: return false;
    }
}

const char *KBRTestMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *KBRTestMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getVisitedNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(KbrTestCall);

KbrTestCall::KbrTestCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

KbrTestCall::KbrTestCall(const KbrTestCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

KbrTestCall::~KbrTestCall()
{
}

KbrTestCall& KbrTestCall::operator=(const KbrTestCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    return *this;
}

void KbrTestCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void KbrTestCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class KbrTestCallDescriptor : public cClassDescriptor
{
  public:
    KbrTestCallDescriptor();
    virtual ~KbrTestCallDescriptor();

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

Register_ClassDescriptor(KbrTestCallDescriptor);

KbrTestCallDescriptor::KbrTestCallDescriptor() : cClassDescriptor("KbrTestCall", "BaseCallMessage")
{
}

KbrTestCallDescriptor::~KbrTestCallDescriptor()
{
}

bool KbrTestCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KbrTestCall *>(obj)!=NULL;
}

const char *KbrTestCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KbrTestCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int KbrTestCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *KbrTestCallDescriptor::getFieldName(void *object, int field) const
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

const char *KbrTestCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *KbrTestCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KbrTestCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool KbrTestCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool KbrTestCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KbrTestCallDescriptor::getFieldStructName(void *object, int field) const
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

void *KbrTestCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(KbrTestResponse);

KbrTestResponse::KbrTestResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

KbrTestResponse::KbrTestResponse(const KbrTestResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

KbrTestResponse::~KbrTestResponse()
{
}

KbrTestResponse& KbrTestResponse::operator=(const KbrTestResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    return *this;
}

void KbrTestResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void KbrTestResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class KbrTestResponseDescriptor : public cClassDescriptor
{
  public:
    KbrTestResponseDescriptor();
    virtual ~KbrTestResponseDescriptor();

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

Register_ClassDescriptor(KbrTestResponseDescriptor);

KbrTestResponseDescriptor::KbrTestResponseDescriptor() : cClassDescriptor("KbrTestResponse", "BaseResponseMessage")
{
}

KbrTestResponseDescriptor::~KbrTestResponseDescriptor()
{
}

bool KbrTestResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KbrTestResponse *>(obj)!=NULL;
}

const char *KbrTestResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KbrTestResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int KbrTestResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *KbrTestResponseDescriptor::getFieldName(void *object, int field) const
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

const char *KbrTestResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *KbrTestResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KbrTestResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool KbrTestResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool KbrTestResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KbrTestResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *KbrTestResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(KbrRpcContext);

KbrRpcContext::KbrRpcContext() : cObject()
{
    this->measurementPhase_var = 0;
}

KbrRpcContext::KbrRpcContext(const KbrRpcContext& other) : cObject()
{
    operator=(other);
}

KbrRpcContext::~KbrRpcContext()
{
}

KbrRpcContext& KbrRpcContext::operator=(const KbrRpcContext& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->destKey_var = other.destKey_var;
    this->measurementPhase_var = other.measurementPhase_var;
    return *this;
}

void KbrRpcContext::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->destKey_var);
    doPacking(b,this->measurementPhase_var);
}

void KbrRpcContext::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->destKey_var);
    doUnpacking(b,this->measurementPhase_var);
}

OverlayKey& KbrRpcContext::getDestKey()
{
    return destKey_var;
}

void KbrRpcContext::setDestKey(const OverlayKey& destKey_var)
{
    this->destKey_var = destKey_var;
}

bool KbrRpcContext::getMeasurementPhase() const
{
    return measurementPhase_var;
}

void KbrRpcContext::setMeasurementPhase(bool measurementPhase_var)
{
    this->measurementPhase_var = measurementPhase_var;
}

class KbrRpcContextDescriptor : public cClassDescriptor
{
  public:
    KbrRpcContextDescriptor();
    virtual ~KbrRpcContextDescriptor();

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

Register_ClassDescriptor(KbrRpcContextDescriptor);

KbrRpcContextDescriptor::KbrRpcContextDescriptor() : cClassDescriptor("KbrRpcContext", "cObject")
{
}

KbrRpcContextDescriptor::~KbrRpcContextDescriptor()
{
}

bool KbrRpcContextDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KbrRpcContext *>(obj)!=NULL;
}

const char *KbrRpcContextDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KbrRpcContextDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int KbrRpcContextDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *KbrRpcContextDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destKey";
        case 1: return "measurementPhase";
        default: return NULL;
    }
}

const char *KbrRpcContextDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *KbrRpcContextDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KbrRpcContextDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool KbrRpcContextDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->getMeasurementPhase(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool KbrRpcContextDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        case 1: pp->setMeasurementPhase(string2bool(value)); return true;
        default: return false;
    }
}

const char *KbrRpcContextDescriptor::getFieldStructName(void *object, int field) const
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

void *KbrRpcContextDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        default: return NULL;
    }
}


