//
// Generated file, do not edit! Created by opp_msgc 4.0 from linklayer/ieee80211/mgmt/Ieee80211Primitives.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee80211Primitives_m.h"

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
    cEnum *e = cEnum::find("Ieee80211PrimRequestCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211PrimRequestCode"));
    e->insert(PR_SCAN_REQUEST, "PR_SCAN_REQUEST");
    e->insert(PR_AUTHENTICATE_REQUEST, "PR_AUTHENTICATE_REQUEST");
    e->insert(PR_DEAUTHENTICATE_REQUEST, "PR_DEAUTHENTICATE_REQUEST");
    e->insert(PR_ASSOCIATE_REQUEST, "PR_ASSOCIATE_REQUEST");
    e->insert(PR_REASSOCIATE_REQUEST, "PR_REASSOCIATE_REQUEST");
    e->insert(PR_DISASSOCIATE_REQUEST, "PR_DISASSOCIATE_REQUEST");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("Ieee80211PrimConfirmCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211PrimConfirmCode"));
    e->insert(PR_SCAN_CONFIRM, "PR_SCAN_CONFIRM");
    e->insert(PR_AUTHENTICATE_CONFIRM, "PR_AUTHENTICATE_CONFIRM");
    e->insert(PR_DEAUTHENTICATE_CONFIRM, "PR_DEAUTHENTICATE_CONFIRM");
    e->insert(PR_ASSOCIATE_CONFIRM, "PR_ASSOCIATE_CONFIRM");
    e->insert(PR_REASSOCIATE_CONFIRM, "PR_REASSOCIATE_CONFIRM");
    e->insert(PR_DISASSOCIATE_CONFIRM, "PR_DISASSOCIATE_CONFIRM");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("Ieee80211BSSType");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211BSSType"));
    e->insert(BSSTYPE_ANY, "BSSTYPE_ANY");
    e->insert(BSSTYPE_INFRASTRUCTURE, "BSSTYPE_INFRASTRUCTURE");
    e->insert(BSSTYPE_INDEPENDENT, "BSSTYPE_INDEPENDENT");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("Ieee80211PrimResultCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211PrimResultCode"));
    e->insert(PRC_SUCCESS, "PRC_SUCCESS");
    e->insert(PRC_INVALID_PARAMETERS, "PRC_INVALID_PARAMETERS");
    e->insert(PRC_TIMEOUT, "PRC_TIMEOUT");
    e->insert(PRC_TOO_MANY_SIMULTANEOUS_REQUESTS, "PRC_TOO_MANY_SIMULTANEOUS_REQUESTS");
    e->insert(PRC_REFUSED, "PRC_REFUSED");
);

Register_Class(Ieee80211PrimRequest);

Ieee80211PrimRequest::Ieee80211PrimRequest() : cObject()
{
}

Ieee80211PrimRequest::Ieee80211PrimRequest(const Ieee80211PrimRequest& other) : cObject()
{
    operator=(other);
}

Ieee80211PrimRequest::~Ieee80211PrimRequest()
{
}

Ieee80211PrimRequest& Ieee80211PrimRequest::operator=(const Ieee80211PrimRequest& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    return *this;
}

void Ieee80211PrimRequest::parsimPack(cCommBuffer *b)
{
}

void Ieee80211PrimRequest::parsimUnpack(cCommBuffer *b)
{
}

class Ieee80211PrimRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211PrimRequestDescriptor();
    virtual ~Ieee80211PrimRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211PrimRequestDescriptor);

Ieee80211PrimRequestDescriptor::Ieee80211PrimRequestDescriptor() : cClassDescriptor("Ieee80211PrimRequest", "cObject")
{
}

Ieee80211PrimRequestDescriptor::~Ieee80211PrimRequestDescriptor()
{
}

bool Ieee80211PrimRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211PrimRequest *>(obj)!=NULL;
}

const char *Ieee80211PrimRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211PrimRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211PrimRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211PrimRequestDescriptor::getFieldName(void *object, int field) const
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

const char *Ieee80211PrimRequestDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211PrimRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211PrimRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimRequest *pp = (Ieee80211PrimRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211PrimRequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimRequest *pp = (Ieee80211PrimRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool Ieee80211PrimRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimRequest *pp = (Ieee80211PrimRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211PrimRequestDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211PrimRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimRequest *pp = (Ieee80211PrimRequest *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211PrimConfirm);

Ieee80211PrimConfirm::Ieee80211PrimConfirm() : cObject()
{
    this->resultCode_var = 0;
}

Ieee80211PrimConfirm::Ieee80211PrimConfirm(const Ieee80211PrimConfirm& other) : cObject()
{
    operator=(other);
}

Ieee80211PrimConfirm::~Ieee80211PrimConfirm()
{
}

Ieee80211PrimConfirm& Ieee80211PrimConfirm::operator=(const Ieee80211PrimConfirm& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->resultCode_var = other.resultCode_var;
    return *this;
}

void Ieee80211PrimConfirm::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->resultCode_var);
}

void Ieee80211PrimConfirm::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->resultCode_var);
}

int Ieee80211PrimConfirm::getResultCode() const
{
    return resultCode_var;
}

void Ieee80211PrimConfirm::setResultCode(int resultCode_var)
{
    this->resultCode_var = resultCode_var;
}

class Ieee80211PrimConfirmDescriptor : public cClassDescriptor
{
  public:
    Ieee80211PrimConfirmDescriptor();
    virtual ~Ieee80211PrimConfirmDescriptor();

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

Register_ClassDescriptor(Ieee80211PrimConfirmDescriptor);

Ieee80211PrimConfirmDescriptor::Ieee80211PrimConfirmDescriptor() : cClassDescriptor("Ieee80211PrimConfirm", "cObject")
{
}

Ieee80211PrimConfirmDescriptor::~Ieee80211PrimConfirmDescriptor()
{
}

bool Ieee80211PrimConfirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211PrimConfirm *>(obj)!=NULL;
}

const char *Ieee80211PrimConfirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211PrimConfirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211PrimConfirmDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211PrimConfirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "resultCode";
        default: return NULL;
    }
}

const char *Ieee80211PrimConfirmDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211PrimConfirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "Ieee80211PrimResultCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211PrimConfirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimConfirm *pp = (Ieee80211PrimConfirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211PrimConfirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimConfirm *pp = (Ieee80211PrimConfirm *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getResultCode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211PrimConfirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimConfirm *pp = (Ieee80211PrimConfirm *)object; (void)pp;
    switch (field) {
        case 0: pp->setResultCode(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211PrimConfirmDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211PrimConfirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PrimConfirm *pp = (Ieee80211PrimConfirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_ScanRequest);

Ieee80211Prim_ScanRequest::Ieee80211Prim_ScanRequest() : Ieee80211PrimRequest()
{
    this->BSSType_var = 0;
    this->SSID_var = 0;
    this->activeScan_var = 0;
    this->probeDelay_var = 0;
    channelList_arraysize = 0;
    this->channelList_var = 0;
    this->minChannelTime_var = 0;
    this->maxChannelTime_var = 0;
}

Ieee80211Prim_ScanRequest::Ieee80211Prim_ScanRequest(const Ieee80211Prim_ScanRequest& other) : Ieee80211PrimRequest()
{
    channelList_arraysize = 0;
    this->channelList_var = 0;
    operator=(other);
}

Ieee80211Prim_ScanRequest::~Ieee80211Prim_ScanRequest()
{
    delete [] channelList_var;
}

Ieee80211Prim_ScanRequest& Ieee80211Prim_ScanRequest::operator=(const Ieee80211Prim_ScanRequest& other)
{
    if (this==&other) return *this;
    Ieee80211PrimRequest::operator=(other);
    this->BSSType_var = other.BSSType_var;
    this->BSSID_var = other.BSSID_var;
    this->SSID_var = other.SSID_var;
    this->activeScan_var = other.activeScan_var;
    this->probeDelay_var = other.probeDelay_var;
    delete [] this->channelList_var;
    this->channelList_var = (other.channelList_arraysize==0) ? NULL : new int[other.channelList_arraysize];
    channelList_arraysize = other.channelList_arraysize;
    for (unsigned int i=0; i<channelList_arraysize; i++)
        this->channelList_var[i] = other.channelList_var[i];
    this->minChannelTime_var = other.minChannelTime_var;
    this->maxChannelTime_var = other.maxChannelTime_var;
    return *this;
}

void Ieee80211Prim_ScanRequest::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimPack(b);
    doPacking(b,this->BSSType_var);
    doPacking(b,this->BSSID_var);
    doPacking(b,this->SSID_var);
    doPacking(b,this->activeScan_var);
    doPacking(b,this->probeDelay_var);
    b->pack(channelList_arraysize);
    doPacking(b,this->channelList_var,channelList_arraysize);
    doPacking(b,this->minChannelTime_var);
    doPacking(b,this->maxChannelTime_var);
}

void Ieee80211Prim_ScanRequest::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimUnpack(b);
    doUnpacking(b,this->BSSType_var);
    doUnpacking(b,this->BSSID_var);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->activeScan_var);
    doUnpacking(b,this->probeDelay_var);
    delete [] this->channelList_var;
    b->unpack(channelList_arraysize);
    if (channelList_arraysize==0) {
        this->channelList_var = 0;
    } else {
        this->channelList_var = new int[channelList_arraysize];
        doUnpacking(b,this->channelList_var,channelList_arraysize);
    }
    doUnpacking(b,this->minChannelTime_var);
    doUnpacking(b,this->maxChannelTime_var);
}

int Ieee80211Prim_ScanRequest::getBSSType() const
{
    return BSSType_var;
}

void Ieee80211Prim_ScanRequest::setBSSType(int BSSType_var)
{
    this->BSSType_var = BSSType_var;
}

MACAddress& Ieee80211Prim_ScanRequest::getBSSID()
{
    return BSSID_var;
}

void Ieee80211Prim_ScanRequest::setBSSID(const MACAddress& BSSID_var)
{
    this->BSSID_var = BSSID_var;
}

const char * Ieee80211Prim_ScanRequest::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211Prim_ScanRequest::setSSID(const char * SSID_var)
{
    this->SSID_var = SSID_var;
}

bool Ieee80211Prim_ScanRequest::getActiveScan() const
{
    return activeScan_var;
}

void Ieee80211Prim_ScanRequest::setActiveScan(bool activeScan_var)
{
    this->activeScan_var = activeScan_var;
}

simtime_t Ieee80211Prim_ScanRequest::getProbeDelay() const
{
    return probeDelay_var;
}

void Ieee80211Prim_ScanRequest::setProbeDelay(simtime_t probeDelay_var)
{
    this->probeDelay_var = probeDelay_var;
}

void Ieee80211Prim_ScanRequest::setChannelListArraySize(unsigned int size)
{
    int *channelList_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = channelList_arraysize < size ? channelList_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        channelList_var2[i] = this->channelList_var[i];
    for (unsigned int i=sz; i<size; i++)
        channelList_var2[i] = 0;
    channelList_arraysize = size;
    delete [] this->channelList_var;
    this->channelList_var = channelList_var2;
}

unsigned int Ieee80211Prim_ScanRequest::getChannelListArraySize() const
{
    return channelList_arraysize;
}

int Ieee80211Prim_ScanRequest::getChannelList(unsigned int k) const
{
    if (k>=channelList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", channelList_arraysize, k);
    return channelList_var[k];
}

void Ieee80211Prim_ScanRequest::setChannelList(unsigned int k, int channelList_var)
{
    if (k>=channelList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", channelList_arraysize, k);
    this->channelList_var[k]=channelList_var;
}

simtime_t Ieee80211Prim_ScanRequest::getMinChannelTime() const
{
    return minChannelTime_var;
}

void Ieee80211Prim_ScanRequest::setMinChannelTime(simtime_t minChannelTime_var)
{
    this->minChannelTime_var = minChannelTime_var;
}

simtime_t Ieee80211Prim_ScanRequest::getMaxChannelTime() const
{
    return maxChannelTime_var;
}

void Ieee80211Prim_ScanRequest::setMaxChannelTime(simtime_t maxChannelTime_var)
{
    this->maxChannelTime_var = maxChannelTime_var;
}

class Ieee80211Prim_ScanRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_ScanRequestDescriptor();
    virtual ~Ieee80211Prim_ScanRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_ScanRequestDescriptor);

Ieee80211Prim_ScanRequestDescriptor::Ieee80211Prim_ScanRequestDescriptor() : cClassDescriptor("Ieee80211Prim_ScanRequest", "Ieee80211PrimRequest")
{
}

Ieee80211Prim_ScanRequestDescriptor::~Ieee80211Prim_ScanRequestDescriptor()
{
}

bool Ieee80211Prim_ScanRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_ScanRequest *>(obj)!=NULL;
}

const char *Ieee80211Prim_ScanRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_ScanRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int Ieee80211Prim_ScanRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISARRAY | FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *Ieee80211Prim_ScanRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BSSType";
        case 1: return "BSSID";
        case 2: return "SSID";
        case 3: return "activeScan";
        case 4: return "probeDelay";
        case 5: return "channelList";
        case 6: return "minChannelTime";
        case 7: return "maxChannelTime";
        default: return NULL;
    }
}

const char *Ieee80211Prim_ScanRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "MACAddress";
        case 2: return "string";
        case 3: return "bool";
        case 4: return "simtime_t";
        case 5: return "int";
        case 6: return "simtime_t";
        case 7: return "simtime_t";
        default: return NULL;
    }
}

const char *Ieee80211Prim_ScanRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "Ieee80211BSSType";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211Prim_ScanRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanRequest *pp = (Ieee80211Prim_ScanRequest *)object; (void)pp;
    switch (field) {
        case 5: return pp->getChannelListArraySize();
        default: return 0;
    }
}

bool Ieee80211Prim_ScanRequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanRequest *pp = (Ieee80211Prim_ScanRequest *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getBSSType(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getBSSID(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: oppstring2string(pp->getSSID(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->getActiveScan(),resultbuf,bufsize); return true;
        case 4: double2string(pp->getProbeDelay(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getChannelList(i),resultbuf,bufsize); return true;
        case 6: double2string(pp->getMinChannelTime(),resultbuf,bufsize); return true;
        case 7: double2string(pp->getMaxChannelTime(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211Prim_ScanRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanRequest *pp = (Ieee80211Prim_ScanRequest *)object; (void)pp;
    switch (field) {
        case 0: pp->setBSSType(string2long(value)); return true;
        case 2: pp->setSSID((value)); return true;
        case 3: pp->setActiveScan(string2bool(value)); return true;
        case 4: pp->setProbeDelay(string2double(value)); return true;
        case 5: pp->setChannelList(i,string2long(value)); return true;
        case 6: pp->setMinChannelTime(string2double(value)); return true;
        case 7: pp->setMaxChannelTime(string2double(value)); return true;
        default: return false;
    }
}

const char *Ieee80211Prim_ScanRequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "MACAddress"; break;
        default: return NULL;
    }
}

void *Ieee80211Prim_ScanRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanRequest *pp = (Ieee80211Prim_ScanRequest *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getBSSID()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_BSSDescription);

Ieee80211Prim_BSSDescription::Ieee80211Prim_BSSDescription() : cObject()
{
    this->channelNumber_var = 0;
    this->SSID_var = 0;
    this->beaconInterval_var = 0;
    this->rxPower_var = 0;
}

Ieee80211Prim_BSSDescription::Ieee80211Prim_BSSDescription(const Ieee80211Prim_BSSDescription& other) : cObject()
{
    operator=(other);
}

Ieee80211Prim_BSSDescription::~Ieee80211Prim_BSSDescription()
{
}

Ieee80211Prim_BSSDescription& Ieee80211Prim_BSSDescription::operator=(const Ieee80211Prim_BSSDescription& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->channelNumber_var = other.channelNumber_var;
    this->BSSID_var = other.BSSID_var;
    this->SSID_var = other.SSID_var;
    this->supportedRates_var = other.supportedRates_var;
    this->beaconInterval_var = other.beaconInterval_var;
    this->rxPower_var = other.rxPower_var;
    return *this;
}

void Ieee80211Prim_BSSDescription::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->channelNumber_var);
    doPacking(b,this->BSSID_var);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
    doPacking(b,this->beaconInterval_var);
    doPacking(b,this->rxPower_var);
}

void Ieee80211Prim_BSSDescription::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->channelNumber_var);
    doUnpacking(b,this->BSSID_var);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->supportedRates_var);
    doUnpacking(b,this->beaconInterval_var);
    doUnpacking(b,this->rxPower_var);
}

int Ieee80211Prim_BSSDescription::getChannelNumber() const
{
    return channelNumber_var;
}

void Ieee80211Prim_BSSDescription::setChannelNumber(int channelNumber_var)
{
    this->channelNumber_var = channelNumber_var;
}

MACAddress& Ieee80211Prim_BSSDescription::getBSSID()
{
    return BSSID_var;
}

void Ieee80211Prim_BSSDescription::setBSSID(const MACAddress& BSSID_var)
{
    this->BSSID_var = BSSID_var;
}

const char * Ieee80211Prim_BSSDescription::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211Prim_BSSDescription::setSSID(const char * SSID_var)
{
    this->SSID_var = SSID_var;
}

Ieee80211SupportedRatesElement& Ieee80211Prim_BSSDescription::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211Prim_BSSDescription::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates_var)
{
    this->supportedRates_var = supportedRates_var;
}

simtime_t Ieee80211Prim_BSSDescription::getBeaconInterval() const
{
    return beaconInterval_var;
}

void Ieee80211Prim_BSSDescription::setBeaconInterval(simtime_t beaconInterval_var)
{
    this->beaconInterval_var = beaconInterval_var;
}

double Ieee80211Prim_BSSDescription::getRxPower() const
{
    return rxPower_var;
}

void Ieee80211Prim_BSSDescription::setRxPower(double rxPower_var)
{
    this->rxPower_var = rxPower_var;
}

class Ieee80211Prim_BSSDescriptionDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_BSSDescriptionDescriptor();
    virtual ~Ieee80211Prim_BSSDescriptionDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_BSSDescriptionDescriptor);

Ieee80211Prim_BSSDescriptionDescriptor::Ieee80211Prim_BSSDescriptionDescriptor() : cClassDescriptor("Ieee80211Prim_BSSDescription", "cObject")
{
}

Ieee80211Prim_BSSDescriptionDescriptor::~Ieee80211Prim_BSSDescriptionDescriptor()
{
}

bool Ieee80211Prim_BSSDescriptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_BSSDescription *>(obj)!=NULL;
}

const char *Ieee80211Prim_BSSDescriptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_BSSDescriptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int Ieee80211Prim_BSSDescriptionDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISCOMPOUND;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *Ieee80211Prim_BSSDescriptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "channelNumber";
        case 1: return "BSSID";
        case 2: return "SSID";
        case 3: return "supportedRates";
        case 4: return "beaconInterval";
        case 5: return "rxPower";
        default: return NULL;
    }
}

const char *Ieee80211Prim_BSSDescriptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "MACAddress";
        case 2: return "string";
        case 3: return "Ieee80211SupportedRatesElement";
        case 4: return "simtime_t";
        case 5: return "double";
        default: return NULL;
    }
}

const char *Ieee80211Prim_BSSDescriptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_BSSDescriptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_BSSDescription *pp = (Ieee80211Prim_BSSDescription *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_BSSDescriptionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_BSSDescription *pp = (Ieee80211Prim_BSSDescription *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getChannelNumber(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getBSSID(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: oppstring2string(pp->getSSID(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getSupportedRates(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: double2string(pp->getBeaconInterval(),resultbuf,bufsize); return true;
        case 5: double2string(pp->getRxPower(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211Prim_BSSDescriptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_BSSDescription *pp = (Ieee80211Prim_BSSDescription *)object; (void)pp;
    switch (field) {
        case 0: pp->setChannelNumber(string2long(value)); return true;
        case 2: pp->setSSID((value)); return true;
        case 4: pp->setBeaconInterval(string2double(value)); return true;
        case 5: pp->setRxPower(string2double(value)); return true;
        default: return false;
    }
}

const char *Ieee80211Prim_BSSDescriptionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "MACAddress"; break;
        case 3: return "Ieee80211SupportedRatesElement"; break;
        default: return NULL;
    }
}

void *Ieee80211Prim_BSSDescriptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_BSSDescription *pp = (Ieee80211Prim_BSSDescription *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getBSSID()); break;
        case 3: return (void *)(&pp->getSupportedRates()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_ScanConfirm);

Ieee80211Prim_ScanConfirm::Ieee80211Prim_ScanConfirm() : Ieee80211PrimConfirm()
{
    bssList_arraysize = 0;
    this->bssList_var = 0;
}

Ieee80211Prim_ScanConfirm::Ieee80211Prim_ScanConfirm(const Ieee80211Prim_ScanConfirm& other) : Ieee80211PrimConfirm()
{
    bssList_arraysize = 0;
    this->bssList_var = 0;
    operator=(other);
}

Ieee80211Prim_ScanConfirm::~Ieee80211Prim_ScanConfirm()
{
    delete [] bssList_var;
}

Ieee80211Prim_ScanConfirm& Ieee80211Prim_ScanConfirm::operator=(const Ieee80211Prim_ScanConfirm& other)
{
    if (this==&other) return *this;
    Ieee80211PrimConfirm::operator=(other);
    delete [] this->bssList_var;
    this->bssList_var = (other.bssList_arraysize==0) ? NULL : new Ieee80211Prim_BSSDescription[other.bssList_arraysize];
    bssList_arraysize = other.bssList_arraysize;
    for (unsigned int i=0; i<bssList_arraysize; i++)
        this->bssList_var[i] = other.bssList_var[i];
    return *this;
}

void Ieee80211Prim_ScanConfirm::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimConfirm::parsimPack(b);
    b->pack(bssList_arraysize);
    doPacking(b,this->bssList_var,bssList_arraysize);
}

void Ieee80211Prim_ScanConfirm::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimConfirm::parsimUnpack(b);
    delete [] this->bssList_var;
    b->unpack(bssList_arraysize);
    if (bssList_arraysize==0) {
        this->bssList_var = 0;
    } else {
        this->bssList_var = new Ieee80211Prim_BSSDescription[bssList_arraysize];
        doUnpacking(b,this->bssList_var,bssList_arraysize);
    }
}

void Ieee80211Prim_ScanConfirm::setBssListArraySize(unsigned int size)
{
    Ieee80211Prim_BSSDescription *bssList_var2 = (size==0) ? NULL : new Ieee80211Prim_BSSDescription[size];
    unsigned int sz = bssList_arraysize < size ? bssList_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        bssList_var2[i] = this->bssList_var[i];
    bssList_arraysize = size;
    delete [] this->bssList_var;
    this->bssList_var = bssList_var2;
}

unsigned int Ieee80211Prim_ScanConfirm::getBssListArraySize() const
{
    return bssList_arraysize;
}

Ieee80211Prim_BSSDescription& Ieee80211Prim_ScanConfirm::getBssList(unsigned int k)
{
    if (k>=bssList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bssList_arraysize, k);
    return bssList_var[k];
}

void Ieee80211Prim_ScanConfirm::setBssList(unsigned int k, const Ieee80211Prim_BSSDescription& bssList_var)
{
    if (k>=bssList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bssList_arraysize, k);
    this->bssList_var[k]=bssList_var;
}

class Ieee80211Prim_ScanConfirmDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_ScanConfirmDescriptor();
    virtual ~Ieee80211Prim_ScanConfirmDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_ScanConfirmDescriptor);

Ieee80211Prim_ScanConfirmDescriptor::Ieee80211Prim_ScanConfirmDescriptor() : cClassDescriptor("Ieee80211Prim_ScanConfirm", "Ieee80211PrimConfirm")
{
}

Ieee80211Prim_ScanConfirmDescriptor::~Ieee80211Prim_ScanConfirmDescriptor()
{
}

bool Ieee80211Prim_ScanConfirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_ScanConfirm *>(obj)!=NULL;
}

const char *Ieee80211Prim_ScanConfirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_ScanConfirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211Prim_ScanConfirmDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *Ieee80211Prim_ScanConfirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bssList";
        default: return NULL;
    }
}

const char *Ieee80211Prim_ScanConfirmDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211Prim_BSSDescription";
        default: return NULL;
    }
}

const char *Ieee80211Prim_ScanConfirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_ScanConfirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanConfirm *pp = (Ieee80211Prim_ScanConfirm *)object; (void)pp;
    switch (field) {
        case 0: return pp->getBssListArraySize();
        default: return 0;
    }
}

bool Ieee80211Prim_ScanConfirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanConfirm *pp = (Ieee80211Prim_ScanConfirm *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBssList(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211Prim_ScanConfirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanConfirm *pp = (Ieee80211Prim_ScanConfirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211Prim_ScanConfirmDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Ieee80211Prim_BSSDescription"; break;
        default: return NULL;
    }
}

void *Ieee80211Prim_ScanConfirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ScanConfirm *pp = (Ieee80211Prim_ScanConfirm *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBssList(i)); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_AuthenticateRequest);

Ieee80211Prim_AuthenticateRequest::Ieee80211Prim_AuthenticateRequest() : Ieee80211PrimRequest()
{
    this->timeout_var = 0;
}

Ieee80211Prim_AuthenticateRequest::Ieee80211Prim_AuthenticateRequest(const Ieee80211Prim_AuthenticateRequest& other) : Ieee80211PrimRequest()
{
    operator=(other);
}

Ieee80211Prim_AuthenticateRequest::~Ieee80211Prim_AuthenticateRequest()
{
}

Ieee80211Prim_AuthenticateRequest& Ieee80211Prim_AuthenticateRequest::operator=(const Ieee80211Prim_AuthenticateRequest& other)
{
    if (this==&other) return *this;
    Ieee80211PrimRequest::operator=(other);
    this->address_var = other.address_var;
    this->timeout_var = other.timeout_var;
    return *this;
}

void Ieee80211Prim_AuthenticateRequest::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimPack(b);
    doPacking(b,this->address_var);
    doPacking(b,this->timeout_var);
}

void Ieee80211Prim_AuthenticateRequest::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimUnpack(b);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->timeout_var);
}

MACAddress& Ieee80211Prim_AuthenticateRequest::getAddress()
{
    return address_var;
}

void Ieee80211Prim_AuthenticateRequest::setAddress(const MACAddress& address_var)
{
    this->address_var = address_var;
}

simtime_t Ieee80211Prim_AuthenticateRequest::getTimeout() const
{
    return timeout_var;
}

void Ieee80211Prim_AuthenticateRequest::setTimeout(simtime_t timeout_var)
{
    this->timeout_var = timeout_var;
}

class Ieee80211Prim_AuthenticateRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_AuthenticateRequestDescriptor();
    virtual ~Ieee80211Prim_AuthenticateRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_AuthenticateRequestDescriptor);

Ieee80211Prim_AuthenticateRequestDescriptor::Ieee80211Prim_AuthenticateRequestDescriptor() : cClassDescriptor("Ieee80211Prim_AuthenticateRequest", "Ieee80211PrimRequest")
{
}

Ieee80211Prim_AuthenticateRequestDescriptor::~Ieee80211Prim_AuthenticateRequestDescriptor()
{
}

bool Ieee80211Prim_AuthenticateRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_AuthenticateRequest *>(obj)!=NULL;
}

const char *Ieee80211Prim_AuthenticateRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_AuthenticateRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211Prim_AuthenticateRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_AuthenticateRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "address";
        case 1: return "timeout";
        default: return NULL;
    }
}

const char *Ieee80211Prim_AuthenticateRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress";
        case 1: return "simtime_t";
        default: return NULL;
    }
}

const char *Ieee80211Prim_AuthenticateRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_AuthenticateRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateRequest *pp = (Ieee80211Prim_AuthenticateRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_AuthenticateRequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateRequest *pp = (Ieee80211Prim_AuthenticateRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: double2string(pp->getTimeout(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211Prim_AuthenticateRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateRequest *pp = (Ieee80211Prim_AuthenticateRequest *)object; (void)pp;
    switch (field) {
        case 1: pp->setTimeout(string2double(value)); return true;
        default: return false;
    }
}

const char *Ieee80211Prim_AuthenticateRequestDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_AuthenticateRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateRequest *pp = (Ieee80211Prim_AuthenticateRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_AuthenticateConfirm);

Ieee80211Prim_AuthenticateConfirm::Ieee80211Prim_AuthenticateConfirm() : Ieee80211PrimConfirm()
{
}

Ieee80211Prim_AuthenticateConfirm::Ieee80211Prim_AuthenticateConfirm(const Ieee80211Prim_AuthenticateConfirm& other) : Ieee80211PrimConfirm()
{
    operator=(other);
}

Ieee80211Prim_AuthenticateConfirm::~Ieee80211Prim_AuthenticateConfirm()
{
}

Ieee80211Prim_AuthenticateConfirm& Ieee80211Prim_AuthenticateConfirm::operator=(const Ieee80211Prim_AuthenticateConfirm& other)
{
    if (this==&other) return *this;
    Ieee80211PrimConfirm::operator=(other);
    this->address_var = other.address_var;
    return *this;
}

void Ieee80211Prim_AuthenticateConfirm::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimConfirm::parsimPack(b);
    doPacking(b,this->address_var);
}

void Ieee80211Prim_AuthenticateConfirm::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimConfirm::parsimUnpack(b);
    doUnpacking(b,this->address_var);
}

MACAddress& Ieee80211Prim_AuthenticateConfirm::getAddress()
{
    return address_var;
}

void Ieee80211Prim_AuthenticateConfirm::setAddress(const MACAddress& address_var)
{
    this->address_var = address_var;
}

class Ieee80211Prim_AuthenticateConfirmDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_AuthenticateConfirmDescriptor();
    virtual ~Ieee80211Prim_AuthenticateConfirmDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_AuthenticateConfirmDescriptor);

Ieee80211Prim_AuthenticateConfirmDescriptor::Ieee80211Prim_AuthenticateConfirmDescriptor() : cClassDescriptor("Ieee80211Prim_AuthenticateConfirm", "Ieee80211PrimConfirm")
{
}

Ieee80211Prim_AuthenticateConfirmDescriptor::~Ieee80211Prim_AuthenticateConfirmDescriptor()
{
}

bool Ieee80211Prim_AuthenticateConfirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_AuthenticateConfirm *>(obj)!=NULL;
}

const char *Ieee80211Prim_AuthenticateConfirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "address";
        default: return NULL;
    }
}

const char *Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_AuthenticateConfirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateConfirm *pp = (Ieee80211Prim_AuthenticateConfirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateConfirm *pp = (Ieee80211Prim_AuthenticateConfirm *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool Ieee80211Prim_AuthenticateConfirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateConfirm *pp = (Ieee80211Prim_AuthenticateConfirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_AuthenticateConfirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AuthenticateConfirm *pp = (Ieee80211Prim_AuthenticateConfirm *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_DeauthenticateRequest);

Ieee80211Prim_DeauthenticateRequest::Ieee80211Prim_DeauthenticateRequest() : Ieee80211PrimRequest()
{
    this->reasonCode_var = 0;
}

Ieee80211Prim_DeauthenticateRequest::Ieee80211Prim_DeauthenticateRequest(const Ieee80211Prim_DeauthenticateRequest& other) : Ieee80211PrimRequest()
{
    operator=(other);
}

Ieee80211Prim_DeauthenticateRequest::~Ieee80211Prim_DeauthenticateRequest()
{
}

Ieee80211Prim_DeauthenticateRequest& Ieee80211Prim_DeauthenticateRequest::operator=(const Ieee80211Prim_DeauthenticateRequest& other)
{
    if (this==&other) return *this;
    Ieee80211PrimRequest::operator=(other);
    this->address_var = other.address_var;
    this->reasonCode_var = other.reasonCode_var;
    return *this;
}

void Ieee80211Prim_DeauthenticateRequest::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimPack(b);
    doPacking(b,this->address_var);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211Prim_DeauthenticateRequest::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimUnpack(b);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->reasonCode_var);
}

MACAddress& Ieee80211Prim_DeauthenticateRequest::getAddress()
{
    return address_var;
}

void Ieee80211Prim_DeauthenticateRequest::setAddress(const MACAddress& address_var)
{
    this->address_var = address_var;
}

int Ieee80211Prim_DeauthenticateRequest::getReasonCode() const
{
    return reasonCode_var;
}

void Ieee80211Prim_DeauthenticateRequest::setReasonCode(int reasonCode_var)
{
    this->reasonCode_var = reasonCode_var;
}

class Ieee80211Prim_DeauthenticateRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_DeauthenticateRequestDescriptor();
    virtual ~Ieee80211Prim_DeauthenticateRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_DeauthenticateRequestDescriptor);

Ieee80211Prim_DeauthenticateRequestDescriptor::Ieee80211Prim_DeauthenticateRequestDescriptor() : cClassDescriptor("Ieee80211Prim_DeauthenticateRequest", "Ieee80211PrimRequest")
{
}

Ieee80211Prim_DeauthenticateRequestDescriptor::~Ieee80211Prim_DeauthenticateRequestDescriptor()
{
}

bool Ieee80211Prim_DeauthenticateRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_DeauthenticateRequest *>(obj)!=NULL;
}

const char *Ieee80211Prim_DeauthenticateRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "address";
        case 1: return "reasonCode";
        default: return NULL;
    }
}

const char *Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress";
        case 1: return "int";
        default: return NULL;
    }
}

const char *Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "Ieee80211ReasonCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211Prim_DeauthenticateRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DeauthenticateRequest *pp = (Ieee80211Prim_DeauthenticateRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DeauthenticateRequest *pp = (Ieee80211Prim_DeauthenticateRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getReasonCode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211Prim_DeauthenticateRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DeauthenticateRequest *pp = (Ieee80211Prim_DeauthenticateRequest *)object; (void)pp;
    switch (field) {
        case 1: pp->setReasonCode(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_DeauthenticateRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DeauthenticateRequest *pp = (Ieee80211Prim_DeauthenticateRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_AssociateRequest);

Ieee80211Prim_AssociateRequest::Ieee80211Prim_AssociateRequest() : Ieee80211PrimRequest()
{
    this->timeout_var = 0;
}

Ieee80211Prim_AssociateRequest::Ieee80211Prim_AssociateRequest(const Ieee80211Prim_AssociateRequest& other) : Ieee80211PrimRequest()
{
    operator=(other);
}

Ieee80211Prim_AssociateRequest::~Ieee80211Prim_AssociateRequest()
{
}

Ieee80211Prim_AssociateRequest& Ieee80211Prim_AssociateRequest::operator=(const Ieee80211Prim_AssociateRequest& other)
{
    if (this==&other) return *this;
    Ieee80211PrimRequest::operator=(other);
    this->address_var = other.address_var;
    this->timeout_var = other.timeout_var;
    return *this;
}

void Ieee80211Prim_AssociateRequest::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimPack(b);
    doPacking(b,this->address_var);
    doPacking(b,this->timeout_var);
}

void Ieee80211Prim_AssociateRequest::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimUnpack(b);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->timeout_var);
}

MACAddress& Ieee80211Prim_AssociateRequest::getAddress()
{
    return address_var;
}

void Ieee80211Prim_AssociateRequest::setAddress(const MACAddress& address_var)
{
    this->address_var = address_var;
}

simtime_t Ieee80211Prim_AssociateRequest::getTimeout() const
{
    return timeout_var;
}

void Ieee80211Prim_AssociateRequest::setTimeout(simtime_t timeout_var)
{
    this->timeout_var = timeout_var;
}

class Ieee80211Prim_AssociateRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_AssociateRequestDescriptor();
    virtual ~Ieee80211Prim_AssociateRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_AssociateRequestDescriptor);

Ieee80211Prim_AssociateRequestDescriptor::Ieee80211Prim_AssociateRequestDescriptor() : cClassDescriptor("Ieee80211Prim_AssociateRequest", "Ieee80211PrimRequest")
{
}

Ieee80211Prim_AssociateRequestDescriptor::~Ieee80211Prim_AssociateRequestDescriptor()
{
}

bool Ieee80211Prim_AssociateRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_AssociateRequest *>(obj)!=NULL;
}

const char *Ieee80211Prim_AssociateRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_AssociateRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211Prim_AssociateRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_AssociateRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "address";
        case 1: return "timeout";
        default: return NULL;
    }
}

const char *Ieee80211Prim_AssociateRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress";
        case 1: return "simtime_t";
        default: return NULL;
    }
}

const char *Ieee80211Prim_AssociateRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_AssociateRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateRequest *pp = (Ieee80211Prim_AssociateRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_AssociateRequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateRequest *pp = (Ieee80211Prim_AssociateRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: double2string(pp->getTimeout(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211Prim_AssociateRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateRequest *pp = (Ieee80211Prim_AssociateRequest *)object; (void)pp;
    switch (field) {
        case 1: pp->setTimeout(string2double(value)); return true;
        default: return false;
    }
}

const char *Ieee80211Prim_AssociateRequestDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_AssociateRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateRequest *pp = (Ieee80211Prim_AssociateRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_AssociateConfirm);

Ieee80211Prim_AssociateConfirm::Ieee80211Prim_AssociateConfirm() : Ieee80211PrimConfirm()
{
}

Ieee80211Prim_AssociateConfirm::Ieee80211Prim_AssociateConfirm(const Ieee80211Prim_AssociateConfirm& other) : Ieee80211PrimConfirm()
{
    operator=(other);
}

Ieee80211Prim_AssociateConfirm::~Ieee80211Prim_AssociateConfirm()
{
}

Ieee80211Prim_AssociateConfirm& Ieee80211Prim_AssociateConfirm::operator=(const Ieee80211Prim_AssociateConfirm& other)
{
    if (this==&other) return *this;
    Ieee80211PrimConfirm::operator=(other);
    return *this;
}

void Ieee80211Prim_AssociateConfirm::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimConfirm::parsimPack(b);
}

void Ieee80211Prim_AssociateConfirm::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimConfirm::parsimUnpack(b);
}

class Ieee80211Prim_AssociateConfirmDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_AssociateConfirmDescriptor();
    virtual ~Ieee80211Prim_AssociateConfirmDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_AssociateConfirmDescriptor);

Ieee80211Prim_AssociateConfirmDescriptor::Ieee80211Prim_AssociateConfirmDescriptor() : cClassDescriptor("Ieee80211Prim_AssociateConfirm", "Ieee80211PrimConfirm")
{
}

Ieee80211Prim_AssociateConfirmDescriptor::~Ieee80211Prim_AssociateConfirmDescriptor()
{
}

bool Ieee80211Prim_AssociateConfirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_AssociateConfirm *>(obj)!=NULL;
}

const char *Ieee80211Prim_AssociateConfirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_AssociateConfirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211Prim_AssociateConfirmDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_AssociateConfirmDescriptor::getFieldName(void *object, int field) const
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

const char *Ieee80211Prim_AssociateConfirmDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211Prim_AssociateConfirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_AssociateConfirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateConfirm *pp = (Ieee80211Prim_AssociateConfirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_AssociateConfirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateConfirm *pp = (Ieee80211Prim_AssociateConfirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool Ieee80211Prim_AssociateConfirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateConfirm *pp = (Ieee80211Prim_AssociateConfirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211Prim_AssociateConfirmDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_AssociateConfirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_AssociateConfirm *pp = (Ieee80211Prim_AssociateConfirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_ReassociateRequest);

Ieee80211Prim_ReassociateRequest::Ieee80211Prim_ReassociateRequest() : Ieee80211Prim_AssociateRequest()
{
}

Ieee80211Prim_ReassociateRequest::Ieee80211Prim_ReassociateRequest(const Ieee80211Prim_ReassociateRequest& other) : Ieee80211Prim_AssociateRequest()
{
    operator=(other);
}

Ieee80211Prim_ReassociateRequest::~Ieee80211Prim_ReassociateRequest()
{
}

Ieee80211Prim_ReassociateRequest& Ieee80211Prim_ReassociateRequest::operator=(const Ieee80211Prim_ReassociateRequest& other)
{
    if (this==&other) return *this;
    Ieee80211Prim_AssociateRequest::operator=(other);
    return *this;
}

void Ieee80211Prim_ReassociateRequest::parsimPack(cCommBuffer *b)
{
    Ieee80211Prim_AssociateRequest::parsimPack(b);
}

void Ieee80211Prim_ReassociateRequest::parsimUnpack(cCommBuffer *b)
{
    Ieee80211Prim_AssociateRequest::parsimUnpack(b);
}

class Ieee80211Prim_ReassociateRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_ReassociateRequestDescriptor();
    virtual ~Ieee80211Prim_ReassociateRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_ReassociateRequestDescriptor);

Ieee80211Prim_ReassociateRequestDescriptor::Ieee80211Prim_ReassociateRequestDescriptor() : cClassDescriptor("Ieee80211Prim_ReassociateRequest", "Ieee80211Prim_AssociateRequest")
{
}

Ieee80211Prim_ReassociateRequestDescriptor::~Ieee80211Prim_ReassociateRequestDescriptor()
{
}

bool Ieee80211Prim_ReassociateRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_ReassociateRequest *>(obj)!=NULL;
}

const char *Ieee80211Prim_ReassociateRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_ReassociateRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211Prim_ReassociateRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_ReassociateRequestDescriptor::getFieldName(void *object, int field) const
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

const char *Ieee80211Prim_ReassociateRequestDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211Prim_ReassociateRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_ReassociateRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateRequest *pp = (Ieee80211Prim_ReassociateRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_ReassociateRequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateRequest *pp = (Ieee80211Prim_ReassociateRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool Ieee80211Prim_ReassociateRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateRequest *pp = (Ieee80211Prim_ReassociateRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211Prim_ReassociateRequestDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_ReassociateRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateRequest *pp = (Ieee80211Prim_ReassociateRequest *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_ReassociateConfirm);

Ieee80211Prim_ReassociateConfirm::Ieee80211Prim_ReassociateConfirm() : Ieee80211Prim_AssociateConfirm()
{
}

Ieee80211Prim_ReassociateConfirm::Ieee80211Prim_ReassociateConfirm(const Ieee80211Prim_ReassociateConfirm& other) : Ieee80211Prim_AssociateConfirm()
{
    operator=(other);
}

Ieee80211Prim_ReassociateConfirm::~Ieee80211Prim_ReassociateConfirm()
{
}

Ieee80211Prim_ReassociateConfirm& Ieee80211Prim_ReassociateConfirm::operator=(const Ieee80211Prim_ReassociateConfirm& other)
{
    if (this==&other) return *this;
    Ieee80211Prim_AssociateConfirm::operator=(other);
    return *this;
}

void Ieee80211Prim_ReassociateConfirm::parsimPack(cCommBuffer *b)
{
    Ieee80211Prim_AssociateConfirm::parsimPack(b);
}

void Ieee80211Prim_ReassociateConfirm::parsimUnpack(cCommBuffer *b)
{
    Ieee80211Prim_AssociateConfirm::parsimUnpack(b);
}

class Ieee80211Prim_ReassociateConfirmDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_ReassociateConfirmDescriptor();
    virtual ~Ieee80211Prim_ReassociateConfirmDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_ReassociateConfirmDescriptor);

Ieee80211Prim_ReassociateConfirmDescriptor::Ieee80211Prim_ReassociateConfirmDescriptor() : cClassDescriptor("Ieee80211Prim_ReassociateConfirm", "Ieee80211Prim_AssociateConfirm")
{
}

Ieee80211Prim_ReassociateConfirmDescriptor::~Ieee80211Prim_ReassociateConfirmDescriptor()
{
}

bool Ieee80211Prim_ReassociateConfirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_ReassociateConfirm *>(obj)!=NULL;
}

const char *Ieee80211Prim_ReassociateConfirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_ReassociateConfirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211Prim_ReassociateConfirmDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_ReassociateConfirmDescriptor::getFieldName(void *object, int field) const
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

const char *Ieee80211Prim_ReassociateConfirmDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211Prim_ReassociateConfirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211Prim_ReassociateConfirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateConfirm *pp = (Ieee80211Prim_ReassociateConfirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_ReassociateConfirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateConfirm *pp = (Ieee80211Prim_ReassociateConfirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool Ieee80211Prim_ReassociateConfirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateConfirm *pp = (Ieee80211Prim_ReassociateConfirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211Prim_ReassociateConfirmDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_ReassociateConfirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_ReassociateConfirm *pp = (Ieee80211Prim_ReassociateConfirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211Prim_DisassociateRequest);

Ieee80211Prim_DisassociateRequest::Ieee80211Prim_DisassociateRequest() : Ieee80211PrimRequest()
{
    this->reasonCode_var = 0;
}

Ieee80211Prim_DisassociateRequest::Ieee80211Prim_DisassociateRequest(const Ieee80211Prim_DisassociateRequest& other) : Ieee80211PrimRequest()
{
    operator=(other);
}

Ieee80211Prim_DisassociateRequest::~Ieee80211Prim_DisassociateRequest()
{
}

Ieee80211Prim_DisassociateRequest& Ieee80211Prim_DisassociateRequest::operator=(const Ieee80211Prim_DisassociateRequest& other)
{
    if (this==&other) return *this;
    Ieee80211PrimRequest::operator=(other);
    this->address_var = other.address_var;
    this->reasonCode_var = other.reasonCode_var;
    return *this;
}

void Ieee80211Prim_DisassociateRequest::parsimPack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimPack(b);
    doPacking(b,this->address_var);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211Prim_DisassociateRequest::parsimUnpack(cCommBuffer *b)
{
    Ieee80211PrimRequest::parsimUnpack(b);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->reasonCode_var);
}

MACAddress& Ieee80211Prim_DisassociateRequest::getAddress()
{
    return address_var;
}

void Ieee80211Prim_DisassociateRequest::setAddress(const MACAddress& address_var)
{
    this->address_var = address_var;
}

int Ieee80211Prim_DisassociateRequest::getReasonCode() const
{
    return reasonCode_var;
}

void Ieee80211Prim_DisassociateRequest::setReasonCode(int reasonCode_var)
{
    this->reasonCode_var = reasonCode_var;
}

class Ieee80211Prim_DisassociateRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211Prim_DisassociateRequestDescriptor();
    virtual ~Ieee80211Prim_DisassociateRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211Prim_DisassociateRequestDescriptor);

Ieee80211Prim_DisassociateRequestDescriptor::Ieee80211Prim_DisassociateRequestDescriptor() : cClassDescriptor("Ieee80211Prim_DisassociateRequest", "Ieee80211PrimRequest")
{
}

Ieee80211Prim_DisassociateRequestDescriptor::~Ieee80211Prim_DisassociateRequestDescriptor()
{
}

bool Ieee80211Prim_DisassociateRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Prim_DisassociateRequest *>(obj)!=NULL;
}

const char *Ieee80211Prim_DisassociateRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211Prim_DisassociateRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211Prim_DisassociateRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211Prim_DisassociateRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "address";
        case 1: return "reasonCode";
        default: return NULL;
    }
}

const char *Ieee80211Prim_DisassociateRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress";
        case 1: return "int";
        default: return NULL;
    }
}

const char *Ieee80211Prim_DisassociateRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "Ieee80211ReasonCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211Prim_DisassociateRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DisassociateRequest *pp = (Ieee80211Prim_DisassociateRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee80211Prim_DisassociateRequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DisassociateRequest *pp = (Ieee80211Prim_DisassociateRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getReasonCode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee80211Prim_DisassociateRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DisassociateRequest *pp = (Ieee80211Prim_DisassociateRequest *)object; (void)pp;
    switch (field) {
        case 1: pp->setReasonCode(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211Prim_DisassociateRequestDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211Prim_DisassociateRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Prim_DisassociateRequest *pp = (Ieee80211Prim_DisassociateRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}


