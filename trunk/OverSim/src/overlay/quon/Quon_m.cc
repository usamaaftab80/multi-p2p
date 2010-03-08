//
// Generated file, do not edit! Created by opp_msgc 4.0 from overlay/quon/Quon.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Quon_m.h"

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
    cEnum *e = cEnum::find("QUONCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("QUONCommand"));
    e->insert(JOIN_REQUEST, "JOIN_REQUEST");
    e->insert(JOIN_ACKNOWLEDGE, "JOIN_ACKNOWLEDGE");
    e->insert(NODE_MOVE, "NODE_MOVE");
    e->insert(NEW_NEIGHBORS, "NEW_NEIGHBORS");
    e->insert(NODE_LEAVE, "NODE_LEAVE");
    e->insert(QUON_EVENT, "QUON_EVENT");
);

Register_Class(QuonSelfMessage);

QuonSelfMessage::QuonSelfMessage(const char *name, int kind) : cMessage(name,kind)
{
}

QuonSelfMessage::QuonSelfMessage(const QuonSelfMessage& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

QuonSelfMessage::~QuonSelfMessage()
{
}

QuonSelfMessage& QuonSelfMessage::operator=(const QuonSelfMessage& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    this->key_var = other.key_var;
    return *this;
}

void QuonSelfMessage::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->key_var);
}

void QuonSelfMessage::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
}

OverlayKey& QuonSelfMessage::getKey()
{
    return key_var;
}

void QuonSelfMessage::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

class QuonSelfMessageDescriptor : public cClassDescriptor
{
  public:
    QuonSelfMessageDescriptor();
    virtual ~QuonSelfMessageDescriptor();

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

Register_ClassDescriptor(QuonSelfMessageDescriptor);

QuonSelfMessageDescriptor::QuonSelfMessageDescriptor() : cClassDescriptor("QuonSelfMessage", "cMessage")
{
}

QuonSelfMessageDescriptor::~QuonSelfMessageDescriptor()
{
}

bool QuonSelfMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonSelfMessage *>(obj)!=NULL;
}

const char *QuonSelfMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonSelfMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int QuonSelfMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *QuonSelfMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        default: return NULL;
    }
}

const char *QuonSelfMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        default: return NULL;
    }
}

const char *QuonSelfMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonSelfMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool QuonSelfMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool QuonSelfMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *QuonSelfMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *QuonSelfMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}

Register_Class(QuonMessage);

QuonMessage::QuonMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
    this->AOIsize_var = 0;
}

QuonMessage::QuonMessage(const QuonMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    operator=(other);
}

QuonMessage::~QuonMessage()
{
}

QuonMessage& QuonMessage::operator=(const QuonMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->command_var = other.command_var;
    this->sender_var = other.sender_var;
    this->position_var = other.position_var;
    this->AOIsize_var = other.AOIsize_var;
    return *this;
}

void QuonMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->sender_var);
    doPacking(b,this->position_var);
    doPacking(b,this->AOIsize_var);
}

void QuonMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->sender_var);
    doUnpacking(b,this->position_var);
    doUnpacking(b,this->AOIsize_var);
}

int QuonMessage::getCommand() const
{
    return command_var;
}

void QuonMessage::setCommand(int command_var)
{
    this->command_var = command_var;
}

NodeHandle& QuonMessage::getSender()
{
    return sender_var;
}

void QuonMessage::setSender(const NodeHandle& sender_var)
{
    this->sender_var = sender_var;
}

Vector2D& QuonMessage::getPosition()
{
    return position_var;
}

void QuonMessage::setPosition(const Vector2D& position_var)
{
    this->position_var = position_var;
}

double QuonMessage::getAOIsize() const
{
    return AOIsize_var;
}

void QuonMessage::setAOIsize(double AOIsize_var)
{
    this->AOIsize_var = AOIsize_var;
}

class QuonMessageDescriptor : public cClassDescriptor
{
  public:
    QuonMessageDescriptor();
    virtual ~QuonMessageDescriptor();

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

Register_ClassDescriptor(QuonMessageDescriptor);

QuonMessageDescriptor::QuonMessageDescriptor() : cClassDescriptor("QuonMessage", "BaseOverlayMessage")
{
}

QuonMessageDescriptor::~QuonMessageDescriptor()
{
}

bool QuonMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonMessage *>(obj)!=NULL;
}

const char *QuonMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int QuonMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *QuonMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "command";
        case 1: return "sender";
        case 2: return "position";
        case 3: return "AOIsize";
        default: return NULL;
    }
}

const char *QuonMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "NodeHandle";
        case 2: return "Vector2D";
        case 3: return "double";
        default: return NULL;
    }
}

const char *QuonMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "QUONCommand";
            return NULL;
        default: return NULL;
    }
}

int QuonMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool QuonMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSender(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getPosition(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: double2string(pp->getAOIsize(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool QuonMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 3: pp->setAOIsize(string2double(value)); return true;
        default: return false;
    }
}

const char *QuonMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "NodeHandle"; break;
        case 2: return "Vector2D"; break;
        default: return NULL;
    }
}

void *QuonMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSender()); break;
        case 2: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(QuonListMessage);

QuonListMessage::QuonListMessage(const char *name, int kind) : QuonMessage(name,kind)
{
    neighborHandle_arraysize = 0;
    this->neighborHandle_var = 0;
    neighborPosition_arraysize = 0;
    this->neighborPosition_var = 0;
}

QuonListMessage::QuonListMessage(const QuonListMessage& other) : QuonMessage()
{
    setName(other.getName());
    neighborHandle_arraysize = 0;
    this->neighborHandle_var = 0;
    neighborPosition_arraysize = 0;
    this->neighborPosition_var = 0;
    operator=(other);
}

QuonListMessage::~QuonListMessage()
{
    delete [] neighborHandle_var;
    delete [] neighborPosition_var;
}

QuonListMessage& QuonListMessage::operator=(const QuonListMessage& other)
{
    if (this==&other) return *this;
    QuonMessage::operator=(other);
    delete [] this->neighborHandle_var;
    this->neighborHandle_var = (other.neighborHandle_arraysize==0) ? NULL : new NodeHandle[other.neighborHandle_arraysize];
    neighborHandle_arraysize = other.neighborHandle_arraysize;
    for (unsigned int i=0; i<neighborHandle_arraysize; i++)
        this->neighborHandle_var[i] = other.neighborHandle_var[i];
    delete [] this->neighborPosition_var;
    this->neighborPosition_var = (other.neighborPosition_arraysize==0) ? NULL : new Vector2D[other.neighborPosition_arraysize];
    neighborPosition_arraysize = other.neighborPosition_arraysize;
    for (unsigned int i=0; i<neighborPosition_arraysize; i++)
        this->neighborPosition_var[i] = other.neighborPosition_var[i];
    return *this;
}

void QuonListMessage::parsimPack(cCommBuffer *b)
{
    QuonMessage::parsimPack(b);
    b->pack(neighborHandle_arraysize);
    doPacking(b,this->neighborHandle_var,neighborHandle_arraysize);
    b->pack(neighborPosition_arraysize);
    doPacking(b,this->neighborPosition_var,neighborPosition_arraysize);
}

void QuonListMessage::parsimUnpack(cCommBuffer *b)
{
    QuonMessage::parsimUnpack(b);
    delete [] this->neighborHandle_var;
    b->unpack(neighborHandle_arraysize);
    if (neighborHandle_arraysize==0) {
        this->neighborHandle_var = 0;
    } else {
        this->neighborHandle_var = new NodeHandle[neighborHandle_arraysize];
        doUnpacking(b,this->neighborHandle_var,neighborHandle_arraysize);
    }
    delete [] this->neighborPosition_var;
    b->unpack(neighborPosition_arraysize);
    if (neighborPosition_arraysize==0) {
        this->neighborPosition_var = 0;
    } else {
        this->neighborPosition_var = new Vector2D[neighborPosition_arraysize];
        doUnpacking(b,this->neighborPosition_var,neighborPosition_arraysize);
    }
}

void QuonListMessage::setNeighborHandleArraySize(unsigned int size)
{
    NodeHandle *neighborHandle_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = neighborHandle_arraysize < size ? neighborHandle_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborHandle_var2[i] = this->neighborHandle_var[i];
    neighborHandle_arraysize = size;
    delete [] this->neighborHandle_var;
    this->neighborHandle_var = neighborHandle_var2;
}

unsigned int QuonListMessage::getNeighborHandleArraySize() const
{
    return neighborHandle_arraysize;
}

NodeHandle& QuonListMessage::getNeighborHandle(unsigned int k)
{
    if (k>=neighborHandle_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborHandle_arraysize, k);
    return neighborHandle_var[k];
}

void QuonListMessage::setNeighborHandle(unsigned int k, const NodeHandle& neighborHandle_var)
{
    if (k>=neighborHandle_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborHandle_arraysize, k);
    this->neighborHandle_var[k]=neighborHandle_var;
}

void QuonListMessage::setNeighborPositionArraySize(unsigned int size)
{
    Vector2D *neighborPosition_var2 = (size==0) ? NULL : new Vector2D[size];
    unsigned int sz = neighborPosition_arraysize < size ? neighborPosition_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborPosition_var2[i] = this->neighborPosition_var[i];
    neighborPosition_arraysize = size;
    delete [] this->neighborPosition_var;
    this->neighborPosition_var = neighborPosition_var2;
}

unsigned int QuonListMessage::getNeighborPositionArraySize() const
{
    return neighborPosition_arraysize;
}

Vector2D& QuonListMessage::getNeighborPosition(unsigned int k)
{
    if (k>=neighborPosition_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPosition_arraysize, k);
    return neighborPosition_var[k];
}

void QuonListMessage::setNeighborPosition(unsigned int k, const Vector2D& neighborPosition_var)
{
    if (k>=neighborPosition_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPosition_arraysize, k);
    this->neighborPosition_var[k]=neighborPosition_var;
}

class QuonListMessageDescriptor : public cClassDescriptor
{
  public:
    QuonListMessageDescriptor();
    virtual ~QuonListMessageDescriptor();

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

Register_ClassDescriptor(QuonListMessageDescriptor);

QuonListMessageDescriptor::QuonListMessageDescriptor() : cClassDescriptor("QuonListMessage", "QuonMessage")
{
}

QuonListMessageDescriptor::~QuonListMessageDescriptor()
{
}

bool QuonListMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonListMessage *>(obj)!=NULL;
}

const char *QuonListMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonListMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int QuonListMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *QuonListMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "neighborHandle";
        case 1: return "neighborPosition";
        default: return NULL;
    }
}

const char *QuonListMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle";
        case 1: return "Vector2D";
        default: return NULL;
    }
}

const char *QuonListMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonListMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNeighborHandleArraySize();
        case 1: return pp->getNeighborPositionArraySize();
        default: return 0;
    }
}

bool QuonListMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNeighborHandle(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getNeighborPosition(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool QuonListMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *QuonListMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle"; break;
        case 1: return "Vector2D"; break;
        default: return NULL;
    }
}

void *QuonListMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNeighborHandle(i)); break;
        case 1: return (void *)(&pp->getNeighborPosition(i)); break;
        default: return NULL;
    }
}

Register_Class(QuonMoveMessage);

QuonMoveMessage::QuonMoveMessage(const char *name, int kind) : QuonListMessage(name,kind)
{
    this->isBinding_var = false;
}

QuonMoveMessage::QuonMoveMessage(const QuonMoveMessage& other) : QuonListMessage()
{
    setName(other.getName());
    operator=(other);
}

QuonMoveMessage::~QuonMoveMessage()
{
}

QuonMoveMessage& QuonMoveMessage::operator=(const QuonMoveMessage& other)
{
    if (this==&other) return *this;
    QuonListMessage::operator=(other);
    this->newPosition_var = other.newPosition_var;
    this->isBinding_var = other.isBinding_var;
    return *this;
}

void QuonMoveMessage::parsimPack(cCommBuffer *b)
{
    QuonListMessage::parsimPack(b);
    doPacking(b,this->newPosition_var);
    doPacking(b,this->isBinding_var);
}

void QuonMoveMessage::parsimUnpack(cCommBuffer *b)
{
    QuonListMessage::parsimUnpack(b);
    doUnpacking(b,this->newPosition_var);
    doUnpacking(b,this->isBinding_var);
}

Vector2D& QuonMoveMessage::getNewPosition()
{
    return newPosition_var;
}

void QuonMoveMessage::setNewPosition(const Vector2D& newPosition_var)
{
    this->newPosition_var = newPosition_var;
}

bool QuonMoveMessage::getIsBinding() const
{
    return isBinding_var;
}

void QuonMoveMessage::setIsBinding(bool isBinding_var)
{
    this->isBinding_var = isBinding_var;
}

class QuonMoveMessageDescriptor : public cClassDescriptor
{
  public:
    QuonMoveMessageDescriptor();
    virtual ~QuonMoveMessageDescriptor();

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

Register_ClassDescriptor(QuonMoveMessageDescriptor);

QuonMoveMessageDescriptor::QuonMoveMessageDescriptor() : cClassDescriptor("QuonMoveMessage", "QuonListMessage")
{
}

QuonMoveMessageDescriptor::~QuonMoveMessageDescriptor()
{
}

bool QuonMoveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonMoveMessage *>(obj)!=NULL;
}

const char *QuonMoveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonMoveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int QuonMoveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *QuonMoveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "newPosition";
        case 1: return "isBinding";
        default: return NULL;
    }
}

const char *QuonMoveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Vector2D";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *QuonMoveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonMoveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool QuonMoveMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNewPosition(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->getIsBinding(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool QuonMoveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setIsBinding(string2bool(value)); return true;
        default: return false;
    }
}

const char *QuonMoveMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Vector2D"; break;
        default: return NULL;
    }
}

void *QuonMoveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNewPosition()); break;
        default: return NULL;
    }
}

Register_Class(QuonEventMessage);

QuonEventMessage::QuonEventMessage(const char *name, int kind) : QuonMessage(name,kind)
{
}

QuonEventMessage::QuonEventMessage(const QuonEventMessage& other) : QuonMessage()
{
    setName(other.getName());
    operator=(other);
}

QuonEventMessage::~QuonEventMessage()
{
}

QuonEventMessage& QuonEventMessage::operator=(const QuonEventMessage& other)
{
    if (this==&other) return *this;
    QuonMessage::operator=(other);
    return *this;
}

void QuonEventMessage::parsimPack(cCommBuffer *b)
{
    QuonMessage::parsimPack(b);
}

void QuonEventMessage::parsimUnpack(cCommBuffer *b)
{
    QuonMessage::parsimUnpack(b);
}

class QuonEventMessageDescriptor : public cClassDescriptor
{
  public:
    QuonEventMessageDescriptor();
    virtual ~QuonEventMessageDescriptor();

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

Register_ClassDescriptor(QuonEventMessageDescriptor);

QuonEventMessageDescriptor::QuonEventMessageDescriptor() : cClassDescriptor("QuonEventMessage", "QuonMessage")
{
}

QuonEventMessageDescriptor::~QuonEventMessageDescriptor()
{
}

bool QuonEventMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonEventMessage *>(obj)!=NULL;
}

const char *QuonEventMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonEventMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int QuonEventMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *QuonEventMessageDescriptor::getFieldName(void *object, int field) const
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

const char *QuonEventMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *QuonEventMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonEventMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool QuonEventMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool QuonEventMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *QuonEventMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *QuonEventMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


