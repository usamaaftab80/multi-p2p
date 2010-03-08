//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/rtp/profiles/avprofile/RTPMpegPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPMpegPacket_m.h"

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




Register_Class(RTPMpegPacket);

RTPMpegPacket::RTPMpegPacket(const char *name, int kind) : cPacket(name,kind)
{
    this->headerLength_var = 4;
    this->payloadLength_var = 0;
    this->pictureType_var = 0;
}

RTPMpegPacket::RTPMpegPacket(const RTPMpegPacket& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

RTPMpegPacket::~RTPMpegPacket()
{
}

RTPMpegPacket& RTPMpegPacket::operator=(const RTPMpegPacket& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->headerLength_var = other.headerLength_var;
    this->payloadLength_var = other.payloadLength_var;
    this->pictureType_var = other.pictureType_var;
    return *this;
}

void RTPMpegPacket::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->headerLength_var);
    doPacking(b,this->payloadLength_var);
    doPacking(b,this->pictureType_var);
}

void RTPMpegPacket::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->headerLength_var);
    doUnpacking(b,this->payloadLength_var);
    doUnpacking(b,this->pictureType_var);
}

int RTPMpegPacket::getHeaderLength() const
{
    return headerLength_var;
}

void RTPMpegPacket::setHeaderLength(int headerLength_var)
{
    this->headerLength_var = headerLength_var;
}

int RTPMpegPacket::getPayloadLength() const
{
    return payloadLength_var;
}

void RTPMpegPacket::setPayloadLength(int payloadLength_var)
{
    this->payloadLength_var = payloadLength_var;
}

int RTPMpegPacket::getPictureType() const
{
    return pictureType_var;
}

void RTPMpegPacket::setPictureType(int pictureType_var)
{
    this->pictureType_var = pictureType_var;
}

class RTPMpegPacketDescriptor : public cClassDescriptor
{
  public:
    RTPMpegPacketDescriptor();
    virtual ~RTPMpegPacketDescriptor();

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

Register_ClassDescriptor(RTPMpegPacketDescriptor);

RTPMpegPacketDescriptor::RTPMpegPacketDescriptor() : cClassDescriptor("RTPMpegPacket", "cPacket")
{
}

RTPMpegPacketDescriptor::~RTPMpegPacketDescriptor()
{
}

bool RTPMpegPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPMpegPacket *>(obj)!=NULL;
}

const char *RTPMpegPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPMpegPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RTPMpegPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTPMpegPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "headerLength";
        case 1: return "payloadLength";
        case 2: return "pictureType";
        default: return NULL;
    }
}

const char *RTPMpegPacketDescriptor::getFieldTypeString(void *object, int field) const
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
        case 2: return "int";
        default: return NULL;
    }
}

const char *RTPMpegPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPMpegPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RTPMpegPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getHeaderLength(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getPayloadLength(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getPictureType(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool RTPMpegPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setHeaderLength(string2long(value)); return true;
        case 1: pp->setPayloadLength(string2long(value)); return true;
        case 2: pp->setPictureType(string2long(value)); return true;
        default: return false;
    }
}

const char *RTPMpegPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPMpegPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


