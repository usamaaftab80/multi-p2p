//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/rsvp_te/IntServ.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IntServ_m.h"

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




SessionObj_t::SessionObj_t()
{
    Tunnel_Id = 0;
    Extended_Tunnel_Id = 0;
    setupPri = 0;
    holdingPri = 0;
}

void doPacking(cCommBuffer *b, SessionObj_t& a)
{
    doPacking(b,a.Tunnel_Id);
    doPacking(b,a.Extended_Tunnel_Id);
    doPacking(b,a.DestAddress);
    doPacking(b,a.setupPri);
    doPacking(b,a.holdingPri);
}

void doUnpacking(cCommBuffer *b, SessionObj_t& a)
{
    doUnpacking(b,a.Tunnel_Id);
    doUnpacking(b,a.Extended_Tunnel_Id);
    doUnpacking(b,a.DestAddress);
    doUnpacking(b,a.setupPri);
    doUnpacking(b,a.holdingPri);
}

class SessionObj_tDescriptor : public cClassDescriptor
{
  public:
    SessionObj_tDescriptor();
    virtual ~SessionObj_tDescriptor();

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

Register_ClassDescriptor(SessionObj_tDescriptor);

SessionObj_tDescriptor::SessionObj_tDescriptor() : cClassDescriptor("SessionObj_t", "")
{
}

SessionObj_tDescriptor::~SessionObj_tDescriptor()
{
}

bool SessionObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SessionObj_t *>(obj)!=NULL;
}

const char *SessionObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SessionObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SessionObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *SessionObj_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Tunnel_Id";
        case 1: return "Extended_Tunnel_Id";
        case 2: return "DestAddress";
        case 3: return "setupPri";
        case 4: return "holdingPri";
        default: return NULL;
    }
}

const char *SessionObj_tDescriptor::getFieldTypeString(void *object, int field) const
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
        case 2: return "IPAddress";
        case 3: return "int";
        case 4: return "int";
        default: return NULL;
    }
}

const char *SessionObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SessionObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SessionObj_t *pp = (SessionObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SessionObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SessionObj_t *pp = (SessionObj_t *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->Tunnel_Id,resultbuf,bufsize); return true;
        case 1: long2string(pp->Extended_Tunnel_Id,resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->DestAddress; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->setupPri,resultbuf,bufsize); return true;
        case 4: long2string(pp->holdingPri,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SessionObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SessionObj_t *pp = (SessionObj_t *)object; (void)pp;
    switch (field) {
        case 0: pp->Tunnel_Id = string2long(value); return true;
        case 1: pp->Extended_Tunnel_Id = string2long(value); return true;
        case 3: pp->setupPri = string2long(value); return true;
        case 4: pp->holdingPri = string2long(value); return true;
        default: return false;
    }
}

const char *SessionObj_tDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "IPAddress"; break;
        default: return NULL;
    }
}

void *SessionObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SessionObj_t *pp = (SessionObj_t *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->DestAddress); break;
        default: return NULL;
    }
}

RsvpHopObj_t::RsvpHopObj_t()
{
}

void doPacking(cCommBuffer *b, RsvpHopObj_t& a)
{
    doPacking(b,a.Next_Hop_Address);
    doPacking(b,a.Logical_Interface_Handle);
}

void doUnpacking(cCommBuffer *b, RsvpHopObj_t& a)
{
    doUnpacking(b,a.Next_Hop_Address);
    doUnpacking(b,a.Logical_Interface_Handle);
}

class RsvpHopObj_tDescriptor : public cClassDescriptor
{
  public:
    RsvpHopObj_tDescriptor();
    virtual ~RsvpHopObj_tDescriptor();

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

Register_ClassDescriptor(RsvpHopObj_tDescriptor);

RsvpHopObj_tDescriptor::RsvpHopObj_tDescriptor() : cClassDescriptor("RsvpHopObj_t", "")
{
}

RsvpHopObj_tDescriptor::~RsvpHopObj_tDescriptor()
{
}

bool RsvpHopObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RsvpHopObj_t *>(obj)!=NULL;
}

const char *RsvpHopObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RsvpHopObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RsvpHopObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RsvpHopObj_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Next_Hop_Address";
        case 1: return "Logical_Interface_Handle";
        default: return NULL;
    }
}

const char *RsvpHopObj_tDescriptor::getFieldTypeString(void *object, int field) const
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
        default: return NULL;
    }
}

const char *RsvpHopObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RsvpHopObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RsvpHopObj_t *pp = (RsvpHopObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RsvpHopObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RsvpHopObj_t *pp = (RsvpHopObj_t *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->Next_Hop_Address; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->Logical_Interface_Handle; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool RsvpHopObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RsvpHopObj_t *pp = (RsvpHopObj_t *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RsvpHopObj_tDescriptor::getFieldStructName(void *object, int field) const
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

void *RsvpHopObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RsvpHopObj_t *pp = (RsvpHopObj_t *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->Next_Hop_Address); break;
        case 1: return (void *)(&pp->Logical_Interface_Handle); break;
        default: return NULL;
    }
}

SenderTemplateObj_t::SenderTemplateObj_t()
{
    Lsp_Id = -1;
}

void doPacking(cCommBuffer *b, SenderTemplateObj_t& a)
{
    doPacking(b,a.SrcAddress);
    doPacking(b,a.Lsp_Id);
}

void doUnpacking(cCommBuffer *b, SenderTemplateObj_t& a)
{
    doUnpacking(b,a.SrcAddress);
    doUnpacking(b,a.Lsp_Id);
}

class SenderTemplateObj_tDescriptor : public cClassDescriptor
{
  public:
    SenderTemplateObj_tDescriptor();
    virtual ~SenderTemplateObj_tDescriptor();

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

Register_ClassDescriptor(SenderTemplateObj_tDescriptor);

SenderTemplateObj_tDescriptor::SenderTemplateObj_tDescriptor() : cClassDescriptor("SenderTemplateObj_t", "")
{
}

SenderTemplateObj_tDescriptor::~SenderTemplateObj_tDescriptor()
{
}

bool SenderTemplateObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SenderTemplateObj_t *>(obj)!=NULL;
}

const char *SenderTemplateObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SenderTemplateObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SenderTemplateObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SenderTemplateObj_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SrcAddress";
        case 1: return "Lsp_Id";
        default: return NULL;
    }
}

const char *SenderTemplateObj_tDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "int";
        default: return NULL;
    }
}

const char *SenderTemplateObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SenderTemplateObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SenderTemplateObj_t *pp = (SenderTemplateObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SenderTemplateObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SenderTemplateObj_t *pp = (SenderTemplateObj_t *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->SrcAddress; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->Lsp_Id,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SenderTemplateObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SenderTemplateObj_t *pp = (SenderTemplateObj_t *)object; (void)pp;
    switch (field) {
        case 1: pp->Lsp_Id = string2long(value); return true;
        default: return false;
    }
}

const char *SenderTemplateObj_tDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        default: return NULL;
    }
}

void *SenderTemplateObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SenderTemplateObj_t *pp = (SenderTemplateObj_t *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->SrcAddress); break;
        default: return NULL;
    }
}

SenderTspecObj_t::SenderTspecObj_t()
{
    req_bandwidth = 0;
}

void doPacking(cCommBuffer *b, SenderTspecObj_t& a)
{
    doPacking(b,a.req_bandwidth);
}

void doUnpacking(cCommBuffer *b, SenderTspecObj_t& a)
{
    doUnpacking(b,a.req_bandwidth);
}

class SenderTspecObj_tDescriptor : public cClassDescriptor
{
  public:
    SenderTspecObj_tDescriptor();
    virtual ~SenderTspecObj_tDescriptor();

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

Register_ClassDescriptor(SenderTspecObj_tDescriptor);

SenderTspecObj_tDescriptor::SenderTspecObj_tDescriptor() : cClassDescriptor("SenderTspecObj_t", "")
{
}

SenderTspecObj_tDescriptor::~SenderTspecObj_tDescriptor()
{
}

bool SenderTspecObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SenderTspecObj_t *>(obj)!=NULL;
}

const char *SenderTspecObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SenderTspecObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SenderTspecObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SenderTspecObj_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "req_bandwidth";
        default: return NULL;
    }
}

const char *SenderTspecObj_tDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "double";
        default: return NULL;
    }
}

const char *SenderTspecObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SenderTspecObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SenderTspecObj_t *pp = (SenderTspecObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SenderTspecObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SenderTspecObj_t *pp = (SenderTspecObj_t *)object; (void)pp;
    switch (field) {
        case 0: double2string(pp->req_bandwidth,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SenderTspecObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SenderTspecObj_t *pp = (SenderTspecObj_t *)object; (void)pp;
    switch (field) {
        case 0: pp->req_bandwidth = string2double(value); return true;
        default: return false;
    }
}

const char *SenderTspecObj_tDescriptor::getFieldStructName(void *object, int field) const
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

void *SenderTspecObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SenderTspecObj_t *pp = (SenderTspecObj_t *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

FlowSpecObj_t::FlowSpecObj_t()
{
}

void doPacking(cCommBuffer *b, FlowSpecObj_t& a)
{
    doPacking(b,(SenderTspecObj_t&)a);
}

void doUnpacking(cCommBuffer *b, FlowSpecObj_t& a)
{
    doUnpacking(b,(SenderTspecObj_t&)a);
}

class FlowSpecObj_tDescriptor : public cClassDescriptor
{
  public:
    FlowSpecObj_tDescriptor();
    virtual ~FlowSpecObj_tDescriptor();

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

Register_ClassDescriptor(FlowSpecObj_tDescriptor);

FlowSpecObj_tDescriptor::FlowSpecObj_tDescriptor() : cClassDescriptor("FlowSpecObj_t", "SenderTspecObj_t")
{
}

FlowSpecObj_tDescriptor::~FlowSpecObj_tDescriptor()
{
}

bool FlowSpecObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FlowSpecObj_t *>(obj)!=NULL;
}

const char *FlowSpecObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FlowSpecObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int FlowSpecObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *FlowSpecObj_tDescriptor::getFieldName(void *object, int field) const
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

const char *FlowSpecObj_tDescriptor::getFieldTypeString(void *object, int field) const
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

const char *FlowSpecObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FlowSpecObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FlowSpecObj_t *pp = (FlowSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool FlowSpecObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    FlowSpecObj_t *pp = (FlowSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool FlowSpecObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FlowSpecObj_t *pp = (FlowSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *FlowSpecObj_tDescriptor::getFieldStructName(void *object, int field) const
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

void *FlowSpecObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FlowSpecObj_t *pp = (FlowSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

FilterSpecObj_t::FilterSpecObj_t()
{
}

void doPacking(cCommBuffer *b, FilterSpecObj_t& a)
{
    doPacking(b,(SenderTemplateObj_t&)a);
}

void doUnpacking(cCommBuffer *b, FilterSpecObj_t& a)
{
    doUnpacking(b,(SenderTemplateObj_t&)a);
}

class FilterSpecObj_tDescriptor : public cClassDescriptor
{
  public:
    FilterSpecObj_tDescriptor();
    virtual ~FilterSpecObj_tDescriptor();

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

Register_ClassDescriptor(FilterSpecObj_tDescriptor);

FilterSpecObj_tDescriptor::FilterSpecObj_tDescriptor() : cClassDescriptor("FilterSpecObj_t", "SenderTemplateObj_t")
{
}

FilterSpecObj_tDescriptor::~FilterSpecObj_tDescriptor()
{
}

bool FilterSpecObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FilterSpecObj_t *>(obj)!=NULL;
}

const char *FilterSpecObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FilterSpecObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int FilterSpecObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *FilterSpecObj_tDescriptor::getFieldName(void *object, int field) const
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

const char *FilterSpecObj_tDescriptor::getFieldTypeString(void *object, int field) const
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

const char *FilterSpecObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FilterSpecObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FilterSpecObj_t *pp = (FilterSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool FilterSpecObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    FilterSpecObj_t *pp = (FilterSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool FilterSpecObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FilterSpecObj_t *pp = (FilterSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *FilterSpecObj_tDescriptor::getFieldStructName(void *object, int field) const
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

void *FilterSpecObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FilterSpecObj_t *pp = (FilterSpecObj_t *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

LabelRequestObj_t::LabelRequestObj_t()
{
    prot = 0;
}

void doPacking(cCommBuffer *b, LabelRequestObj_t& a)
{
    doPacking(b,a.prot);
}

void doUnpacking(cCommBuffer *b, LabelRequestObj_t& a)
{
    doUnpacking(b,a.prot);
}

class LabelRequestObj_tDescriptor : public cClassDescriptor
{
  public:
    LabelRequestObj_tDescriptor();
    virtual ~LabelRequestObj_tDescriptor();

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

Register_ClassDescriptor(LabelRequestObj_tDescriptor);

LabelRequestObj_tDescriptor::LabelRequestObj_tDescriptor() : cClassDescriptor("LabelRequestObj_t", "")
{
}

LabelRequestObj_tDescriptor::~LabelRequestObj_tDescriptor()
{
}

bool LabelRequestObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LabelRequestObj_t *>(obj)!=NULL;
}

const char *LabelRequestObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LabelRequestObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int LabelRequestObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *LabelRequestObj_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "prot";
        default: return NULL;
    }
}

const char *LabelRequestObj_tDescriptor::getFieldTypeString(void *object, int field) const
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

const char *LabelRequestObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LabelRequestObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LabelRequestObj_t *pp = (LabelRequestObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool LabelRequestObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    LabelRequestObj_t *pp = (LabelRequestObj_t *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->prot,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool LabelRequestObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LabelRequestObj_t *pp = (LabelRequestObj_t *)object; (void)pp;
    switch (field) {
        case 0: pp->prot = string2long(value); return true;
        default: return false;
    }
}

const char *LabelRequestObj_tDescriptor::getFieldStructName(void *object, int field) const
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

void *LabelRequestObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LabelRequestObj_t *pp = (LabelRequestObj_t *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

SenderDescriptor_t::SenderDescriptor_t()
{
}

void doPacking(cCommBuffer *b, SenderDescriptor_t& a)
{
    doPacking(b,a.Sender_Template_Object);
    doPacking(b,a.Sender_Tspec_Object);
}

void doUnpacking(cCommBuffer *b, SenderDescriptor_t& a)
{
    doUnpacking(b,a.Sender_Template_Object);
    doUnpacking(b,a.Sender_Tspec_Object);
}

class SenderDescriptor_tDescriptor : public cClassDescriptor
{
  public:
    SenderDescriptor_tDescriptor();
    virtual ~SenderDescriptor_tDescriptor();

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

Register_ClassDescriptor(SenderDescriptor_tDescriptor);

SenderDescriptor_tDescriptor::SenderDescriptor_tDescriptor() : cClassDescriptor("SenderDescriptor_t", "")
{
}

SenderDescriptor_tDescriptor::~SenderDescriptor_tDescriptor()
{
}

bool SenderDescriptor_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SenderDescriptor_t *>(obj)!=NULL;
}

const char *SenderDescriptor_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SenderDescriptor_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SenderDescriptor_tDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SenderDescriptor_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Sender_Template_Object";
        case 1: return "Sender_Tspec_Object";
        default: return NULL;
    }
}

const char *SenderDescriptor_tDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SenderTemplateObj_t";
        case 1: return "SenderTspecObj_t";
        default: return NULL;
    }
}

const char *SenderDescriptor_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SenderDescriptor_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SenderDescriptor_t *pp = (SenderDescriptor_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SenderDescriptor_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SenderDescriptor_t *pp = (SenderDescriptor_t *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->Sender_Template_Object; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->Sender_Tspec_Object; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool SenderDescriptor_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SenderDescriptor_t *pp = (SenderDescriptor_t *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SenderDescriptor_tDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SenderTemplateObj_t"; break;
        case 1: return "SenderTspecObj_t"; break;
        default: return NULL;
    }
}

void *SenderDescriptor_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SenderDescriptor_t *pp = (SenderDescriptor_t *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->Sender_Template_Object); break;
        case 1: return (void *)(&pp->Sender_Tspec_Object); break;
        default: return NULL;
    }
}

EroObj_t::EroObj_t()
{
    L = false;
}

void doPacking(cCommBuffer *b, EroObj_t& a)
{
    doPacking(b,a.L);
    doPacking(b,a.node);
}

void doUnpacking(cCommBuffer *b, EroObj_t& a)
{
    doUnpacking(b,a.L);
    doUnpacking(b,a.node);
}

class EroObj_tDescriptor : public cClassDescriptor
{
  public:
    EroObj_tDescriptor();
    virtual ~EroObj_tDescriptor();

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

Register_ClassDescriptor(EroObj_tDescriptor);

EroObj_tDescriptor::EroObj_tDescriptor() : cClassDescriptor("EroObj_t", "")
{
}

EroObj_tDescriptor::~EroObj_tDescriptor()
{
}

bool EroObj_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<EroObj_t *>(obj)!=NULL;
}

const char *EroObj_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int EroObj_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int EroObj_tDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *EroObj_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "L";
        case 1: return "node";
        default: return NULL;
    }
}

const char *EroObj_tDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "IPAddress";
        default: return NULL;
    }
}

const char *EroObj_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int EroObj_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    EroObj_t *pp = (EroObj_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool EroObj_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    EroObj_t *pp = (EroObj_t *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->L,resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->node; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool EroObj_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    EroObj_t *pp = (EroObj_t *)object; (void)pp;
    switch (field) {
        case 0: pp->L = string2bool(value); return true;
        default: return false;
    }
}

const char *EroObj_tDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "IPAddress"; break;
        default: return NULL;
    }
}

void *EroObj_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    EroObj_t *pp = (EroObj_t *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->node); break;
        default: return NULL;
    }
}

FlowDescriptor_t::FlowDescriptor_t()
{
    label = 0;
}

void doPacking(cCommBuffer *b, FlowDescriptor_t& a)
{
    doPacking(b,a.Flowspec_Object);
    doPacking(b,a.Filter_Spec_Object);
    doPacking(b,a.RRO);
    doPacking(b,a.label);
}

void doUnpacking(cCommBuffer *b, FlowDescriptor_t& a)
{
    doUnpacking(b,a.Flowspec_Object);
    doUnpacking(b,a.Filter_Spec_Object);
    doUnpacking(b,a.RRO);
    doUnpacking(b,a.label);
}

class FlowDescriptor_tDescriptor : public cClassDescriptor
{
  public:
    FlowDescriptor_tDescriptor();
    virtual ~FlowDescriptor_tDescriptor();

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

Register_ClassDescriptor(FlowDescriptor_tDescriptor);

FlowDescriptor_tDescriptor::FlowDescriptor_tDescriptor() : cClassDescriptor("FlowDescriptor_t", "")
{
}

FlowDescriptor_tDescriptor::~FlowDescriptor_tDescriptor()
{
}

bool FlowDescriptor_tDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FlowDescriptor_t *>(obj)!=NULL;
}

const char *FlowDescriptor_tDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FlowDescriptor_tDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int FlowDescriptor_tDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *FlowDescriptor_tDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Flowspec_Object";
        case 1: return "Filter_Spec_Object";
        case 2: return "RRO";
        case 3: return "label";
        default: return NULL;
    }
}

const char *FlowDescriptor_tDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "FlowSpecObj_t";
        case 1: return "FilterSpecObj_t";
        case 2: return "IPAddressVector";
        case 3: return "int";
        default: return NULL;
    }
}

const char *FlowDescriptor_tDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FlowDescriptor_tDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FlowDescriptor_t *pp = (FlowDescriptor_t *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool FlowDescriptor_tDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    FlowDescriptor_t *pp = (FlowDescriptor_t *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->Flowspec_Object; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->Filter_Spec_Object; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->RRO; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->label,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool FlowDescriptor_tDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FlowDescriptor_t *pp = (FlowDescriptor_t *)object; (void)pp;
    switch (field) {
        case 3: pp->label = string2long(value); return true;
        default: return false;
    }
}

const char *FlowDescriptor_tDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "FlowSpecObj_t"; break;
        case 1: return "FilterSpecObj_t"; break;
        case 2: return "IPAddressVector"; break;
        default: return NULL;
    }
}

void *FlowDescriptor_tDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FlowDescriptor_t *pp = (FlowDescriptor_t *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->Flowspec_Object); break;
        case 1: return (void *)(&pp->Filter_Spec_Object); break;
        case 2: return (void *)(&pp->RRO); break;
        default: return NULL;
    }
}


