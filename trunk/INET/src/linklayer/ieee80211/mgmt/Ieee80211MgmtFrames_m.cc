//
// Generated file, do not edit! Created by opp_msgc 4.0 from linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee80211MgmtFrames_m.h"

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
    cEnum *e = cEnum::find("Ieee80211ReasonCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211ReasonCode"));
    e->insert(RC_UNSPECIFIED, "RC_UNSPECIFIED");
    e->insert(RC_PREV_AUTH_EXPIRED, "RC_PREV_AUTH_EXPIRED");
    e->insert(RC_DEAUTH_MS_LEAVING, "RC_DEAUTH_MS_LEAVING");
    e->insert(RC_DISASS_INACTIVITY, "RC_DISASS_INACTIVITY");
    e->insert(RC_DISASS_TOO_MANY_MS, "RC_DISASS_TOO_MANY_MS");
    e->insert(RC_NONAUTH_CLASS2, "RC_NONAUTH_CLASS2");
    e->insert(RC_NONASS_CLASS3, "RC_NONASS_CLASS3");
    e->insert(RC_DIASS_MS_LEAVING, "RC_DIASS_MS_LEAVING");
    e->insert(RC_NONAUTH_ASS_REQUEST, "RC_NONAUTH_ASS_REQUEST");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("Ieee80211StatusCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211StatusCode"));
    e->insert(SC_SUCCESSFUL, "SC_SUCCESSFUL");
    e->insert(SC_UNSPECIFIED, "SC_UNSPECIFIED");
    e->insert(SC_UNSUP_CAP, "SC_UNSUP_CAP");
    e->insert(SC_REASS_DENIED, "SC_REASS_DENIED");
    e->insert(SC_ASS_DENIED_UNKNOWN, "SC_ASS_DENIED_UNKNOWN");
    e->insert(SC_AUTH_ALG0_UNSUP, "SC_AUTH_ALG0_UNSUP");
    e->insert(SC_AUTH_OUT_OF_SEQ, "SC_AUTH_OUT_OF_SEQ");
    e->insert(SC_AUTH_CHALLENGE_FAIL, "SC_AUTH_CHALLENGE_FAIL");
    e->insert(SC_AUTH_TIMEOUT, "SC_AUTH_TIMEOUT");
    e->insert(SC_ASS_TOO_MANY_MS, "SC_ASS_TOO_MANY_MS");
    e->insert(SC_DATARATE_UNSUP, "SC_DATARATE_UNSUP");
);

Ieee80211CapabilityInformation::Ieee80211CapabilityInformation()
{
    ESS = 0;
    IBSS = 0;
    CFPollable = 0;
    CFPollRequest = 0;
    privacy = 0;
}

void doPacking(cCommBuffer *b, Ieee80211CapabilityInformation& a)
{
    doPacking(b,a.ESS);
    doPacking(b,a.IBSS);
    doPacking(b,a.CFPollable);
    doPacking(b,a.CFPollRequest);
    doPacking(b,a.privacy);
}

void doUnpacking(cCommBuffer *b, Ieee80211CapabilityInformation& a)
{
    doUnpacking(b,a.ESS);
    doUnpacking(b,a.IBSS);
    doUnpacking(b,a.CFPollable);
    doUnpacking(b,a.CFPollRequest);
    doUnpacking(b,a.privacy);
}

class Ieee80211CapabilityInformationDescriptor : public cClassDescriptor
{
  public:
    Ieee80211CapabilityInformationDescriptor();
    virtual ~Ieee80211CapabilityInformationDescriptor();

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

Register_ClassDescriptor(Ieee80211CapabilityInformationDescriptor);

Ieee80211CapabilityInformationDescriptor::Ieee80211CapabilityInformationDescriptor() : cClassDescriptor("Ieee80211CapabilityInformation", "")
{
}

Ieee80211CapabilityInformationDescriptor::~Ieee80211CapabilityInformationDescriptor()
{
}

bool Ieee80211CapabilityInformationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211CapabilityInformation *>(obj)!=NULL;
}

const char *Ieee80211CapabilityInformationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211CapabilityInformationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int Ieee80211CapabilityInformationDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "ESS";
        case 1: return "IBSS";
        case 2: return "CFPollable";
        case 3: return "CFPollRequest";
        case 4: return "privacy";
        default: return NULL;
    }
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "bool";
        case 2: return "bool";
        case 3: return "bool";
        case 4: return "bool";
        default: return NULL;
    }
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211CapabilityInformationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211CapabilityInformationDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->ESS,resultbuf,bufsize); return true;
        case 1: bool2string(pp->IBSS,resultbuf,bufsize); return true;
        case 2: bool2string(pp->CFPollable,resultbuf,bufsize); return true;
        case 3: bool2string(pp->CFPollRequest,resultbuf,bufsize); return true;
        case 4: bool2string(pp->privacy,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211CapabilityInformationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        case 0: pp->ESS = string2bool(value); return true;
        case 1: pp->IBSS = string2bool(value); return true;
        case 2: pp->CFPollable = string2bool(value); return true;
        case 3: pp->CFPollRequest = string2bool(value); return true;
        case 4: pp->privacy = string2bool(value); return true;
        default: return false;
    }
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211CapabilityInformationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Ieee80211HandoverParameters::Ieee80211HandoverParameters()
{
    avgBackoffTime = 0;
    avgWaitTime = 0;
    avgErrorRate = 0;
    estAvailBW = 0;
}

void doPacking(cCommBuffer *b, Ieee80211HandoverParameters& a)
{
    doPacking(b,a.avgBackoffTime);
    doPacking(b,a.avgWaitTime);
    doPacking(b,a.avgErrorRate);
    doPacking(b,a.estAvailBW);
}

void doUnpacking(cCommBuffer *b, Ieee80211HandoverParameters& a)
{
    doUnpacking(b,a.avgBackoffTime);
    doUnpacking(b,a.avgWaitTime);
    doUnpacking(b,a.avgErrorRate);
    doUnpacking(b,a.estAvailBW);
}

class Ieee80211HandoverParametersDescriptor : public cClassDescriptor
{
  public:
    Ieee80211HandoverParametersDescriptor();
    virtual ~Ieee80211HandoverParametersDescriptor();

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

Register_ClassDescriptor(Ieee80211HandoverParametersDescriptor);

Ieee80211HandoverParametersDescriptor::Ieee80211HandoverParametersDescriptor() : cClassDescriptor("Ieee80211HandoverParameters", "")
{
}

Ieee80211HandoverParametersDescriptor::~Ieee80211HandoverParametersDescriptor()
{
}

bool Ieee80211HandoverParametersDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211HandoverParameters *>(obj)!=NULL;
}

const char *Ieee80211HandoverParametersDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211HandoverParametersDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int Ieee80211HandoverParametersDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *Ieee80211HandoverParametersDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "avgBackoffTime";
        case 1: return "avgWaitTime";
        case 2: return "avgErrorRate";
        case 3: return "estAvailBW";
        default: return NULL;
    }
}

const char *Ieee80211HandoverParametersDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "double";
        case 1: return "double";
        case 2: return "double";
        case 3: return "double";
        default: return NULL;
    }
}

const char *Ieee80211HandoverParametersDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211HandoverParametersDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211HandoverParametersDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        case 0: double2string(pp->avgBackoffTime,resultbuf,bufsize); return true;
        case 1: double2string(pp->avgWaitTime,resultbuf,bufsize); return true;
        case 2: double2string(pp->avgErrorRate,resultbuf,bufsize); return true;
        case 3: double2string(pp->estAvailBW,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211HandoverParametersDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        case 0: pp->avgBackoffTime = string2double(value); return true;
        case 1: pp->avgWaitTime = string2double(value); return true;
        case 2: pp->avgErrorRate = string2double(value); return true;
        case 3: pp->estAvailBW = string2double(value); return true;
        default: return false;
    }
}

const char *Ieee80211HandoverParametersDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211HandoverParametersDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Ieee80211SupportedRatesElement::Ieee80211SupportedRatesElement()
{
    numRates = 0;
    for (unsigned int i=0; i<8; i++)
        rate[i] = 0;
}

void doPacking(cCommBuffer *b, Ieee80211SupportedRatesElement& a)
{
    doPacking(b,a.numRates);
    doPacking(b,a.rate,8);
}

void doUnpacking(cCommBuffer *b, Ieee80211SupportedRatesElement& a)
{
    doUnpacking(b,a.numRates);
    doUnpacking(b,a.rate,8);
}

class Ieee80211SupportedRatesElementDescriptor : public cClassDescriptor
{
  public:
    Ieee80211SupportedRatesElementDescriptor();
    virtual ~Ieee80211SupportedRatesElementDescriptor();

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

Register_ClassDescriptor(Ieee80211SupportedRatesElementDescriptor);

Ieee80211SupportedRatesElementDescriptor::Ieee80211SupportedRatesElementDescriptor() : cClassDescriptor("Ieee80211SupportedRatesElement", "")
{
}

Ieee80211SupportedRatesElementDescriptor::~Ieee80211SupportedRatesElementDescriptor()
{
}

bool Ieee80211SupportedRatesElementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211SupportedRatesElement *>(obj)!=NULL;
}

const char *Ieee80211SupportedRatesElementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211SupportedRatesElementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211SupportedRatesElementDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "numRates";
        case 1: return "rate";
        default: return NULL;
    }
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "short";
        case 1: return "double";
        default: return NULL;
    }
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211SupportedRatesElementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        case 1: return 8;
        default: return 0;
    }
}

bool Ieee80211SupportedRatesElementDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->numRates,resultbuf,bufsize); return true;
        case 1: if (i>=8) return false;
                double2string(pp->rate[i],resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211SupportedRatesElementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        case 0: pp->numRates = string2long(value); return true;
        case 1: if (i>=8) return false;
                pp->rate[i] = string2double(value); return true;
        default: return false;
    }
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211SupportedRatesElementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211FrameBody);

Ieee80211FrameBody::Ieee80211FrameBody() : cObject()
{
    this->bodyLength_var = 0;
}

Ieee80211FrameBody::Ieee80211FrameBody(const Ieee80211FrameBody& other) : cObject()
{
    operator=(other);
}

Ieee80211FrameBody::~Ieee80211FrameBody()
{
}

Ieee80211FrameBody& Ieee80211FrameBody::operator=(const Ieee80211FrameBody& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->bodyLength_var = other.bodyLength_var;
    return *this;
}

void Ieee80211FrameBody::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->bodyLength_var);
}

void Ieee80211FrameBody::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->bodyLength_var);
}

short Ieee80211FrameBody::getBodyLength() const
{
    return bodyLength_var;
}

void Ieee80211FrameBody::setBodyLength(short bodyLength_var)
{
    this->bodyLength_var = bodyLength_var;
}

class Ieee80211FrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211FrameBodyDescriptor();
    virtual ~Ieee80211FrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211FrameBodyDescriptor);

Ieee80211FrameBodyDescriptor::Ieee80211FrameBodyDescriptor() : cClassDescriptor("Ieee80211FrameBody", "cObject")
{
}

Ieee80211FrameBodyDescriptor::~Ieee80211FrameBodyDescriptor()
{
}

bool Ieee80211FrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211FrameBody *>(obj)!=NULL;
}

const char *Ieee80211FrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211FrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211FrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211FrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bodyLength";
        default: return NULL;
    }
}

const char *Ieee80211FrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "short";
        default: return NULL;
    }
}

const char *Ieee80211FrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211FrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211FrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getBodyLength(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211FrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setBodyLength(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211FrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211FrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211AuthenticationFrameBody);

Ieee80211AuthenticationFrameBody::Ieee80211AuthenticationFrameBody() : Ieee80211FrameBody()
{
    this->setBodyLength(6);

    this->sequenceNumber_var = 0;
    this->statusCode_var = 0;
    this->isLast_var = 0;
}

Ieee80211AuthenticationFrameBody::Ieee80211AuthenticationFrameBody(const Ieee80211AuthenticationFrameBody& other) : Ieee80211FrameBody()
{
    operator=(other);
}

Ieee80211AuthenticationFrameBody::~Ieee80211AuthenticationFrameBody()
{
}

Ieee80211AuthenticationFrameBody& Ieee80211AuthenticationFrameBody::operator=(const Ieee80211AuthenticationFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211FrameBody::operator=(other);
    this->sequenceNumber_var = other.sequenceNumber_var;
    this->statusCode_var = other.statusCode_var;
    this->isLast_var = other.isLast_var;
    return *this;
}

void Ieee80211AuthenticationFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->sequenceNumber_var);
    doPacking(b,this->statusCode_var);
    doPacking(b,this->isLast_var);
}

void Ieee80211AuthenticationFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->sequenceNumber_var);
    doUnpacking(b,this->statusCode_var);
    doUnpacking(b,this->isLast_var);
}

unsigned short Ieee80211AuthenticationFrameBody::getSequenceNumber() const
{
    return sequenceNumber_var;
}

void Ieee80211AuthenticationFrameBody::setSequenceNumber(unsigned short sequenceNumber_var)
{
    this->sequenceNumber_var = sequenceNumber_var;
}

int Ieee80211AuthenticationFrameBody::getStatusCode() const
{
    return statusCode_var;
}

void Ieee80211AuthenticationFrameBody::setStatusCode(int statusCode_var)
{
    this->statusCode_var = statusCode_var;
}

bool Ieee80211AuthenticationFrameBody::getIsLast() const
{
    return isLast_var;
}

void Ieee80211AuthenticationFrameBody::setIsLast(bool isLast_var)
{
    this->isLast_var = isLast_var;
}

class Ieee80211AuthenticationFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AuthenticationFrameBodyDescriptor();
    virtual ~Ieee80211AuthenticationFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211AuthenticationFrameBodyDescriptor);

Ieee80211AuthenticationFrameBodyDescriptor::Ieee80211AuthenticationFrameBodyDescriptor() : cClassDescriptor("Ieee80211AuthenticationFrameBody", "Ieee80211FrameBody")
{
}

Ieee80211AuthenticationFrameBodyDescriptor::~Ieee80211AuthenticationFrameBodyDescriptor()
{
}

bool Ieee80211AuthenticationFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AuthenticationFrameBody *>(obj)!=NULL;
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AuthenticationFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee80211AuthenticationFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "sequenceNumber";
        case 1: return "statusCode";
        case 2: return "isLast";
        default: return NULL;
    }
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned short";
        case 1: return "int";
        case 2: return "bool";
        default: return NULL;
    }
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "Ieee80211StatusCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211AuthenticationFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211AuthenticationFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getSequenceNumber(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getStatusCode(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->getIsLast(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211AuthenticationFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSequenceNumber(string2ulong(value)); return true;
        case 1: pp->setStatusCode(string2long(value)); return true;
        case 2: pp->setIsLast(string2bool(value)); return true;
        default: return false;
    }
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211AuthenticationFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211DeauthenticationFrameBody);

Ieee80211DeauthenticationFrameBody::Ieee80211DeauthenticationFrameBody() : Ieee80211FrameBody()
{
    this->setBodyLength(2);

    this->reasonCode_var = 0;
}

Ieee80211DeauthenticationFrameBody::Ieee80211DeauthenticationFrameBody(const Ieee80211DeauthenticationFrameBody& other) : Ieee80211FrameBody()
{
    operator=(other);
}

Ieee80211DeauthenticationFrameBody::~Ieee80211DeauthenticationFrameBody()
{
}

Ieee80211DeauthenticationFrameBody& Ieee80211DeauthenticationFrameBody::operator=(const Ieee80211DeauthenticationFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211FrameBody::operator=(other);
    this->reasonCode_var = other.reasonCode_var;
    return *this;
}

void Ieee80211DeauthenticationFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211DeauthenticationFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->reasonCode_var);
}

int Ieee80211DeauthenticationFrameBody::getReasonCode() const
{
    return reasonCode_var;
}

void Ieee80211DeauthenticationFrameBody::setReasonCode(int reasonCode_var)
{
    this->reasonCode_var = reasonCode_var;
}

class Ieee80211DeauthenticationFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DeauthenticationFrameBodyDescriptor();
    virtual ~Ieee80211DeauthenticationFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211DeauthenticationFrameBodyDescriptor);

Ieee80211DeauthenticationFrameBodyDescriptor::Ieee80211DeauthenticationFrameBodyDescriptor() : cClassDescriptor("Ieee80211DeauthenticationFrameBody", "Ieee80211FrameBody")
{
}

Ieee80211DeauthenticationFrameBodyDescriptor::~Ieee80211DeauthenticationFrameBodyDescriptor()
{
}

bool Ieee80211DeauthenticationFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DeauthenticationFrameBody *>(obj)!=NULL;
}

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DeauthenticationFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DeauthenticationFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "reasonCode";
        default: return NULL;
    }
}

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "Ieee80211ReasonCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211DeauthenticationFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211DeauthenticationFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getReasonCode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211DeauthenticationFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setReasonCode(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211DisassociationFrameBody);

Ieee80211DisassociationFrameBody::Ieee80211DisassociationFrameBody() : Ieee80211FrameBody()
{
    this->setBodyLength(2);

    this->reasonCode_var = 0;
}

Ieee80211DisassociationFrameBody::Ieee80211DisassociationFrameBody(const Ieee80211DisassociationFrameBody& other) : Ieee80211FrameBody()
{
    operator=(other);
}

Ieee80211DisassociationFrameBody::~Ieee80211DisassociationFrameBody()
{
}

Ieee80211DisassociationFrameBody& Ieee80211DisassociationFrameBody::operator=(const Ieee80211DisassociationFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211FrameBody::operator=(other);
    this->reasonCode_var = other.reasonCode_var;
    return *this;
}

void Ieee80211DisassociationFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211DisassociationFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->reasonCode_var);
}

int Ieee80211DisassociationFrameBody::getReasonCode() const
{
    return reasonCode_var;
}

void Ieee80211DisassociationFrameBody::setReasonCode(int reasonCode_var)
{
    this->reasonCode_var = reasonCode_var;
}

class Ieee80211DisassociationFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DisassociationFrameBodyDescriptor();
    virtual ~Ieee80211DisassociationFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211DisassociationFrameBodyDescriptor);

Ieee80211DisassociationFrameBodyDescriptor::Ieee80211DisassociationFrameBodyDescriptor() : cClassDescriptor("Ieee80211DisassociationFrameBody", "Ieee80211FrameBody")
{
}

Ieee80211DisassociationFrameBodyDescriptor::~Ieee80211DisassociationFrameBodyDescriptor()
{
}

bool Ieee80211DisassociationFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DisassociationFrameBody *>(obj)!=NULL;
}

const char *Ieee80211DisassociationFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DisassociationFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DisassociationFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "reasonCode";
        default: return NULL;
    }
}

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "Ieee80211ReasonCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211DisassociationFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211DisassociationFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getReasonCode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211DisassociationFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setReasonCode(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211DisassociationFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeRequestFrameBody);

Ieee80211ProbeRequestFrameBody::Ieee80211ProbeRequestFrameBody() : Ieee80211FrameBody()
{
    this->setBodyLength(12);

    this->SSID_var = 0;
}

Ieee80211ProbeRequestFrameBody::Ieee80211ProbeRequestFrameBody(const Ieee80211ProbeRequestFrameBody& other) : Ieee80211FrameBody()
{
    operator=(other);
}

Ieee80211ProbeRequestFrameBody::~Ieee80211ProbeRequestFrameBody()
{
}

Ieee80211ProbeRequestFrameBody& Ieee80211ProbeRequestFrameBody::operator=(const Ieee80211ProbeRequestFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211FrameBody::operator=(other);
    this->SSID_var = other.SSID_var;
    this->supportedRates_var = other.supportedRates_var;
    return *this;
}

void Ieee80211ProbeRequestFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211ProbeRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->supportedRates_var);
}

const char * Ieee80211ProbeRequestFrameBody::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211ProbeRequestFrameBody::setSSID(const char * SSID_var)
{
    this->SSID_var = SSID_var;
}

Ieee80211SupportedRatesElement& Ieee80211ProbeRequestFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211ProbeRequestFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates_var)
{
    this->supportedRates_var = supportedRates_var;
}

class Ieee80211ProbeRequestFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeRequestFrameBodyDescriptor();
    virtual ~Ieee80211ProbeRequestFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeRequestFrameBodyDescriptor);

Ieee80211ProbeRequestFrameBodyDescriptor::Ieee80211ProbeRequestFrameBodyDescriptor() : cClassDescriptor("Ieee80211ProbeRequestFrameBody", "Ieee80211FrameBody")
{
}

Ieee80211ProbeRequestFrameBodyDescriptor::~Ieee80211ProbeRequestFrameBodyDescriptor()
{
}

bool Ieee80211ProbeRequestFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeRequestFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeRequestFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211ProbeRequestFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SSID";
        case 1: return "supportedRates";
        default: return NULL;
    }
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "Ieee80211SupportedRatesElement";
        default: return NULL;
    }
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeRequestFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ProbeRequestFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getSSID(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSupportedRates(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211ProbeRequestFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSSID((value)); return true;
        default: return false;
    }
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "Ieee80211SupportedRatesElement"; break;
        default: return NULL;
    }
}

void *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSupportedRates()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationRequestFrameBody);

Ieee80211AssociationRequestFrameBody::Ieee80211AssociationRequestFrameBody() : Ieee80211FrameBody()
{
    this->setBodyLength(16);

    this->SSID_var = 0;
}

Ieee80211AssociationRequestFrameBody::Ieee80211AssociationRequestFrameBody(const Ieee80211AssociationRequestFrameBody& other) : Ieee80211FrameBody()
{
    operator=(other);
}

Ieee80211AssociationRequestFrameBody::~Ieee80211AssociationRequestFrameBody()
{
}

Ieee80211AssociationRequestFrameBody& Ieee80211AssociationRequestFrameBody::operator=(const Ieee80211AssociationRequestFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211FrameBody::operator=(other);
    this->SSID_var = other.SSID_var;
    this->supportedRates_var = other.supportedRates_var;
    return *this;
}

void Ieee80211AssociationRequestFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211AssociationRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->supportedRates_var);
}

const char * Ieee80211AssociationRequestFrameBody::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211AssociationRequestFrameBody::setSSID(const char * SSID_var)
{
    this->SSID_var = SSID_var;
}

Ieee80211SupportedRatesElement& Ieee80211AssociationRequestFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211AssociationRequestFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates_var)
{
    this->supportedRates_var = supportedRates_var;
}

class Ieee80211AssociationRequestFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationRequestFrameBodyDescriptor();
    virtual ~Ieee80211AssociationRequestFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationRequestFrameBodyDescriptor);

Ieee80211AssociationRequestFrameBodyDescriptor::Ieee80211AssociationRequestFrameBodyDescriptor() : cClassDescriptor("Ieee80211AssociationRequestFrameBody", "Ieee80211FrameBody")
{
}

Ieee80211AssociationRequestFrameBodyDescriptor::~Ieee80211AssociationRequestFrameBodyDescriptor()
{
}

bool Ieee80211AssociationRequestFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationRequestFrameBody *>(obj)!=NULL;
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationRequestFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211AssociationRequestFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SSID";
        case 1: return "supportedRates";
        default: return NULL;
    }
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "Ieee80211SupportedRatesElement";
        default: return NULL;
    }
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AssociationRequestFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211AssociationRequestFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getSSID(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSupportedRates(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211AssociationRequestFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSSID((value)); return true;
        default: return false;
    }
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "Ieee80211SupportedRatesElement"; break;
        default: return NULL;
    }
}

void *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSupportedRates()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationRequestFrameBody);

Ieee80211ReassociationRequestFrameBody::Ieee80211ReassociationRequestFrameBody() : Ieee80211AssociationRequestFrameBody()
{
    this->setBodyLength(26);

}

Ieee80211ReassociationRequestFrameBody::Ieee80211ReassociationRequestFrameBody(const Ieee80211ReassociationRequestFrameBody& other) : Ieee80211AssociationRequestFrameBody()
{
    operator=(other);
}

Ieee80211ReassociationRequestFrameBody::~Ieee80211ReassociationRequestFrameBody()
{
}

Ieee80211ReassociationRequestFrameBody& Ieee80211ReassociationRequestFrameBody::operator=(const Ieee80211ReassociationRequestFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211AssociationRequestFrameBody::operator=(other);
    this->currentAP_var = other.currentAP_var;
    return *this;
}

void Ieee80211ReassociationRequestFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211AssociationRequestFrameBody::parsimPack(b);
    doPacking(b,this->currentAP_var);
}

void Ieee80211ReassociationRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211AssociationRequestFrameBody::parsimUnpack(b);
    doUnpacking(b,this->currentAP_var);
}

MACAddress& Ieee80211ReassociationRequestFrameBody::getCurrentAP()
{
    return currentAP_var;
}

void Ieee80211ReassociationRequestFrameBody::setCurrentAP(const MACAddress& currentAP_var)
{
    this->currentAP_var = currentAP_var;
}

class Ieee80211ReassociationRequestFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationRequestFrameBodyDescriptor();
    virtual ~Ieee80211ReassociationRequestFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationRequestFrameBodyDescriptor);

Ieee80211ReassociationRequestFrameBodyDescriptor::Ieee80211ReassociationRequestFrameBodyDescriptor() : cClassDescriptor("Ieee80211ReassociationRequestFrameBody", "Ieee80211AssociationRequestFrameBody")
{
}

Ieee80211ReassociationRequestFrameBodyDescriptor::~Ieee80211ReassociationRequestFrameBodyDescriptor()
{
}

bool Ieee80211ReassociationRequestFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationRequestFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "currentAP";
        default: return NULL;
    }
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress";
        default: return NULL;
    }
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationRequestFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCurrentAP(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211ReassociationRequestFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress"; break;
        default: return NULL;
    }
}

void *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCurrentAP()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationResponseFrameBody);

Ieee80211AssociationResponseFrameBody::Ieee80211AssociationResponseFrameBody() : Ieee80211FrameBody()
{
    this->setBodyLength(26);

    this->statusCode_var = 0;
    this->aid_var = 0;
}

Ieee80211AssociationResponseFrameBody::Ieee80211AssociationResponseFrameBody(const Ieee80211AssociationResponseFrameBody& other) : Ieee80211FrameBody()
{
    operator=(other);
}

Ieee80211AssociationResponseFrameBody::~Ieee80211AssociationResponseFrameBody()
{
}

Ieee80211AssociationResponseFrameBody& Ieee80211AssociationResponseFrameBody::operator=(const Ieee80211AssociationResponseFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211FrameBody::operator=(other);
    this->statusCode_var = other.statusCode_var;
    this->aid_var = other.aid_var;
    this->supportedRates_var = other.supportedRates_var;
    return *this;
}

void Ieee80211AssociationResponseFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->statusCode_var);
    doPacking(b,this->aid_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211AssociationResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->statusCode_var);
    doUnpacking(b,this->aid_var);
    doUnpacking(b,this->supportedRates_var);
}

int Ieee80211AssociationResponseFrameBody::getStatusCode() const
{
    return statusCode_var;
}

void Ieee80211AssociationResponseFrameBody::setStatusCode(int statusCode_var)
{
    this->statusCode_var = statusCode_var;
}

short Ieee80211AssociationResponseFrameBody::getAid() const
{
    return aid_var;
}

void Ieee80211AssociationResponseFrameBody::setAid(short aid_var)
{
    this->aid_var = aid_var;
}

Ieee80211SupportedRatesElement& Ieee80211AssociationResponseFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211AssociationResponseFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates_var)
{
    this->supportedRates_var = supportedRates_var;
}

class Ieee80211AssociationResponseFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationResponseFrameBodyDescriptor();
    virtual ~Ieee80211AssociationResponseFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationResponseFrameBodyDescriptor);

Ieee80211AssociationResponseFrameBodyDescriptor::Ieee80211AssociationResponseFrameBodyDescriptor() : cClassDescriptor("Ieee80211AssociationResponseFrameBody", "Ieee80211FrameBody")
{
}

Ieee80211AssociationResponseFrameBodyDescriptor::~Ieee80211AssociationResponseFrameBodyDescriptor()
{
}

bool Ieee80211AssociationResponseFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationResponseFrameBody *>(obj)!=NULL;
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationResponseFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee80211AssociationResponseFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "statusCode";
        case 1: return "aid";
        case 2: return "supportedRates";
        default: return NULL;
    }
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "short";
        case 2: return "Ieee80211SupportedRatesElement";
        default: return NULL;
    }
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "Ieee80211StatusCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211AssociationResponseFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211AssociationResponseFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getStatusCode(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getAid(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getSupportedRates(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211AssociationResponseFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatusCode(string2long(value)); return true;
        case 1: pp->setAid(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "Ieee80211SupportedRatesElement"; break;
        default: return NULL;
    }
}

void *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSupportedRates()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationResponseFrameBody);

Ieee80211ReassociationResponseFrameBody::Ieee80211ReassociationResponseFrameBody() : Ieee80211AssociationResponseFrameBody()
{
}

Ieee80211ReassociationResponseFrameBody::Ieee80211ReassociationResponseFrameBody(const Ieee80211ReassociationResponseFrameBody& other) : Ieee80211AssociationResponseFrameBody()
{
    operator=(other);
}

Ieee80211ReassociationResponseFrameBody::~Ieee80211ReassociationResponseFrameBody()
{
}

Ieee80211ReassociationResponseFrameBody& Ieee80211ReassociationResponseFrameBody::operator=(const Ieee80211ReassociationResponseFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211AssociationResponseFrameBody::operator=(other);
    return *this;
}

void Ieee80211ReassociationResponseFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211AssociationResponseFrameBody::parsimPack(b);
}

void Ieee80211ReassociationResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211AssociationResponseFrameBody::parsimUnpack(b);
}

class Ieee80211ReassociationResponseFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationResponseFrameBodyDescriptor();
    virtual ~Ieee80211ReassociationResponseFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationResponseFrameBodyDescriptor);

Ieee80211ReassociationResponseFrameBodyDescriptor::Ieee80211ReassociationResponseFrameBodyDescriptor() : cClassDescriptor("Ieee80211ReassociationResponseFrameBody", "Ieee80211AssociationResponseFrameBody")
{
}

Ieee80211ReassociationResponseFrameBodyDescriptor::~Ieee80211ReassociationResponseFrameBodyDescriptor()
{
}

bool Ieee80211ReassociationResponseFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationResponseFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldName(void *object, int field) const
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

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationResponseFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool Ieee80211ReassociationResponseFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211BeaconFrameBody);

Ieee80211BeaconFrameBody::Ieee80211BeaconFrameBody() : Ieee80211FrameBody()
{
    this->setBodyLength(50);

    this->SSID_var = 0;
    this->beaconInterval_var = 0;
    this->channelNumber_var = 0;
}

Ieee80211BeaconFrameBody::Ieee80211BeaconFrameBody(const Ieee80211BeaconFrameBody& other) : Ieee80211FrameBody()
{
    operator=(other);
}

Ieee80211BeaconFrameBody::~Ieee80211BeaconFrameBody()
{
}

Ieee80211BeaconFrameBody& Ieee80211BeaconFrameBody::operator=(const Ieee80211BeaconFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211FrameBody::operator=(other);
    this->SSID_var = other.SSID_var;
    this->supportedRates_var = other.supportedRates_var;
    this->beaconInterval_var = other.beaconInterval_var;
    this->channelNumber_var = other.channelNumber_var;
    this->handoverParameters_var = other.handoverParameters_var;
    return *this;
}

void Ieee80211BeaconFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
    doPacking(b,this->beaconInterval_var);
    doPacking(b,this->channelNumber_var);
    doPacking(b,this->handoverParameters_var);
}

void Ieee80211BeaconFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->supportedRates_var);
    doUnpacking(b,this->beaconInterval_var);
    doUnpacking(b,this->channelNumber_var);
    doUnpacking(b,this->handoverParameters_var);
}

const char * Ieee80211BeaconFrameBody::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211BeaconFrameBody::setSSID(const char * SSID_var)
{
    this->SSID_var = SSID_var;
}

Ieee80211SupportedRatesElement& Ieee80211BeaconFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211BeaconFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates_var)
{
    this->supportedRates_var = supportedRates_var;
}

simtime_t Ieee80211BeaconFrameBody::getBeaconInterval() const
{
    return beaconInterval_var;
}

void Ieee80211BeaconFrameBody::setBeaconInterval(simtime_t beaconInterval_var)
{
    this->beaconInterval_var = beaconInterval_var;
}

int Ieee80211BeaconFrameBody::getChannelNumber() const
{
    return channelNumber_var;
}

void Ieee80211BeaconFrameBody::setChannelNumber(int channelNumber_var)
{
    this->channelNumber_var = channelNumber_var;
}

Ieee80211HandoverParameters& Ieee80211BeaconFrameBody::getHandoverParameters()
{
    return handoverParameters_var;
}

void Ieee80211BeaconFrameBody::setHandoverParameters(const Ieee80211HandoverParameters& handoverParameters_var)
{
    this->handoverParameters_var = handoverParameters_var;
}

class Ieee80211BeaconFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211BeaconFrameBodyDescriptor();
    virtual ~Ieee80211BeaconFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211BeaconFrameBodyDescriptor);

Ieee80211BeaconFrameBodyDescriptor::Ieee80211BeaconFrameBodyDescriptor() : cClassDescriptor("Ieee80211BeaconFrameBody", "Ieee80211FrameBody")
{
}

Ieee80211BeaconFrameBodyDescriptor::~Ieee80211BeaconFrameBodyDescriptor()
{
}

bool Ieee80211BeaconFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211BeaconFrameBody *>(obj)!=NULL;
}

const char *Ieee80211BeaconFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211BeaconFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int Ieee80211BeaconFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "SSID";
        case 1: return "supportedRates";
        case 2: return "beaconInterval";
        case 3: return "channelNumber";
        case 4: return "handoverParameters";
        default: return NULL;
    }
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "Ieee80211SupportedRatesElement";
        case 2: return "simtime_t";
        case 3: return "int";
        case 4: return "Ieee80211HandoverParameters";
        default: return NULL;
    }
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211BeaconFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211BeaconFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getSSID(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSupportedRates(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: double2string(pp->getBeaconInterval(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getChannelNumber(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getHandoverParameters(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211BeaconFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSSID((value)); return true;
        case 2: pp->setBeaconInterval(string2double(value)); return true;
        case 3: pp->setChannelNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "Ieee80211SupportedRatesElement"; break;
        case 4: return "Ieee80211HandoverParameters"; break;
        default: return NULL;
    }
}

void *Ieee80211BeaconFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSupportedRates()); break;
        case 4: return (void *)(&pp->getHandoverParameters()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeResponseFrameBody);

Ieee80211ProbeResponseFrameBody::Ieee80211ProbeResponseFrameBody() : Ieee80211BeaconFrameBody()
{
}

Ieee80211ProbeResponseFrameBody::Ieee80211ProbeResponseFrameBody(const Ieee80211ProbeResponseFrameBody& other) : Ieee80211BeaconFrameBody()
{
    operator=(other);
}

Ieee80211ProbeResponseFrameBody::~Ieee80211ProbeResponseFrameBody()
{
}

Ieee80211ProbeResponseFrameBody& Ieee80211ProbeResponseFrameBody::operator=(const Ieee80211ProbeResponseFrameBody& other)
{
    if (this==&other) return *this;
    Ieee80211BeaconFrameBody::operator=(other);
    return *this;
}

void Ieee80211ProbeResponseFrameBody::parsimPack(cCommBuffer *b)
{
    Ieee80211BeaconFrameBody::parsimPack(b);
}

void Ieee80211ProbeResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    Ieee80211BeaconFrameBody::parsimUnpack(b);
}

class Ieee80211ProbeResponseFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeResponseFrameBodyDescriptor();
    virtual ~Ieee80211ProbeResponseFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeResponseFrameBodyDescriptor);

Ieee80211ProbeResponseFrameBodyDescriptor::Ieee80211ProbeResponseFrameBodyDescriptor() : cClassDescriptor("Ieee80211ProbeResponseFrameBody", "Ieee80211BeaconFrameBody")
{
}

Ieee80211ProbeResponseFrameBodyDescriptor::~Ieee80211ProbeResponseFrameBodyDescriptor()
{
}

bool Ieee80211ProbeResponseFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeResponseFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeResponseFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211ProbeResponseFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldName(void *object, int field) const
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

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeResponseFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ProbeResponseFrameBodyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool Ieee80211ProbeResponseFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211AuthenticationFrame);

Ieee80211AuthenticationFrame::Ieee80211AuthenticationFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_AUTHENTICATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AuthenticationFrame::Ieee80211AuthenticationFrame(const Ieee80211AuthenticationFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211AuthenticationFrame::~Ieee80211AuthenticationFrame()
{
}

Ieee80211AuthenticationFrame& Ieee80211AuthenticationFrame::operator=(const Ieee80211AuthenticationFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211AuthenticationFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AuthenticationFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211AuthenticationFrameBody& Ieee80211AuthenticationFrame::getBody()
{
    return body_var;
}

void Ieee80211AuthenticationFrame::setBody(const Ieee80211AuthenticationFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211AuthenticationFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AuthenticationFrameDescriptor();
    virtual ~Ieee80211AuthenticationFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211AuthenticationFrameDescriptor);

Ieee80211AuthenticationFrameDescriptor::Ieee80211AuthenticationFrameDescriptor() : cClassDescriptor("Ieee80211AuthenticationFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211AuthenticationFrameDescriptor::~Ieee80211AuthenticationFrameDescriptor()
{
}

bool Ieee80211AuthenticationFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AuthenticationFrame *>(obj)!=NULL;
}

const char *Ieee80211AuthenticationFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AuthenticationFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211AuthenticationFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211AuthenticationFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AuthenticationFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211AuthenticationFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211AuthenticationFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211AuthenticationFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211AuthenticationFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211DeauthenticationFrame);

Ieee80211DeauthenticationFrame::Ieee80211DeauthenticationFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_DEAUTHENTICATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211DeauthenticationFrame::Ieee80211DeauthenticationFrame(const Ieee80211DeauthenticationFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211DeauthenticationFrame::~Ieee80211DeauthenticationFrame()
{
}

Ieee80211DeauthenticationFrame& Ieee80211DeauthenticationFrame::operator=(const Ieee80211DeauthenticationFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211DeauthenticationFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211DeauthenticationFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211DeauthenticationFrameBody& Ieee80211DeauthenticationFrame::getBody()
{
    return body_var;
}

void Ieee80211DeauthenticationFrame::setBody(const Ieee80211DeauthenticationFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211DeauthenticationFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DeauthenticationFrameDescriptor();
    virtual ~Ieee80211DeauthenticationFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211DeauthenticationFrameDescriptor);

Ieee80211DeauthenticationFrameDescriptor::Ieee80211DeauthenticationFrameDescriptor() : cClassDescriptor("Ieee80211DeauthenticationFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211DeauthenticationFrameDescriptor::~Ieee80211DeauthenticationFrameDescriptor()
{
}

bool Ieee80211DeauthenticationFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DeauthenticationFrame *>(obj)!=NULL;
}

const char *Ieee80211DeauthenticationFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DeauthenticationFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DeauthenticationFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211DeauthenticationFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211DeauthenticationFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211DeauthenticationFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211DeauthenticationFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211DeauthenticationFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211DeauthenticationFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211DisassociationFrame);

Ieee80211DisassociationFrame::Ieee80211DisassociationFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_DISASSOCIATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211DisassociationFrame::Ieee80211DisassociationFrame(const Ieee80211DisassociationFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211DisassociationFrame::~Ieee80211DisassociationFrame()
{
}

Ieee80211DisassociationFrame& Ieee80211DisassociationFrame::operator=(const Ieee80211DisassociationFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211DisassociationFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211DisassociationFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211DisassociationFrameBody& Ieee80211DisassociationFrame::getBody()
{
    return body_var;
}

void Ieee80211DisassociationFrame::setBody(const Ieee80211DisassociationFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211DisassociationFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DisassociationFrameDescriptor();
    virtual ~Ieee80211DisassociationFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211DisassociationFrameDescriptor);

Ieee80211DisassociationFrameDescriptor::Ieee80211DisassociationFrameDescriptor() : cClassDescriptor("Ieee80211DisassociationFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211DisassociationFrameDescriptor::~Ieee80211DisassociationFrameDescriptor()
{
}

bool Ieee80211DisassociationFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DisassociationFrame *>(obj)!=NULL;
}

const char *Ieee80211DisassociationFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DisassociationFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DisassociationFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211DisassociationFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211DisassociationFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211DisassociationFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211DisassociationFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211DisassociationFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211DisassociationFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeRequestFrame);

Ieee80211ProbeRequestFrame::Ieee80211ProbeRequestFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_PROBEREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ProbeRequestFrame::Ieee80211ProbeRequestFrame(const Ieee80211ProbeRequestFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211ProbeRequestFrame::~Ieee80211ProbeRequestFrame()
{
}

Ieee80211ProbeRequestFrame& Ieee80211ProbeRequestFrame::operator=(const Ieee80211ProbeRequestFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211ProbeRequestFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ProbeRequestFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ProbeRequestFrameBody& Ieee80211ProbeRequestFrame::getBody()
{
    return body_var;
}

void Ieee80211ProbeRequestFrame::setBody(const Ieee80211ProbeRequestFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211ProbeRequestFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeRequestFrameDescriptor();
    virtual ~Ieee80211ProbeRequestFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeRequestFrameDescriptor);

Ieee80211ProbeRequestFrameDescriptor::Ieee80211ProbeRequestFrameDescriptor() : cClassDescriptor("Ieee80211ProbeRequestFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211ProbeRequestFrameDescriptor::~Ieee80211ProbeRequestFrameDescriptor()
{
}

bool Ieee80211ProbeRequestFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeRequestFrame *>(obj)!=NULL;
}

const char *Ieee80211ProbeRequestFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeRequestFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ProbeRequestFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ProbeRequestFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeRequestFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ProbeRequestFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211ProbeRequestFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ProbeRequestFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211ProbeRequestFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationRequestFrame);

Ieee80211AssociationRequestFrame::Ieee80211AssociationRequestFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ASSOCIATIONREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AssociationRequestFrame::Ieee80211AssociationRequestFrame(const Ieee80211AssociationRequestFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211AssociationRequestFrame::~Ieee80211AssociationRequestFrame()
{
}

Ieee80211AssociationRequestFrame& Ieee80211AssociationRequestFrame::operator=(const Ieee80211AssociationRequestFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211AssociationRequestFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AssociationRequestFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211AssociationRequestFrameBody& Ieee80211AssociationRequestFrame::getBody()
{
    return body_var;
}

void Ieee80211AssociationRequestFrame::setBody(const Ieee80211AssociationRequestFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211AssociationRequestFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationRequestFrameDescriptor();
    virtual ~Ieee80211AssociationRequestFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationRequestFrameDescriptor);

Ieee80211AssociationRequestFrameDescriptor::Ieee80211AssociationRequestFrameDescriptor() : cClassDescriptor("Ieee80211AssociationRequestFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211AssociationRequestFrameDescriptor::~Ieee80211AssociationRequestFrameDescriptor()
{
}

bool Ieee80211AssociationRequestFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationRequestFrame *>(obj)!=NULL;
}

const char *Ieee80211AssociationRequestFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationRequestFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211AssociationRequestFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211AssociationRequestFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AssociationRequestFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211AssociationRequestFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211AssociationRequestFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211AssociationRequestFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211AssociationRequestFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationRequestFrame);

Ieee80211ReassociationRequestFrame::Ieee80211ReassociationRequestFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_REASSOCIATIONREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ReassociationRequestFrame::Ieee80211ReassociationRequestFrame(const Ieee80211ReassociationRequestFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211ReassociationRequestFrame::~Ieee80211ReassociationRequestFrame()
{
}

Ieee80211ReassociationRequestFrame& Ieee80211ReassociationRequestFrame::operator=(const Ieee80211ReassociationRequestFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211ReassociationRequestFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ReassociationRequestFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ReassociationRequestFrameBody& Ieee80211ReassociationRequestFrame::getBody()
{
    return body_var;
}

void Ieee80211ReassociationRequestFrame::setBody(const Ieee80211ReassociationRequestFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211ReassociationRequestFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationRequestFrameDescriptor();
    virtual ~Ieee80211ReassociationRequestFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationRequestFrameDescriptor);

Ieee80211ReassociationRequestFrameDescriptor::Ieee80211ReassociationRequestFrameDescriptor() : cClassDescriptor("Ieee80211ReassociationRequestFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211ReassociationRequestFrameDescriptor::~Ieee80211ReassociationRequestFrameDescriptor()
{
}

bool Ieee80211ReassociationRequestFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationRequestFrame *>(obj)!=NULL;
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationRequestFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ReassociationRequestFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ReassociationRequestFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationRequestFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ReassociationRequestFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211ReassociationRequestFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ReassociationRequestFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211ReassociationRequestFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationResponseFrame);

Ieee80211AssociationResponseFrame::Ieee80211AssociationResponseFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ASSOCIATIONRESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AssociationResponseFrame::Ieee80211AssociationResponseFrame(const Ieee80211AssociationResponseFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211AssociationResponseFrame::~Ieee80211AssociationResponseFrame()
{
}

Ieee80211AssociationResponseFrame& Ieee80211AssociationResponseFrame::operator=(const Ieee80211AssociationResponseFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211AssociationResponseFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AssociationResponseFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211AssociationResponseFrameBody& Ieee80211AssociationResponseFrame::getBody()
{
    return body_var;
}

void Ieee80211AssociationResponseFrame::setBody(const Ieee80211AssociationResponseFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211AssociationResponseFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationResponseFrameDescriptor();
    virtual ~Ieee80211AssociationResponseFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationResponseFrameDescriptor);

Ieee80211AssociationResponseFrameDescriptor::Ieee80211AssociationResponseFrameDescriptor() : cClassDescriptor("Ieee80211AssociationResponseFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211AssociationResponseFrameDescriptor::~Ieee80211AssociationResponseFrameDescriptor()
{
}

bool Ieee80211AssociationResponseFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationResponseFrame *>(obj)!=NULL;
}

const char *Ieee80211AssociationResponseFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationResponseFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211AssociationResponseFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211AssociationResponseFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AssociationResponseFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211AssociationResponseFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211AssociationResponseFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211AssociationResponseFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211AssociationResponseFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationResponseFrame);

Ieee80211ReassociationResponseFrame::Ieee80211ReassociationResponseFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_REASSOCIATIONRESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ReassociationResponseFrame::Ieee80211ReassociationResponseFrame(const Ieee80211ReassociationResponseFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211ReassociationResponseFrame::~Ieee80211ReassociationResponseFrame()
{
}

Ieee80211ReassociationResponseFrame& Ieee80211ReassociationResponseFrame::operator=(const Ieee80211ReassociationResponseFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211ReassociationResponseFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ReassociationResponseFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ReassociationResponseFrameBody& Ieee80211ReassociationResponseFrame::getBody()
{
    return body_var;
}

void Ieee80211ReassociationResponseFrame::setBody(const Ieee80211ReassociationResponseFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211ReassociationResponseFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationResponseFrameDescriptor();
    virtual ~Ieee80211ReassociationResponseFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationResponseFrameDescriptor);

Ieee80211ReassociationResponseFrameDescriptor::Ieee80211ReassociationResponseFrameDescriptor() : cClassDescriptor("Ieee80211ReassociationResponseFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211ReassociationResponseFrameDescriptor::~Ieee80211ReassociationResponseFrameDescriptor()
{
}

bool Ieee80211ReassociationResponseFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationResponseFrame *>(obj)!=NULL;
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationResponseFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ReassociationResponseFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ReassociationResponseFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationResponseFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ReassociationResponseFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211ReassociationResponseFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ReassociationResponseFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211ReassociationResponseFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211BeaconFrame);

Ieee80211BeaconFrame::Ieee80211BeaconFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_BEACON);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211BeaconFrame::Ieee80211BeaconFrame(const Ieee80211BeaconFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211BeaconFrame::~Ieee80211BeaconFrame()
{
}

Ieee80211BeaconFrame& Ieee80211BeaconFrame::operator=(const Ieee80211BeaconFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211BeaconFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211BeaconFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211BeaconFrameBody& Ieee80211BeaconFrame::getBody()
{
    return body_var;
}

void Ieee80211BeaconFrame::setBody(const Ieee80211BeaconFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211BeaconFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211BeaconFrameDescriptor();
    virtual ~Ieee80211BeaconFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211BeaconFrameDescriptor);

Ieee80211BeaconFrameDescriptor::Ieee80211BeaconFrameDescriptor() : cClassDescriptor("Ieee80211BeaconFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211BeaconFrameDescriptor::~Ieee80211BeaconFrameDescriptor()
{
}

bool Ieee80211BeaconFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211BeaconFrame *>(obj)!=NULL;
}

const char *Ieee80211BeaconFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211BeaconFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211BeaconFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211BeaconFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211BeaconFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211BeaconFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211BeaconFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211BeaconFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211BeaconFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211BeaconFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211BeaconFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211BeaconFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211BeaconFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeResponseFrame);

Ieee80211ProbeResponseFrame::Ieee80211ProbeResponseFrame(const char *name, int kind) : Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_PROBERESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ProbeResponseFrame::Ieee80211ProbeResponseFrame(const Ieee80211ProbeResponseFrame& other) : Ieee80211ManagementFrame()
{
    setName(other.getName());
    operator=(other);
}

Ieee80211ProbeResponseFrame::~Ieee80211ProbeResponseFrame()
{
}

Ieee80211ProbeResponseFrame& Ieee80211ProbeResponseFrame::operator=(const Ieee80211ProbeResponseFrame& other)
{
    if (this==&other) return *this;
    Ieee80211ManagementFrame::operator=(other);
    this->body_var = other.body_var;
    return *this;
}

void Ieee80211ProbeResponseFrame::parsimPack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ProbeResponseFrame::parsimUnpack(cCommBuffer *b)
{
    Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ProbeResponseFrameBody& Ieee80211ProbeResponseFrame::getBody()
{
    return body_var;
}

void Ieee80211ProbeResponseFrame::setBody(const Ieee80211ProbeResponseFrameBody& body_var)
{
    this->body_var = body_var;
}

class Ieee80211ProbeResponseFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeResponseFrameDescriptor();
    virtual ~Ieee80211ProbeResponseFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeResponseFrameDescriptor);

Ieee80211ProbeResponseFrameDescriptor::Ieee80211ProbeResponseFrameDescriptor() : cClassDescriptor("Ieee80211ProbeResponseFrame", "Ieee80211ManagementFrame")
{
}

Ieee80211ProbeResponseFrameDescriptor::~Ieee80211ProbeResponseFrameDescriptor()
{
}

bool Ieee80211ProbeResponseFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeResponseFrame *>(obj)!=NULL;
}

const char *Ieee80211ProbeResponseFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeResponseFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ProbeResponseFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "body";
        default: return NULL;
    }
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ProbeResponseFrameBody";
        default: return NULL;
    }
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeResponseFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211ProbeResponseFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211ProbeResponseFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211ProbeResponseFrameBody"; break;
        default: return NULL;
    }
}

void *Ieee80211ProbeResponseFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}


