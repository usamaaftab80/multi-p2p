//
// Generated file, do not edit! Created by opp_msgc 4.0 from common/Nps.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Nps_m.h"

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




Register_Class(CoordsReqCall);

CoordsReqCall::CoordsReqCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

CoordsReqCall::CoordsReqCall(const CoordsReqCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

CoordsReqCall::~CoordsReqCall()
{
}

CoordsReqCall& CoordsReqCall::operator=(const CoordsReqCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    return *this;
}

void CoordsReqCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void CoordsReqCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class CoordsReqCallDescriptor : public cClassDescriptor
{
  public:
    CoordsReqCallDescriptor();
    virtual ~CoordsReqCallDescriptor();

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

Register_ClassDescriptor(CoordsReqCallDescriptor);

CoordsReqCallDescriptor::CoordsReqCallDescriptor() : cClassDescriptor("CoordsReqCall", "BaseCallMessage")
{
}

CoordsReqCallDescriptor::~CoordsReqCallDescriptor()
{
}

bool CoordsReqCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CoordsReqCall *>(obj)!=NULL;
}

const char *CoordsReqCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CoordsReqCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int CoordsReqCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *CoordsReqCallDescriptor::getFieldName(void *object, int field) const
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

const char *CoordsReqCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *CoordsReqCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CoordsReqCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqCall *pp = (CoordsReqCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool CoordsReqCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqCall *pp = (CoordsReqCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool CoordsReqCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqCall *pp = (CoordsReqCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CoordsReqCallDescriptor::getFieldStructName(void *object, int field) const
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

void *CoordsReqCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqCall *pp = (CoordsReqCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(CoordsReqResponse);

CoordsReqResponse::CoordsReqResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->layer_var = 0;
}

CoordsReqResponse::CoordsReqResponse(const CoordsReqResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

CoordsReqResponse::~CoordsReqResponse()
{
}

CoordsReqResponse& CoordsReqResponse::operator=(const CoordsReqResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->layer_var = other.layer_var;
    return *this;
}

void CoordsReqResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->layer_var);
}

void CoordsReqResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->layer_var);
}

char CoordsReqResponse::getLayer() const
{
    return layer_var;
}

void CoordsReqResponse::setLayer(char layer_var)
{
    this->layer_var = layer_var;
}

class CoordsReqResponseDescriptor : public cClassDescriptor
{
  public:
    CoordsReqResponseDescriptor();
    virtual ~CoordsReqResponseDescriptor();

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

Register_ClassDescriptor(CoordsReqResponseDescriptor);

CoordsReqResponseDescriptor::CoordsReqResponseDescriptor() : cClassDescriptor("CoordsReqResponse", "BaseResponseMessage")
{
}

CoordsReqResponseDescriptor::~CoordsReqResponseDescriptor()
{
}

bool CoordsReqResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CoordsReqResponse *>(obj)!=NULL;
}

const char *CoordsReqResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CoordsReqResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int CoordsReqResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *CoordsReqResponseDescriptor::getFieldName(void *object, int field) const
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

const char *CoordsReqResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *CoordsReqResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CoordsReqResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqResponse *pp = (CoordsReqResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool CoordsReqResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqResponse *pp = (CoordsReqResponse *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getLayer(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool CoordsReqResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqResponse *pp = (CoordsReqResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setLayer(string2long(value)); return true;
        default: return false;
    }
}

const char *CoordsReqResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *CoordsReqResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CoordsReqResponse *pp = (CoordsReqResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


