//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ted/TED.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TED_m.h"

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




TELinkStateInfo::TELinkStateInfo()
{
    metric = 0;
    MaxBandwidth = 0;
    for (unsigned int i=0; i<8; i++)
        UnResvBandwidth[i] = 0;
    timestamp = 0;
    sourceId = 0;
    messageId = 0;
    state = 0;
}

void doPacking(cCommBuffer *b, TELinkStateInfo& a)
{
    doPacking(b,a.advrouter);
    doPacking(b,a.linkid);
    doPacking(b,a.local);
    doPacking(b,a.remote);
    doPacking(b,a.metric);
    doPacking(b,a.MaxBandwidth);
    doPacking(b,a.UnResvBandwidth,8);
    doPacking(b,a.timestamp);
    doPacking(b,a.sourceId);
    doPacking(b,a.messageId);
    doPacking(b,a.state);
}

void doUnpacking(cCommBuffer *b, TELinkStateInfo& a)
{
    doUnpacking(b,a.advrouter);
    doUnpacking(b,a.linkid);
    doUnpacking(b,a.local);
    doUnpacking(b,a.remote);
    doUnpacking(b,a.metric);
    doUnpacking(b,a.MaxBandwidth);
    doUnpacking(b,a.UnResvBandwidth,8);
    doUnpacking(b,a.timestamp);
    doUnpacking(b,a.sourceId);
    doUnpacking(b,a.messageId);
    doUnpacking(b,a.state);
}

class TELinkStateInfoDescriptor : public cClassDescriptor
{
  public:
    TELinkStateInfoDescriptor();
    virtual ~TELinkStateInfoDescriptor();

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

Register_ClassDescriptor(TELinkStateInfoDescriptor);

TELinkStateInfoDescriptor::TELinkStateInfoDescriptor() : cClassDescriptor("TELinkStateInfo", "")
{
}

TELinkStateInfoDescriptor::~TELinkStateInfoDescriptor()
{
}

bool TELinkStateInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TELinkStateInfo *>(obj)!=NULL;
}

const char *TELinkStateInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TELinkStateInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 11+basedesc->getFieldCount(object) : 11;
}

unsigned int TELinkStateInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISCOMPOUND;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISARRAY | FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        case 9: return FD_ISEDITABLE;
        case 10: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *TELinkStateInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "advrouter";
        case 1: return "linkid";
        case 2: return "local";
        case 3: return "remote";
        case 4: return "metric";
        case 5: return "MaxBandwidth";
        case 6: return "UnResvBandwidth";
        case 7: return "timestamp";
        case 8: return "sourceId";
        case 9: return "messageId";
        case 10: return "state";
        default: return NULL;
    }
}

const char *TELinkStateInfoDescriptor::getFieldTypeString(void *object, int field) const
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
        case 2: return "IPAddress";
        case 3: return "IPAddress";
        case 4: return "double";
        case 5: return "double";
        case 6: return "double";
        case 7: return "simtime_t";
        case 8: return "unsigned int";
        case 9: return "unsigned int";
        case 10: return "bool";
        default: return NULL;
    }
}

const char *TELinkStateInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TELinkStateInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 6: return 8;
        default: return 0;
    }
}

bool TELinkStateInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->advrouter; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->linkid; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->local; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: {std::stringstream out; out << pp->remote; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: double2string(pp->metric,resultbuf,bufsize); return true;
        case 5: double2string(pp->MaxBandwidth,resultbuf,bufsize); return true;
        case 6: if (i>=8) return false;
                double2string(pp->UnResvBandwidth[i],resultbuf,bufsize); return true;
        case 7: double2string(pp->timestamp,resultbuf,bufsize); return true;
        case 8: ulong2string(pp->sourceId,resultbuf,bufsize); return true;
        case 9: ulong2string(pp->messageId,resultbuf,bufsize); return true;
        case 10: bool2string(pp->state,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TELinkStateInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 4: pp->metric = string2double(value); return true;
        case 5: pp->MaxBandwidth = string2double(value); return true;
        case 6: if (i>=8) return false;
                pp->UnResvBandwidth[i] = string2double(value); return true;
        case 7: pp->timestamp = string2double(value); return true;
        case 8: pp->sourceId = string2ulong(value); return true;
        case 9: pp->messageId = string2ulong(value); return true;
        case 10: pp->state = string2bool(value); return true;
        default: return false;
    }
}

const char *TELinkStateInfoDescriptor::getFieldStructName(void *object, int field) const
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
        case 2: return "IPAddress"; break;
        case 3: return "IPAddress"; break;
        default: return NULL;
    }
}

void *TELinkStateInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->advrouter); break;
        case 1: return (void *)(&pp->linkid); break;
        case 2: return (void *)(&pp->local); break;
        case 3: return (void *)(&pp->remote); break;
        default: return NULL;
    }
}

Register_Class(TEDChangeInfo);

TEDChangeInfo::TEDChangeInfo() : cObject()
{
    tedLinkIndices_arraysize = 0;
    this->tedLinkIndices_var = 0;
}

TEDChangeInfo::TEDChangeInfo(const TEDChangeInfo& other) : cObject()
{
    tedLinkIndices_arraysize = 0;
    this->tedLinkIndices_var = 0;
    operator=(other);
}

TEDChangeInfo::~TEDChangeInfo()
{
    delete [] tedLinkIndices_var;
}

TEDChangeInfo& TEDChangeInfo::operator=(const TEDChangeInfo& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    delete [] this->tedLinkIndices_var;
    this->tedLinkIndices_var = (other.tedLinkIndices_arraysize==0) ? NULL : new int[other.tedLinkIndices_arraysize];
    tedLinkIndices_arraysize = other.tedLinkIndices_arraysize;
    for (unsigned int i=0; i<tedLinkIndices_arraysize; i++)
        this->tedLinkIndices_var[i] = other.tedLinkIndices_var[i];
    return *this;
}

void TEDChangeInfo::parsimPack(cCommBuffer *b)
{
    b->pack(tedLinkIndices_arraysize);
    doPacking(b,this->tedLinkIndices_var,tedLinkIndices_arraysize);
}

void TEDChangeInfo::parsimUnpack(cCommBuffer *b)
{
    delete [] this->tedLinkIndices_var;
    b->unpack(tedLinkIndices_arraysize);
    if (tedLinkIndices_arraysize==0) {
        this->tedLinkIndices_var = 0;
    } else {
        this->tedLinkIndices_var = new int[tedLinkIndices_arraysize];
        doUnpacking(b,this->tedLinkIndices_var,tedLinkIndices_arraysize);
    }
}

void TEDChangeInfo::setTedLinkIndicesArraySize(unsigned int size)
{
    int *tedLinkIndices_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = tedLinkIndices_arraysize < size ? tedLinkIndices_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        tedLinkIndices_var2[i] = this->tedLinkIndices_var[i];
    for (unsigned int i=sz; i<size; i++)
        tedLinkIndices_var2[i] = 0;
    tedLinkIndices_arraysize = size;
    delete [] this->tedLinkIndices_var;
    this->tedLinkIndices_var = tedLinkIndices_var2;
}

unsigned int TEDChangeInfo::getTedLinkIndicesArraySize() const
{
    return tedLinkIndices_arraysize;
}

int TEDChangeInfo::getTedLinkIndices(unsigned int k) const
{
    if (k>=tedLinkIndices_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tedLinkIndices_arraysize, k);
    return tedLinkIndices_var[k];
}

void TEDChangeInfo::setTedLinkIndices(unsigned int k, int tedLinkIndices_var)
{
    if (k>=tedLinkIndices_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tedLinkIndices_arraysize, k);
    this->tedLinkIndices_var[k]=tedLinkIndices_var;
}

class TEDChangeInfoDescriptor : public cClassDescriptor
{
  public:
    TEDChangeInfoDescriptor();
    virtual ~TEDChangeInfoDescriptor();

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

Register_ClassDescriptor(TEDChangeInfoDescriptor);

TEDChangeInfoDescriptor::TEDChangeInfoDescriptor() : cClassDescriptor("TEDChangeInfo", "cObject")
{
}

TEDChangeInfoDescriptor::~TEDChangeInfoDescriptor()
{
}

bool TEDChangeInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TEDChangeInfo *>(obj)!=NULL;
}

const char *TEDChangeInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TEDChangeInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TEDChangeInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *TEDChangeInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "tedLinkIndices";
        default: return NULL;
    }
}

const char *TEDChangeInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *TEDChangeInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TEDChangeInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        case 0: return pp->getTedLinkIndicesArraySize();
        default: return 0;
    }
}

bool TEDChangeInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getTedLinkIndices(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TEDChangeInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setTedLinkIndices(i,string2long(value)); return true;
        default: return false;
    }
}

const char *TEDChangeInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *TEDChangeInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


