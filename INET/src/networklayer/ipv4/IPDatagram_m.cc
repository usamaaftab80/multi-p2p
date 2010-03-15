//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ipv4/IPDatagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPDatagram_m.h"

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
    cEnum *e = cEnum::find("IPOptionClass");
    if (!e) enums.getInstance()->add(e = new cEnum("IPOptionClass"));
    e->insert(IPOPTION_CLASS_CONTROL, "IPOPTION_CLASS_CONTROL");
    e->insert(IPOPTION_CLASS_RESERVED, "IPOPTION_CLASS_RESERVED");
    e->insert(IPOPTION_CLASS_DEBUGGING, "IPOPTION_CLASS_DEBUGGING");
    e->insert(IPOPTION_CLASS_RESERVED2, "IPOPTION_CLASS_RESERVED2");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("IPOption");
    if (!e) enums.getInstance()->add(e = new cEnum("IPOption"));
    e->insert(IPOPTION_END_OF_OPTIONS, "IPOPTION_END_OF_OPTIONS");
    e->insert(IPOPTION_NO_OPTION, "IPOPTION_NO_OPTION");
    e->insert(IPOPTION_SECURITY, "IPOPTION_SECURITY");
    e->insert(IPOPTION_LOOSE_SOURCE_ROUTING, "IPOPTION_LOOSE_SOURCE_ROUTING");
    e->insert(IPOPTION_TIMESTAMP, "IPOPTION_TIMESTAMP");
    e->insert(IPOPTION_RECORD_ROUTE, "IPOPTION_RECORD_ROUTE");
    e->insert(IPOPTION_STREAM_ID, "IPOPTION_STREAM_ID");
    e->insert(IPOPTION_STRICT_SOURCE_ROUTING, "IPOPTION_STRICT_SOURCE_ROUTING");
    e->insert(IPOPTION_ROUTER_ALERT, "IPOPTION_ROUTER_ALERT");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("TimestampFlag");
    if (!e) enums.getInstance()->add(e = new cEnum("TimestampFlag"));
    e->insert(IP_TIMESTAMP_TIMESTAMP_ONLY, "IP_TIMESTAMP_TIMESTAMP_ONLY");
    e->insert(IP_TIMESTAMP_WITH_ADDRESS, "IP_TIMESTAMP_WITH_ADDRESS");
    e->insert(IP_TIMESTAMP_SENDER_INIT_ADDRESS, "IP_TIMESTAMP_SENDER_INIT_ADDRESS");
);

Register_Class(IPRecordRouteOption);

IPRecordRouteOption::IPRecordRouteOption() : cObject()
{
    this->nextAddressPtr_var = 0;
}

IPRecordRouteOption::IPRecordRouteOption(const IPRecordRouteOption& other) : cObject()
{
    operator=(other);
}

IPRecordRouteOption::~IPRecordRouteOption()
{
}

IPRecordRouteOption& IPRecordRouteOption::operator=(const IPRecordRouteOption& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
    this->nextAddressPtr_var = other.nextAddressPtr_var;
    return *this;
}

void IPRecordRouteOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doPacking(b,this->nextAddressPtr_var);
}

void IPRecordRouteOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doUnpacking(b,this->nextAddressPtr_var);
}

unsigned int IPRecordRouteOption::getRecordAddressArraySize() const
{
    return MAX_IPADDR_OPTION_ENTRIES;
}

IPAddress& IPRecordRouteOption::getRecordAddress(unsigned int k)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %d", k);
    return recordAddress_var[k];
}

void IPRecordRouteOption::setRecordAddress(unsigned int k, const IPAddress& recordAddress_var)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %d", k);
    this->recordAddress_var[k] = recordAddress_var;
}

short IPRecordRouteOption::getNextAddressPtr() const
{
    return nextAddressPtr_var;
}

void IPRecordRouteOption::setNextAddressPtr(short nextAddressPtr_var)
{
    this->nextAddressPtr_var = nextAddressPtr_var;
}

class IPRecordRouteOptionDescriptor : public cClassDescriptor
{
  public:
    IPRecordRouteOptionDescriptor();
    virtual ~IPRecordRouteOptionDescriptor();

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

Register_ClassDescriptor(IPRecordRouteOptionDescriptor);

IPRecordRouteOptionDescriptor::IPRecordRouteOptionDescriptor() : cClassDescriptor("IPRecordRouteOption", "cObject")
{
}

IPRecordRouteOptionDescriptor::~IPRecordRouteOptionDescriptor()
{
}

bool IPRecordRouteOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPRecordRouteOption *>(obj)!=NULL;
}

const char *IPRecordRouteOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPRecordRouteOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int IPRecordRouteOptionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *IPRecordRouteOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "recordAddress";
        case 1: return "nextAddressPtr";
        default: return NULL;
    }
}

const char *IPRecordRouteOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "short";
        default: return NULL;
    }
}

const char *IPRecordRouteOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPRecordRouteOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPRecordRouteOption *pp = (IPRecordRouteOption *)object; (void)pp;
    switch (field) {
        case 0: return MAX_IPADDR_OPTION_ENTRIES;
        default: return 0;
    }
}

bool IPRecordRouteOptionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPRecordRouteOption *pp = (IPRecordRouteOption *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRecordAddress(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getNextAddressPtr(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool IPRecordRouteOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPRecordRouteOption *pp = (IPRecordRouteOption *)object; (void)pp;
    switch (field) {
        case 1: pp->setNextAddressPtr(string2long(value)); return true;
        default: return false;
    }
}

const char *IPRecordRouteOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *IPRecordRouteOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPRecordRouteOption *pp = (IPRecordRouteOption *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(IPTimestampOption);

IPTimestampOption::IPTimestampOption() : cObject()
{
    this->flag_var = 0;
    this->overflow_var = 0;
    this->nextAddressPtr_var = 0;
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordTimestamp_var[i] = 0;
}

IPTimestampOption::IPTimestampOption(const IPTimestampOption& other) : cObject()
{
    operator=(other);
}

IPTimestampOption::~IPTimestampOption()
{
}

IPTimestampOption& IPTimestampOption::operator=(const IPTimestampOption& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->flag_var = other.flag_var;
    this->overflow_var = other.overflow_var;
    this->nextAddressPtr_var = other.nextAddressPtr_var;
    for (unsigned int i=0; i<MAX_TIMESTAMP_OPTION_ENTRIES; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordTimestamp_var[i] = other.recordTimestamp_var[i];
    return *this;
}

void IPTimestampOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->flag_var);
    doPacking(b,this->overflow_var);
    doPacking(b,this->nextAddressPtr_var);
    doPacking(b,this->recordAddress_var,MAX_TIMESTAMP_OPTION_ENTRIES);
    doPacking(b,this->recordTimestamp_var,MAX_IPADDR_OPTION_ENTRIES);
}

void IPTimestampOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->flag_var);
    doUnpacking(b,this->overflow_var);
    doUnpacking(b,this->nextAddressPtr_var);
    doUnpacking(b,this->recordAddress_var,MAX_TIMESTAMP_OPTION_ENTRIES);
    doUnpacking(b,this->recordTimestamp_var,MAX_IPADDR_OPTION_ENTRIES);
}

int IPTimestampOption::getFlag() const
{
    return flag_var;
}

void IPTimestampOption::setFlag(int flag_var)
{
    this->flag_var = flag_var;
}

short IPTimestampOption::getOverflow() const
{
    return overflow_var;
}

void IPTimestampOption::setOverflow(short overflow_var)
{
    this->overflow_var = overflow_var;
}

short IPTimestampOption::getNextAddressPtr() const
{
    return nextAddressPtr_var;
}

void IPTimestampOption::setNextAddressPtr(short nextAddressPtr_var)
{
    this->nextAddressPtr_var = nextAddressPtr_var;
}

unsigned int IPTimestampOption::getRecordAddressArraySize() const
{
    return MAX_TIMESTAMP_OPTION_ENTRIES;
}

IPAddress& IPTimestampOption::getRecordAddress(unsigned int k)
{
    if (k>=MAX_TIMESTAMP_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_TIMESTAMP_OPTION_ENTRIES indexed by %d", k);
    return recordAddress_var[k];
}

void IPTimestampOption::setRecordAddress(unsigned int k, const IPAddress& recordAddress_var)
{
    if (k>=MAX_TIMESTAMP_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_TIMESTAMP_OPTION_ENTRIES indexed by %d", k);
    this->recordAddress_var[k] = recordAddress_var;
}

unsigned int IPTimestampOption::getRecordTimestampArraySize() const
{
    return MAX_IPADDR_OPTION_ENTRIES;
}

simtime_t IPTimestampOption::getRecordTimestamp(unsigned int k) const
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %d", k);
    return recordTimestamp_var[k];
}

void IPTimestampOption::setRecordTimestamp(unsigned int k, simtime_t recordTimestamp_var)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %d", k);
    this->recordTimestamp_var[k] = recordTimestamp_var;
}

class IPTimestampOptionDescriptor : public cClassDescriptor
{
  public:
    IPTimestampOptionDescriptor();
    virtual ~IPTimestampOptionDescriptor();

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

Register_ClassDescriptor(IPTimestampOptionDescriptor);

IPTimestampOptionDescriptor::IPTimestampOptionDescriptor() : cClassDescriptor("IPTimestampOption", "cObject")
{
}

IPTimestampOptionDescriptor::~IPTimestampOptionDescriptor()
{
}

bool IPTimestampOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPTimestampOption *>(obj)!=NULL;
}

const char *IPTimestampOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPTimestampOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int IPTimestampOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 4: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *IPTimestampOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "flag";
        case 1: return "overflow";
        case 2: return "nextAddressPtr";
        case 3: return "recordAddress";
        case 4: return "recordTimestamp";
        default: return NULL;
    }
}

const char *IPTimestampOptionDescriptor::getFieldTypeString(void *object, int field) const
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
        case 2: return "short";
        case 3: return "IPAddress";
        case 4: return "simtime_t";
        default: return NULL;
    }
}

const char *IPTimestampOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "TimestampFlag";
            return NULL;
        default: return NULL;
    }
}

int IPTimestampOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPTimestampOption *pp = (IPTimestampOption *)object; (void)pp;
    switch (field) {
        case 3: return MAX_TIMESTAMP_OPTION_ENTRIES;
        case 4: return MAX_IPADDR_OPTION_ENTRIES;
        default: return 0;
    }
}

bool IPTimestampOptionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPTimestampOption *pp = (IPTimestampOption *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getFlag(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getOverflow(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getNextAddressPtr(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getRecordAddress(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: double2string(pp->getRecordTimestamp(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool IPTimestampOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPTimestampOption *pp = (IPTimestampOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setFlag(string2long(value)); return true;
        case 1: pp->setOverflow(string2long(value)); return true;
        case 2: pp->setNextAddressPtr(string2long(value)); return true;
        case 4: pp->setRecordTimestamp(i,string2double(value)); return true;
        default: return false;
    }
}

const char *IPTimestampOptionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return "IPAddress"; break;
        default: return NULL;
    }
}

void *IPTimestampOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPTimestampOption *pp = (IPTimestampOption *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(IPSourceRoutingOption);

IPSourceRoutingOption::IPSourceRoutingOption() : cObject()
{
    this->nextAddressPtr_var = 0;
    this->lastAddressPtr_var = 0;
}

IPSourceRoutingOption::IPSourceRoutingOption(const IPSourceRoutingOption& other) : cObject()
{
    operator=(other);
}

IPSourceRoutingOption::~IPSourceRoutingOption()
{
}

IPSourceRoutingOption& IPSourceRoutingOption::operator=(const IPSourceRoutingOption& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
    this->nextAddressPtr_var = other.nextAddressPtr_var;
    this->lastAddressPtr_var = other.lastAddressPtr_var;
    return *this;
}

void IPSourceRoutingOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doPacking(b,this->nextAddressPtr_var);
    doPacking(b,this->lastAddressPtr_var);
}

void IPSourceRoutingOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doUnpacking(b,this->nextAddressPtr_var);
    doUnpacking(b,this->lastAddressPtr_var);
}

unsigned int IPSourceRoutingOption::getRecordAddressArraySize() const
{
    return MAX_IPADDR_OPTION_ENTRIES;
}

IPAddress& IPSourceRoutingOption::getRecordAddress(unsigned int k)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %d", k);
    return recordAddress_var[k];
}

void IPSourceRoutingOption::setRecordAddress(unsigned int k, const IPAddress& recordAddress_var)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %d", k);
    this->recordAddress_var[k] = recordAddress_var;
}

short IPSourceRoutingOption::getNextAddressPtr() const
{
    return nextAddressPtr_var;
}

void IPSourceRoutingOption::setNextAddressPtr(short nextAddressPtr_var)
{
    this->nextAddressPtr_var = nextAddressPtr_var;
}

short IPSourceRoutingOption::getLastAddressPtr() const
{
    return lastAddressPtr_var;
}

void IPSourceRoutingOption::setLastAddressPtr(short lastAddressPtr_var)
{
    this->lastAddressPtr_var = lastAddressPtr_var;
}

class IPSourceRoutingOptionDescriptor : public cClassDescriptor
{
  public:
    IPSourceRoutingOptionDescriptor();
    virtual ~IPSourceRoutingOptionDescriptor();

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

Register_ClassDescriptor(IPSourceRoutingOptionDescriptor);

IPSourceRoutingOptionDescriptor::IPSourceRoutingOptionDescriptor() : cClassDescriptor("IPSourceRoutingOption", "cObject")
{
}

IPSourceRoutingOptionDescriptor::~IPSourceRoutingOptionDescriptor()
{
}

bool IPSourceRoutingOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPSourceRoutingOption *>(obj)!=NULL;
}

const char *IPSourceRoutingOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPSourceRoutingOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IPSourceRoutingOptionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *IPSourceRoutingOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "recordAddress";
        case 1: return "nextAddressPtr";
        case 2: return "lastAddressPtr";
        default: return NULL;
    }
}

const char *IPSourceRoutingOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "short";
        case 2: return "short";
        default: return NULL;
    }
}

const char *IPSourceRoutingOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPSourceRoutingOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPSourceRoutingOption *pp = (IPSourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 0: return MAX_IPADDR_OPTION_ENTRIES;
        default: return 0;
    }
}

bool IPSourceRoutingOptionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPSourceRoutingOption *pp = (IPSourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRecordAddress(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getNextAddressPtr(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getLastAddressPtr(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool IPSourceRoutingOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPSourceRoutingOption *pp = (IPSourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 1: pp->setNextAddressPtr(string2long(value)); return true;
        case 2: pp->setLastAddressPtr(string2long(value)); return true;
        default: return false;
    }
}

const char *IPSourceRoutingOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *IPSourceRoutingOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPSourceRoutingOption *pp = (IPSourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(IPDatagram);

IPDatagram::IPDatagram(const char *name, int kind) : cPacket(name,kind)
{
    this->version_var = 4;
    this->headerLength_var = IP_HEADER_BYTES;
    this->transportProtocol_var = IP_PROT_NONE;
    this->timeToLive_var = 0;
    this->identification_var = 0;
    this->moreFragments_var = 0;
    this->dontFragment_var = 0;
    this->fragmentOffset_var = 0;
    this->diffServCodePoint_var = 0;
    this->optionCode_var = IPOPTION_NO_OPTION;
    this->minBW_var = 0;
}

IPDatagram::IPDatagram(const IPDatagram& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

IPDatagram::~IPDatagram()
{
}

IPDatagram& IPDatagram::operator=(const IPDatagram& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->version_var = other.version_var;
    this->headerLength_var = other.headerLength_var;
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->transportProtocol_var = other.transportProtocol_var;
    this->timeToLive_var = other.timeToLive_var;
    this->identification_var = other.identification_var;
    this->moreFragments_var = other.moreFragments_var;
    this->dontFragment_var = other.dontFragment_var;
    this->fragmentOffset_var = other.fragmentOffset_var;
    this->diffServCodePoint_var = other.diffServCodePoint_var;
    this->optionCode_var = other.optionCode_var;
    this->recordRoute_var = other.recordRoute_var;
    this->timestampOption_var = other.timestampOption_var;
    this->sourceRoutingOption_var = other.sourceRoutingOption_var;
    this->minBW_var = other.minBW_var;
    return *this;
}

void IPDatagram::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->headerLength_var);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->transportProtocol_var);
    doPacking(b,this->timeToLive_var);
    doPacking(b,this->identification_var);
    doPacking(b,this->moreFragments_var);
    doPacking(b,this->dontFragment_var);
    doPacking(b,this->fragmentOffset_var);
    doPacking(b,this->diffServCodePoint_var);
    doPacking(b,this->optionCode_var);
    doPacking(b,this->recordRoute_var);
    doPacking(b,this->timestampOption_var);
    doPacking(b,this->sourceRoutingOption_var);
    doPacking(b,this->minBW_var);
}

void IPDatagram::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->headerLength_var);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->transportProtocol_var);
    doUnpacking(b,this->timeToLive_var);
    doUnpacking(b,this->identification_var);
    doUnpacking(b,this->moreFragments_var);
    doUnpacking(b,this->dontFragment_var);
    doUnpacking(b,this->fragmentOffset_var);
    doUnpacking(b,this->diffServCodePoint_var);
    doUnpacking(b,this->optionCode_var);
    doUnpacking(b,this->recordRoute_var);
    doUnpacking(b,this->timestampOption_var);
    doUnpacking(b,this->sourceRoutingOption_var);
    doUnpacking(b,this->minBW_var);
}

short IPDatagram::getVersion() const
{
    return version_var;
}

void IPDatagram::setVersion(short version_var)
{
    this->version_var = version_var;
}

short IPDatagram::getHeaderLength() const
{
    return headerLength_var;
}

void IPDatagram::setHeaderLength(short headerLength_var)
{
    this->headerLength_var = headerLength_var;
}

IPAddress& IPDatagram::getSrcAddress()
{
    return srcAddress_var;
}

void IPDatagram::setSrcAddress(const IPAddress& srcAddress_var)
{
    this->srcAddress_var = srcAddress_var;
}

IPAddress& IPDatagram::getDestAddress()
{
    return destAddress_var;
}

void IPDatagram::setDestAddress(const IPAddress& destAddress_var)
{
    this->destAddress_var = destAddress_var;
}

int IPDatagram::getTransportProtocol() const
{
    return transportProtocol_var;
}

void IPDatagram::setTransportProtocol(int transportProtocol_var)
{
    this->transportProtocol_var = transportProtocol_var;
}

short IPDatagram::getTimeToLive() const
{
    return timeToLive_var;
}

void IPDatagram::setTimeToLive(short timeToLive_var)
{
    this->timeToLive_var = timeToLive_var;
}

int IPDatagram::getIdentification() const
{
    return identification_var;
}

void IPDatagram::setIdentification(int identification_var)
{
    this->identification_var = identification_var;
}

bool IPDatagram::getMoreFragments() const
{
    return moreFragments_var;
}

void IPDatagram::setMoreFragments(bool moreFragments_var)
{
    this->moreFragments_var = moreFragments_var;
}

bool IPDatagram::getDontFragment() const
{
    return dontFragment_var;
}

void IPDatagram::setDontFragment(bool dontFragment_var)
{
    this->dontFragment_var = dontFragment_var;
}

int IPDatagram::getFragmentOffset() const
{
    return fragmentOffset_var;
}

void IPDatagram::setFragmentOffset(int fragmentOffset_var)
{
    this->fragmentOffset_var = fragmentOffset_var;
}

unsigned char IPDatagram::getDiffServCodePoint() const
{
    return diffServCodePoint_var;
}

void IPDatagram::setDiffServCodePoint(unsigned char diffServCodePoint_var)
{
    this->diffServCodePoint_var = diffServCodePoint_var;
}

int IPDatagram::getOptionCode() const
{
    return optionCode_var;
}

void IPDatagram::setOptionCode(int optionCode_var)
{
    this->optionCode_var = optionCode_var;
}

IPRecordRouteOption& IPDatagram::getRecordRoute()
{
    return recordRoute_var;
}

void IPDatagram::setRecordRoute(const IPRecordRouteOption& recordRoute_var)
{
    this->recordRoute_var = recordRoute_var;
}

IPTimestampOption& IPDatagram::getTimestampOption()
{
    return timestampOption_var;
}

void IPDatagram::setTimestampOption(const IPTimestampOption& timestampOption_var)
{
    this->timestampOption_var = timestampOption_var;
}

IPSourceRoutingOption& IPDatagram::getSourceRoutingOption()
{
    return sourceRoutingOption_var;
}

void IPDatagram::setSourceRoutingOption(const IPSourceRoutingOption& sourceRoutingOption_var)
{
    this->sourceRoutingOption_var = sourceRoutingOption_var;
}

double IPDatagram::getMinBW() const
{
    return minBW_var;
}

void IPDatagram::setMinBW(double minBW_var)
{
    this->minBW_var = minBW_var;
}

class IPDatagramDescriptor : public cClassDescriptor
{
  public:
    IPDatagramDescriptor();
    virtual ~IPDatagramDescriptor();

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

Register_ClassDescriptor(IPDatagramDescriptor);

IPDatagramDescriptor::IPDatagramDescriptor() : cClassDescriptor("IPDatagram", "cPacket")
{
}

IPDatagramDescriptor::~IPDatagramDescriptor()
{
}

bool IPDatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPDatagram *>(obj)!=NULL;
}

const char *IPDatagramDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPDatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 16+basedesc->getFieldCount(object) : 16;
}

unsigned int IPDatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISCOMPOUND;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        case 9: return FD_ISEDITABLE;
        case 10: return FD_ISEDITABLE;
        case 11: return FD_ISEDITABLE;
        case 12: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 13: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 14: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 15: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *IPDatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "version";
        case 1: return "headerLength";
        case 2: return "srcAddress";
        case 3: return "destAddress";
        case 4: return "transportProtocol";
        case 5: return "timeToLive";
        case 6: return "identification";
        case 7: return "moreFragments";
        case 8: return "dontFragment";
        case 9: return "fragmentOffset";
        case 10: return "diffServCodePoint";
        case 11: return "optionCode";
        case 12: return "recordRoute";
        case 13: return "timestampOption";
        case 14: return "sourceRoutingOption";
        case 15: return "minBW";
        default: return NULL;
    }
}

const char *IPDatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "short";
        case 1: return "short";
        case 2: return "IPAddress";
        case 3: return "IPAddress";
        case 4: return "int";
        case 5: return "short";
        case 6: return "int";
        case 7: return "bool";
        case 8: return "bool";
        case 9: return "int";
        case 10: return "unsigned char";
        case 11: return "int";
        case 12: return "IPRecordRouteOption";
        case 13: return "IPTimestampOption";
        case 14: return "IPSourceRoutingOption";
        case 15: return "double";
        default: return NULL;
    }
}

const char *IPDatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        case 11:
            if (!strcmp(propertyname,"enum")) return "IPOption";
            return NULL;
        default: return NULL;
    }
}

int IPDatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPDatagram *pp = (IPDatagram *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool IPDatagramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    IPDatagram *pp = (IPDatagram *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getVersion(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getHeaderLength(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getSrcAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: {std::stringstream out; out << pp->getDestAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getTransportProtocol(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getTimeToLive(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getIdentification(),resultbuf,bufsize); return true;
        case 7: bool2string(pp->getMoreFragments(),resultbuf,bufsize); return true;
        case 8: bool2string(pp->getDontFragment(),resultbuf,bufsize); return true;
        case 9: long2string(pp->getFragmentOffset(),resultbuf,bufsize); return true;
        case 10: ulong2string(pp->getDiffServCodePoint(),resultbuf,bufsize); return true;
        case 11: long2string(pp->getOptionCode(),resultbuf,bufsize); return true;
        case 12: {std::stringstream out; out << pp->getRecordRoute(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 13: {std::stringstream out; out << pp->getTimestampOption(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 14: {std::stringstream out; out << pp->getSourceRoutingOption(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 15: double2string(pp->getMinBW(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool IPDatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPDatagram *pp = (IPDatagram *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2long(value)); return true;
        case 1: pp->setHeaderLength(string2long(value)); return true;
        case 4: pp->setTransportProtocol(string2long(value)); return true;
        case 5: pp->setTimeToLive(string2long(value)); return true;
        case 6: pp->setIdentification(string2long(value)); return true;
        case 7: pp->setMoreFragments(string2bool(value)); return true;
        case 8: pp->setDontFragment(string2bool(value)); return true;
        case 9: pp->setFragmentOffset(string2long(value)); return true;
        case 10: pp->setDiffServCodePoint(string2ulong(value)); return true;
        case 11: pp->setOptionCode(string2long(value)); return true;
        case 15: pp->setMinBW(string2double(value)); return true;
        default: return false;
    }
}

const char *IPDatagramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "IPAddress"; break;
        case 3: return "IPAddress"; break;
        case 12: return "IPRecordRouteOption"; break;
        case 13: return "IPTimestampOption"; break;
        case 14: return "IPSourceRoutingOption"; break;
        default: return NULL;
    }
}

void *IPDatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPDatagram *pp = (IPDatagram *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSrcAddress()); break;
        case 3: return (void *)(&pp->getDestAddress()); break;
        case 12: return (void *)static_cast<cObject *>(&pp->getRecordRoute()); break;
        case 13: return (void *)static_cast<cObject *>(&pp->getTimestampOption()); break;
        case 14: return (void *)static_cast<cObject *>(&pp->getSourceRoutingOption()); break;
        default: return NULL;
    }
}


