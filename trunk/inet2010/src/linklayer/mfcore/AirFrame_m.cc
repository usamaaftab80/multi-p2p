//
// Generated file, do not edit! Created by opp_msgc 4.1 from linklayer/mfcore/AirFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "AirFrame_m.h"

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




Register_Class(AirFrame);

AirFrame::AirFrame(const char *name, int kind) : cPacket(name,kind)
{
    this->pSend_var = 0;
    this->channelNumber_var = 0;
    this->duration_var = 0;
    this->bitrate_var = 0;
}

AirFrame::AirFrame(const AirFrame& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

AirFrame::~AirFrame()
{
}

AirFrame& AirFrame::operator=(const AirFrame& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->pSend_var = other.pSend_var;
    this->channelNumber_var = other.channelNumber_var;
    this->duration_var = other.duration_var;
    this->bitrate_var = other.bitrate_var;
    this->senderPos_var = other.senderPos_var;
    return *this;
}

void AirFrame::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->pSend_var);
    doPacking(b,this->channelNumber_var);
    doPacking(b,this->duration_var);
    doPacking(b,this->bitrate_var);
    doPacking(b,this->senderPos_var);
}

void AirFrame::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->pSend_var);
    doUnpacking(b,this->channelNumber_var);
    doUnpacking(b,this->duration_var);
    doUnpacking(b,this->bitrate_var);
    doUnpacking(b,this->senderPos_var);
}

double AirFrame::getPSend() const
{
    return pSend_var;
}

void AirFrame::setPSend(double pSend_var)
{
    this->pSend_var = pSend_var;
}

int AirFrame::getChannelNumber() const
{
    return channelNumber_var;
}

void AirFrame::setChannelNumber(int channelNumber_var)
{
    this->channelNumber_var = channelNumber_var;
}

simtime_t AirFrame::getDuration() const
{
    return duration_var;
}

void AirFrame::setDuration(simtime_t duration_var)
{
    this->duration_var = duration_var;
}

double AirFrame::getBitrate() const
{
    return bitrate_var;
}

void AirFrame::setBitrate(double bitrate_var)
{
    this->bitrate_var = bitrate_var;
}

Coord& AirFrame::getSenderPos()
{
    return senderPos_var;
}

void AirFrame::setSenderPos(const Coord& senderPos_var)
{
    this->senderPos_var = senderPos_var;
}

class AirFrameDescriptor : public cClassDescriptor
{
  public:
    AirFrameDescriptor();
    virtual ~AirFrameDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AirFrameDescriptor);

AirFrameDescriptor::AirFrameDescriptor() : cClassDescriptor("AirFrame", "cPacket")
{
}

AirFrameDescriptor::~AirFrameDescriptor()
{
}

bool AirFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AirFrame *>(obj)!=NULL;
}

const char *AirFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AirFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int AirFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *AirFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "pSend",
        "channelNumber",
        "duration",
        "bitrate",
        "senderPos",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int AirFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pSend")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "channelNumber")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "duration")==0) return base+2;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitrate")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderPos")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AirFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "int",
        "simtime_t",
        "double",
        "Coord",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *AirFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AirFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AirFrame *pp = (AirFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AirFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AirFrame *pp = (AirFrame *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getPSend());
        case 1: return long2string(pp->getChannelNumber());
        case 2: return double2string(pp->getDuration());
        case 3: return double2string(pp->getBitrate());
        case 4: {std::stringstream out; out << pp->getSenderPos(); return out.str();}
        default: return "";
    }
}

bool AirFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AirFrame *pp = (AirFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setPSend(string2double(value)); return true;
        case 1: pp->setChannelNumber(string2long(value)); return true;
        case 2: pp->setDuration(string2double(value)); return true;
        case 3: pp->setBitrate(string2double(value)); return true;
        default: return false;
    }
}

const char *AirFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
        NULL,
        NULL,
        "Coord",
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *AirFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AirFrame *pp = (AirFrame *)object; (void)pp;
    switch (field) {
        case 4: return (void *)(&pp->getSenderPos()); break;
        default: return NULL;
    }
}


