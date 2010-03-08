//
// Generated file, do not edit! Created by opp_msgc 4.0 from linklayer/mfcore/SnrControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SnrControlInfo_m.h"

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




Register_Class(SnrControlInfo);

SnrControlInfo::SnrControlInfo() : cObject()
{
}

SnrControlInfo::SnrControlInfo(const SnrControlInfo& other) : cObject()
{
    operator=(other);
}

SnrControlInfo::~SnrControlInfo()
{
}

SnrControlInfo& SnrControlInfo::operator=(const SnrControlInfo& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->snrList_var = other.snrList_var;
    return *this;
}

void SnrControlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->snrList_var);
}

void SnrControlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->snrList_var);
}

SnrList& SnrControlInfo::getSnrList()
{
    return snrList_var;
}

void SnrControlInfo::setSnrList(const SnrList& snrList_var)
{
    this->snrList_var = snrList_var;
}

class SnrControlInfoDescriptor : public cClassDescriptor
{
  public:
    SnrControlInfoDescriptor();
    virtual ~SnrControlInfoDescriptor();

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

Register_ClassDescriptor(SnrControlInfoDescriptor);

SnrControlInfoDescriptor::SnrControlInfoDescriptor() : cClassDescriptor("SnrControlInfo", "cObject")
{
}

SnrControlInfoDescriptor::~SnrControlInfoDescriptor()
{
}

bool SnrControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SnrControlInfo *>(obj)!=NULL;
}

const char *SnrControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SnrControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SnrControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SnrControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "snrList";
        default: return NULL;
    }
}

const char *SnrControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SnrList";
        default: return NULL;
    }
}

const char *SnrControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SnrControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SnrControlInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSnrList(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool SnrControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SnrControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SnrList"; break;
        default: return NULL;
    }
}

void *SnrControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSnrList()); break;
        default: return NULL;
    }
}


