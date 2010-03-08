//
// Generated file, do not edit! Created by opp_msgc 4.0 from common/cbr/CoordMessages.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "CoordMessages_m.h"

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




Register_Class(CoordsOfNodeCall);

CoordsOfNodeCall::CoordsOfNodeCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

CoordsOfNodeCall::CoordsOfNodeCall(const CoordsOfNodeCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

CoordsOfNodeCall::~CoordsOfNodeCall()
{
}

CoordsOfNodeCall& CoordsOfNodeCall::operator=(const CoordsOfNodeCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    return *this;
}

void CoordsOfNodeCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void CoordsOfNodeCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class CoordsOfNodeCallDescriptor : public cClassDescriptor
{
  public:
    CoordsOfNodeCallDescriptor();
    virtual ~CoordsOfNodeCallDescriptor();

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

Register_ClassDescriptor(CoordsOfNodeCallDescriptor);

CoordsOfNodeCallDescriptor::CoordsOfNodeCallDescriptor() : cClassDescriptor("CoordsOfNodeCall", "BaseCallMessage")
{
}

CoordsOfNodeCallDescriptor::~CoordsOfNodeCallDescriptor()
{
}

bool CoordsOfNodeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CoordsOfNodeCall *>(obj)!=NULL;
}

const char *CoordsOfNodeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CoordsOfNodeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int CoordsOfNodeCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *CoordsOfNodeCallDescriptor::getFieldName(void *object, int field) const
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

const char *CoordsOfNodeCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *CoordsOfNodeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CoordsOfNodeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeCall *pp = (CoordsOfNodeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool CoordsOfNodeCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeCall *pp = (CoordsOfNodeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool CoordsOfNodeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeCall *pp = (CoordsOfNodeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CoordsOfNodeCallDescriptor::getFieldStructName(void *object, int field) const
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

void *CoordsOfNodeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeCall *pp = (CoordsOfNodeCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RttToNodeCall);

RttToNodeCall::RttToNodeCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

RttToNodeCall::RttToNodeCall(const RttToNodeCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

RttToNodeCall::~RttToNodeCall()
{
}

RttToNodeCall& RttToNodeCall::operator=(const RttToNodeCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->nodeToPing_var = other.nodeToPing_var;
    return *this;
}

void RttToNodeCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->nodeToPing_var);
}

void RttToNodeCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->nodeToPing_var);
}

TransportAddress& RttToNodeCall::getNodeToPing()
{
    return nodeToPing_var;
}

void RttToNodeCall::setNodeToPing(const TransportAddress& nodeToPing_var)
{
    this->nodeToPing_var = nodeToPing_var;
}

class RttToNodeCallDescriptor : public cClassDescriptor
{
  public:
    RttToNodeCallDescriptor();
    virtual ~RttToNodeCallDescriptor();

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

Register_ClassDescriptor(RttToNodeCallDescriptor);

RttToNodeCallDescriptor::RttToNodeCallDescriptor() : cClassDescriptor("RttToNodeCall", "BaseCallMessage")
{
}

RttToNodeCallDescriptor::~RttToNodeCallDescriptor()
{
}

bool RttToNodeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RttToNodeCall *>(obj)!=NULL;
}

const char *RttToNodeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RttToNodeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RttToNodeCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *RttToNodeCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "nodeToPing";
        default: return NULL;
    }
}

const char *RttToNodeCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress";
        default: return NULL;
    }
}

const char *RttToNodeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RttToNodeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeCall *pp = (RttToNodeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RttToNodeCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeCall *pp = (RttToNodeCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNodeToPing(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool RttToNodeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeCall *pp = (RttToNodeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RttToNodeCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *RttToNodeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeCall *pp = (RttToNodeCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNodeToPing()); break;
        default: return NULL;
    }
}

Register_Class(CoordsOfNodeResponse);

CoordsOfNodeResponse::CoordsOfNodeResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->layer_var = 0;
}

CoordsOfNodeResponse::CoordsOfNodeResponse(const CoordsOfNodeResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

CoordsOfNodeResponse::~CoordsOfNodeResponse()
{
}

CoordsOfNodeResponse& CoordsOfNodeResponse::operator=(const CoordsOfNodeResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->layer_var = other.layer_var;
    return *this;
}

void CoordsOfNodeResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->layer_var);
}

void CoordsOfNodeResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->layer_var);
}

char CoordsOfNodeResponse::getLayer() const
{
    return layer_var;
}

void CoordsOfNodeResponse::setLayer(char layer_var)
{
    this->layer_var = layer_var;
}

class CoordsOfNodeResponseDescriptor : public cClassDescriptor
{
  public:
    CoordsOfNodeResponseDescriptor();
    virtual ~CoordsOfNodeResponseDescriptor();

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

Register_ClassDescriptor(CoordsOfNodeResponseDescriptor);

CoordsOfNodeResponseDescriptor::CoordsOfNodeResponseDescriptor() : cClassDescriptor("CoordsOfNodeResponse", "BaseResponseMessage")
{
}

CoordsOfNodeResponseDescriptor::~CoordsOfNodeResponseDescriptor()
{
}

bool CoordsOfNodeResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CoordsOfNodeResponse *>(obj)!=NULL;
}

const char *CoordsOfNodeResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CoordsOfNodeResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int CoordsOfNodeResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *CoordsOfNodeResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "layer";
        default: return NULL;
    }
}

const char *CoordsOfNodeResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "char";
        default: return NULL;
    }
}

const char *CoordsOfNodeResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CoordsOfNodeResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeResponse *pp = (CoordsOfNodeResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool CoordsOfNodeResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeResponse *pp = (CoordsOfNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getLayer(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool CoordsOfNodeResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeResponse *pp = (CoordsOfNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setLayer(string2long(value)); return true;
        default: return false;
    }
}

const char *CoordsOfNodeResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *CoordsOfNodeResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CoordsOfNodeResponse *pp = (CoordsOfNodeResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RttToNodeResponse);

RttToNodeResponse::RttToNodeResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    ownCoordinates_arraysize = 0;
    this->ownCoordinates_var = 0;
    this->rttToNode_var = 0;
}

RttToNodeResponse::RttToNodeResponse(const RttToNodeResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    ownCoordinates_arraysize = 0;
    this->ownCoordinates_var = 0;
    operator=(other);
}

RttToNodeResponse::~RttToNodeResponse()
{
    delete [] ownCoordinates_var;
}

RttToNodeResponse& RttToNodeResponse::operator=(const RttToNodeResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->pingedNode_var = other.pingedNode_var;
    delete [] this->ownCoordinates_var;
    this->ownCoordinates_var = (other.ownCoordinates_arraysize==0) ? NULL : new double[other.ownCoordinates_arraysize];
    ownCoordinates_arraysize = other.ownCoordinates_arraysize;
    for (unsigned int i=0; i<ownCoordinates_arraysize; i++)
        this->ownCoordinates_var[i] = other.ownCoordinates_var[i];
    this->rttToNode_var = other.rttToNode_var;
    return *this;
}

void RttToNodeResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->pingedNode_var);
    b->pack(ownCoordinates_arraysize);
    doPacking(b,this->ownCoordinates_var,ownCoordinates_arraysize);
    doPacking(b,this->rttToNode_var);
}

void RttToNodeResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->pingedNode_var);
    delete [] this->ownCoordinates_var;
    b->unpack(ownCoordinates_arraysize);
    if (ownCoordinates_arraysize==0) {
        this->ownCoordinates_var = 0;
    } else {
        this->ownCoordinates_var = new double[ownCoordinates_arraysize];
        doUnpacking(b,this->ownCoordinates_var,ownCoordinates_arraysize);
    }
    doUnpacking(b,this->rttToNode_var);
}

TransportAddress& RttToNodeResponse::getPingedNode()
{
    return pingedNode_var;
}

void RttToNodeResponse::setPingedNode(const TransportAddress& pingedNode_var)
{
    this->pingedNode_var = pingedNode_var;
}

void RttToNodeResponse::setOwnCoordinatesArraySize(unsigned int size)
{
    double *ownCoordinates_var2 = (size==0) ? NULL : new double[size];
    unsigned int sz = ownCoordinates_arraysize < size ? ownCoordinates_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        ownCoordinates_var2[i] = this->ownCoordinates_var[i];
    for (unsigned int i=sz; i<size; i++)
        ownCoordinates_var2[i] = 0;
    ownCoordinates_arraysize = size;
    delete [] this->ownCoordinates_var;
    this->ownCoordinates_var = ownCoordinates_var2;
}

unsigned int RttToNodeResponse::getOwnCoordinatesArraySize() const
{
    return ownCoordinates_arraysize;
}

double RttToNodeResponse::getOwnCoordinates(unsigned int k) const
{
    if (k>=ownCoordinates_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ownCoordinates_arraysize, k);
    return ownCoordinates_var[k];
}

void RttToNodeResponse::setOwnCoordinates(unsigned int k, double ownCoordinates_var)
{
    if (k>=ownCoordinates_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ownCoordinates_arraysize, k);
    this->ownCoordinates_var[k]=ownCoordinates_var;
}

simtime_t RttToNodeResponse::getRttToNode() const
{
    return rttToNode_var;
}

void RttToNodeResponse::setRttToNode(simtime_t rttToNode_var)
{
    this->rttToNode_var = rttToNode_var;
}

class RttToNodeResponseDescriptor : public cClassDescriptor
{
  public:
    RttToNodeResponseDescriptor();
    virtual ~RttToNodeResponseDescriptor();

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

Register_ClassDescriptor(RttToNodeResponseDescriptor);

RttToNodeResponseDescriptor::RttToNodeResponseDescriptor() : cClassDescriptor("RttToNodeResponse", "BaseResponseMessage")
{
}

RttToNodeResponseDescriptor::~RttToNodeResponseDescriptor()
{
}

bool RttToNodeResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RttToNodeResponse *>(obj)!=NULL;
}

const char *RttToNodeResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RttToNodeResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RttToNodeResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISARRAY | FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *RttToNodeResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "pingedNode";
        case 1: return "ownCoordinates";
        case 2: return "rttToNode";
        default: return NULL;
    }
}

const char *RttToNodeResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress";
        case 1: return "double";
        case 2: return "simtime_t";
        default: return NULL;
    }
}

const char *RttToNodeResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RttToNodeResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeResponse *pp = (RttToNodeResponse *)object; (void)pp;
    switch (field) {
        case 1: return pp->getOwnCoordinatesArraySize();
        default: return 0;
    }
}

bool RttToNodeResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeResponse *pp = (RttToNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPingedNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: double2string(pp->getOwnCoordinates(i),resultbuf,bufsize); return true;
        case 2: double2string(pp->getRttToNode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RttToNodeResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeResponse *pp = (RttToNodeResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setOwnCoordinates(i,string2double(value)); return true;
        case 2: pp->setRttToNode(string2double(value)); return true;
        default: return false;
    }
}

const char *RttToNodeResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *RttToNodeResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RttToNodeResponse *pp = (RttToNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPingedNode()); break;
        default: return NULL;
    }
}


