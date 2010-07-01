//
// Generated file, do not edit! Created by opp_msgc 4.1 from applications/conferenceapp/ConferenceAppMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ConferenceAppMsg_m.h"

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
    cEnum *e = cEnum::find("MessageType");
    if (!e) enums.getInstance()->add(e = new cEnum("MessageType"));
    e->insert(MYMSG_PING, "MYMSG_PING");
    e->insert(MYMSG_PONG, "MYMSG_PONG");
);

Register_Class(ConferenceAppMsg);

ConferenceAppMsg::ConferenceAppMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = 0;
    this->senderID_var = 0;
    this->data_var = 0;
    this->id_var = 0;
}

ConferenceAppMsg::ConferenceAppMsg(const ConferenceAppMsg& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

ConferenceAppMsg::~ConferenceAppMsg()
{
}

ConferenceAppMsg& ConferenceAppMsg::operator=(const ConferenceAppMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->type_var = other.type_var;
    this->senderAddress_var = other.senderAddress_var;
    this->senderID_var = other.senderID_var;
    this->data_var = other.data_var;
    this->id_var = other.id_var;
    return *this;
}

void ConferenceAppMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->senderAddress_var);
    doPacking(b,this->senderID_var);
    doPacking(b,this->data_var);
    doPacking(b,this->id_var);
}

void ConferenceAppMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->senderAddress_var);
    doUnpacking(b,this->senderID_var);
    doUnpacking(b,this->data_var);
    doUnpacking(b,this->id_var);
}

int ConferenceAppMsg::getType() const
{
    return type_var;
}

void ConferenceAppMsg::setType(int type_var)
{
    this->type_var = type_var;
}

TransportAddress& ConferenceAppMsg::getSenderAddress()
{
    return senderAddress_var;
}

void ConferenceAppMsg::setSenderAddress(const TransportAddress& senderAddress_var)
{
    this->senderAddress_var = senderAddress_var;
}

int ConferenceAppMsg::getSenderID() const
{
    return senderID_var;
}

void ConferenceAppMsg::setSenderID(int senderID_var)
{
    this->senderID_var = senderID_var;
}

const char * ConferenceAppMsg::getData() const
{
    return data_var.c_str();
}

void ConferenceAppMsg::setData(const char * data_var)
{
    this->data_var = data_var;
}

int ConferenceAppMsg::getId() const
{
    return id_var;
}

void ConferenceAppMsg::setId(int id_var)
{
    this->id_var = id_var;
}

class ConferenceAppMsgDescriptor : public cClassDescriptor
{
  public:
    ConferenceAppMsgDescriptor();
    virtual ~ConferenceAppMsgDescriptor();

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

Register_ClassDescriptor(ConferenceAppMsgDescriptor);

ConferenceAppMsgDescriptor::ConferenceAppMsgDescriptor() : cClassDescriptor("ConferenceAppMsg", "cPacket")
{
}

ConferenceAppMsgDescriptor::~ConferenceAppMsgDescriptor()
{
}

bool ConferenceAppMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ConferenceAppMsg *>(obj)!=NULL;
}

const char *ConferenceAppMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ConferenceAppMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int ConferenceAppMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *ConferenceAppMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "senderAddress",
        "senderID",
        "data",
        "id",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int ConferenceAppMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderAddress")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderID")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "data")==0) return base+3;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ConferenceAppMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "TransportAddress",
        "int",
        "string",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *ConferenceAppMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ConferenceAppMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ConferenceAppMsg *pp = (ConferenceAppMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ConferenceAppMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ConferenceAppMsg *pp = (ConferenceAppMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getSenderAddress(); return out.str();}
        case 2: return long2string(pp->getSenderID());
        case 3: return oppstring2string(pp->getData());
        case 4: return long2string(pp->getId());
        default: return "";
    }
}

bool ConferenceAppMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ConferenceAppMsg *pp = (ConferenceAppMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 2: pp->setSenderID(string2long(value)); return true;
        case 3: pp->setData((value)); return true;
        case 4: pp->setId(string2long(value)); return true;
        default: return false;
    }
}

const char *ConferenceAppMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "TransportAddress",
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *ConferenceAppMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ConferenceAppMsg *pp = (ConferenceAppMsg *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSenderAddress()); break;
        default: return NULL;
    }
}


