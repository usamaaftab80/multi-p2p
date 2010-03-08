//
// Generated file, do not edit! Created by opp_msgc 4.0 from overlay/nice/NiceMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NiceMessage_m.h"

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
    cEnum *e = cEnum::find("NICECommand");
    if (!e) enums.getInstance()->add(e = new cEnum("NICECommand"));
    e->insert(NICE_QUERY, "NICE_QUERY");
    e->insert(NICE_QUERY_RESPONSE, "NICE_QUERY_RESPONSE");
    e->insert(NICE_JOIN_CLUSTER, "NICE_JOIN_CLUSTER");
    e->insert(NICE_HEARTBEAT, "NICE_HEARTBEAT");
    e->insert(NICE_LEADERHEARTBEAT, "NICE_LEADERHEARTBEAT");
    e->insert(NICE_LEADERTRANSFER, "NICE_LEADERTRANSFER");
    e->insert(NICE_JOINEVAL, "NICE_JOINEVAL");
    e->insert(NICE_JOINEVAL_RESPONSE, "NICE_JOINEVAL_RESPONSE");
    e->insert(NICE_REMOVE, "NICE_REMOVE");
    e->insert(NICE_PING_PROBE, "NICE_PING_PROBE");
    e->insert(NICE_PING_PROBE_RESPONSE, "NICE_PING_PROBE_RESPONSE");
    e->insert(NICE_CLUSTER_MERGE_REQUEST, "NICE_CLUSTER_MERGE_REQUEST");
    e->insert(NICE_PEER_TEMPORARY, "NICE_PEER_TEMPORARY");
    e->insert(NICE_PEER_TEMPORARY_RELEASE, "NICE_PEER_TEMPORARY_RELEASE");
    e->insert(NICE_POLL_RP, "NICE_POLL_RP");
    e->insert(NICE_POLL_RP_RESPONSE, "NICE_POLL_RP_RESPONSE");
    e->insert(NICE_FORCE_MERGE, "NICE_FORCE_MERGE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("CbrAppCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("CbrAppCommand"));
    e->insert(CBR_DATA, "CBR_DATA");
);

Register_Class(NiceMessage);

NiceMessage::NiceMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
    this->layer_var = 0;
}

NiceMessage::NiceMessage(const NiceMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    operator=(other);
}

NiceMessage::~NiceMessage()
{
}

NiceMessage& NiceMessage::operator=(const NiceMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->command_var = other.command_var;
    this->srcNode_var = other.srcNode_var;
    this->layer_var = other.layer_var;
    return *this;
}

void NiceMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->layer_var);
}

void NiceMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->layer_var);
}

int NiceMessage::getCommand() const
{
    return command_var;
}

void NiceMessage::setCommand(int command_var)
{
    this->command_var = command_var;
}

TransportAddress& NiceMessage::getSrcNode()
{
    return srcNode_var;
}

void NiceMessage::setSrcNode(const TransportAddress& srcNode_var)
{
    this->srcNode_var = srcNode_var;
}

short NiceMessage::getLayer() const
{
    return layer_var;
}

void NiceMessage::setLayer(short layer_var)
{
    this->layer_var = layer_var;
}

class NiceMessageDescriptor : public cClassDescriptor
{
  public:
    NiceMessageDescriptor();
    virtual ~NiceMessageDescriptor();

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

Register_ClassDescriptor(NiceMessageDescriptor);

NiceMessageDescriptor::NiceMessageDescriptor() : cClassDescriptor("NiceMessage", "BaseOverlayMessage")
{
}

NiceMessageDescriptor::~NiceMessageDescriptor()
{
}

bool NiceMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceMessage *>(obj)!=NULL;
}

const char *NiceMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NiceMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *NiceMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "command";
        case 1: return "srcNode";
        case 2: return "layer";
        default: return NULL;
    }
}

const char *NiceMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "TransportAddress";
        case 2: return "short";
        default: return NULL;
    }
}

const char *NiceMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "NICECommand";
            return NULL;
        default: return NULL;
    }
}

int NiceMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NiceMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSrcNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getLayer(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool NiceMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 2: pp->setLayer(string2long(value)); return true;
        default: return false;
    }
}

const char *NiceMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *NiceMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSrcNode()); break;
        default: return NULL;
    }
}

Register_Class(NiceMemberMessage);

NiceMemberMessage::NiceMemberMessage(const char *name, int kind) : NiceMessage(name,kind)
{
    members_arraysize = 0;
    this->members_var = 0;
}

NiceMemberMessage::NiceMemberMessage(const NiceMemberMessage& other) : NiceMessage()
{
    setName(other.getName());
    members_arraysize = 0;
    this->members_var = 0;
    operator=(other);
}

NiceMemberMessage::~NiceMemberMessage()
{
    delete [] members_var;
}

NiceMemberMessage& NiceMemberMessage::operator=(const NiceMemberMessage& other)
{
    if (this==&other) return *this;
    NiceMessage::operator=(other);
    delete [] this->members_var;
    this->members_var = (other.members_arraysize==0) ? NULL : new TransportAddress[other.members_arraysize];
    members_arraysize = other.members_arraysize;
    for (unsigned int i=0; i<members_arraysize; i++)
        this->members_var[i] = other.members_var[i];
    return *this;
}

void NiceMemberMessage::parsimPack(cCommBuffer *b)
{
    NiceMessage::parsimPack(b);
    b->pack(members_arraysize);
    doPacking(b,this->members_var,members_arraysize);
}

void NiceMemberMessage::parsimUnpack(cCommBuffer *b)
{
    NiceMessage::parsimUnpack(b);
    delete [] this->members_var;
    b->unpack(members_arraysize);
    if (members_arraysize==0) {
        this->members_var = 0;
    } else {
        this->members_var = new TransportAddress[members_arraysize];
        doUnpacking(b,this->members_var,members_arraysize);
    }
}

void NiceMemberMessage::setMembersArraySize(unsigned int size)
{
    TransportAddress *members_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = members_arraysize < size ? members_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        members_var2[i] = this->members_var[i];
    members_arraysize = size;
    delete [] this->members_var;
    this->members_var = members_var2;
}

unsigned int NiceMemberMessage::getMembersArraySize() const
{
    return members_arraysize;
}

TransportAddress& NiceMemberMessage::getMembers(unsigned int k)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    return members_var[k];
}

void NiceMemberMessage::setMembers(unsigned int k, const TransportAddress& members_var)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    this->members_var[k]=members_var;
}

class NiceMemberMessageDescriptor : public cClassDescriptor
{
  public:
    NiceMemberMessageDescriptor();
    virtual ~NiceMemberMessageDescriptor();

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

Register_ClassDescriptor(NiceMemberMessageDescriptor);

NiceMemberMessageDescriptor::NiceMemberMessageDescriptor() : cClassDescriptor("NiceMemberMessage", "NiceMessage")
{
}

NiceMemberMessageDescriptor::~NiceMemberMessageDescriptor()
{
}

bool NiceMemberMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceMemberMessage *>(obj)!=NULL;
}

const char *NiceMemberMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceMemberMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NiceMemberMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *NiceMemberMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "members";
        default: return NULL;
    }
}

const char *NiceMemberMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress";
        default: return NULL;
    }
}

const char *NiceMemberMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceMemberMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getMembersArraySize();
        default: return 0;
    }
}

bool NiceMemberMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMembers(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool NiceMemberMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NiceMemberMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *NiceMemberMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMembers(i)); break;
        default: return NULL;
    }
}

Register_Class(NiceClusterMerge);

NiceClusterMerge::NiceClusterMerge(const char *name, int kind) : NiceMemberMessage(name,kind)
{
}

NiceClusterMerge::NiceClusterMerge(const NiceClusterMerge& other) : NiceMemberMessage()
{
    setName(other.getName());
    operator=(other);
}

NiceClusterMerge::~NiceClusterMerge()
{
}

NiceClusterMerge& NiceClusterMerge::operator=(const NiceClusterMerge& other)
{
    if (this==&other) return *this;
    NiceMemberMessage::operator=(other);
    this->newClusterLeader_var = other.newClusterLeader_var;
    return *this;
}

void NiceClusterMerge::parsimPack(cCommBuffer *b)
{
    NiceMemberMessage::parsimPack(b);
    doPacking(b,this->newClusterLeader_var);
}

void NiceClusterMerge::parsimUnpack(cCommBuffer *b)
{
    NiceMemberMessage::parsimUnpack(b);
    doUnpacking(b,this->newClusterLeader_var);
}

TransportAddress& NiceClusterMerge::getNewClusterLeader()
{
    return newClusterLeader_var;
}

void NiceClusterMerge::setNewClusterLeader(const TransportAddress& newClusterLeader_var)
{
    this->newClusterLeader_var = newClusterLeader_var;
}

class NiceClusterMergeDescriptor : public cClassDescriptor
{
  public:
    NiceClusterMergeDescriptor();
    virtual ~NiceClusterMergeDescriptor();

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

Register_ClassDescriptor(NiceClusterMergeDescriptor);

NiceClusterMergeDescriptor::NiceClusterMergeDescriptor() : cClassDescriptor("NiceClusterMerge", "NiceMemberMessage")
{
}

NiceClusterMergeDescriptor::~NiceClusterMergeDescriptor()
{
}

bool NiceClusterMergeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceClusterMerge *>(obj)!=NULL;
}

const char *NiceClusterMergeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceClusterMergeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NiceClusterMergeDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NiceClusterMergeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "newClusterLeader";
        default: return NULL;
    }
}

const char *NiceClusterMergeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress";
        default: return NULL;
    }
}

const char *NiceClusterMergeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceClusterMergeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NiceClusterMergeDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNewClusterLeader(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool NiceClusterMergeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NiceClusterMergeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *NiceClusterMergeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNewClusterLeader()); break;
        default: return NULL;
    }
}

Register_Class(NiceHeartbeat);

NiceHeartbeat::NiceHeartbeat(const char *name, int kind) : NiceMemberMessage(name,kind)
{
    this->seqNo_var = 0;
    this->seqRspNo_var = 0;
    this->hb_delay_var = 0;
    distances_arraysize = 0;
    this->distances_var = 0;
    this->one_hop_distance_var = 0;
    this->sublayermembers_var = 0;
}

NiceHeartbeat::NiceHeartbeat(const NiceHeartbeat& other) : NiceMemberMessage()
{
    setName(other.getName());
    distances_arraysize = 0;
    this->distances_var = 0;
    operator=(other);
}

NiceHeartbeat::~NiceHeartbeat()
{
    delete [] distances_var;
}

NiceHeartbeat& NiceHeartbeat::operator=(const NiceHeartbeat& other)
{
    if (this==&other) return *this;
    NiceMemberMessage::operator=(other);
    this->seqNo_var = other.seqNo_var;
    this->seqRspNo_var = other.seqRspNo_var;
    this->hb_delay_var = other.hb_delay_var;
    delete [] this->distances_var;
    this->distances_var = (other.distances_arraysize==0) ? NULL : new double[other.distances_arraysize];
    distances_arraysize = other.distances_arraysize;
    for (unsigned int i=0; i<distances_arraysize; i++)
        this->distances_var[i] = other.distances_var[i];
    this->one_hop_distance_var = other.one_hop_distance_var;
    this->sublayermembers_var = other.sublayermembers_var;
    return *this;
}

void NiceHeartbeat::parsimPack(cCommBuffer *b)
{
    NiceMemberMessage::parsimPack(b);
    doPacking(b,this->seqNo_var);
    doPacking(b,this->seqRspNo_var);
    doPacking(b,this->hb_delay_var);
    b->pack(distances_arraysize);
    doPacking(b,this->distances_var,distances_arraysize);
    doPacking(b,this->one_hop_distance_var);
    doPacking(b,this->sublayermembers_var);
}

void NiceHeartbeat::parsimUnpack(cCommBuffer *b)
{
    NiceMemberMessage::parsimUnpack(b);
    doUnpacking(b,this->seqNo_var);
    doUnpacking(b,this->seqRspNo_var);
    doUnpacking(b,this->hb_delay_var);
    delete [] this->distances_var;
    b->unpack(distances_arraysize);
    if (distances_arraysize==0) {
        this->distances_var = 0;
    } else {
        this->distances_var = new double[distances_arraysize];
        doUnpacking(b,this->distances_var,distances_arraysize);
    }
    doUnpacking(b,this->one_hop_distance_var);
    doUnpacking(b,this->sublayermembers_var);
}

unsigned int NiceHeartbeat::getSeqNo() const
{
    return seqNo_var;
}

void NiceHeartbeat::setSeqNo(unsigned int seqNo_var)
{
    this->seqNo_var = seqNo_var;
}

unsigned int NiceHeartbeat::getSeqRspNo() const
{
    return seqRspNo_var;
}

void NiceHeartbeat::setSeqRspNo(unsigned int seqRspNo_var)
{
    this->seqRspNo_var = seqRspNo_var;
}

double NiceHeartbeat::getHb_delay() const
{
    return hb_delay_var;
}

void NiceHeartbeat::setHb_delay(double hb_delay_var)
{
    this->hb_delay_var = hb_delay_var;
}

void NiceHeartbeat::setDistancesArraySize(unsigned int size)
{
    double *distances_var2 = (size==0) ? NULL : new double[size];
    unsigned int sz = distances_arraysize < size ? distances_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        distances_var2[i] = this->distances_var[i];
    for (unsigned int i=sz; i<size; i++)
        distances_var2[i] = 0;
    distances_arraysize = size;
    delete [] this->distances_var;
    this->distances_var = distances_var2;
}

unsigned int NiceHeartbeat::getDistancesArraySize() const
{
    return distances_arraysize;
}

double NiceHeartbeat::getDistances(unsigned int k) const
{
    if (k>=distances_arraysize) throw cRuntimeError("Array of size %d indexed by %d", distances_arraysize, k);
    return distances_var[k];
}

void NiceHeartbeat::setDistances(unsigned int k, double distances_var)
{
    if (k>=distances_arraysize) throw cRuntimeError("Array of size %d indexed by %d", distances_arraysize, k);
    this->distances_var[k]=distances_var;
}

double NiceHeartbeat::getOne_hop_distance() const
{
    return one_hop_distance_var;
}

void NiceHeartbeat::setOne_hop_distance(double one_hop_distance_var)
{
    this->one_hop_distance_var = one_hop_distance_var;
}

unsigned int NiceHeartbeat::getSublayermembers() const
{
    return sublayermembers_var;
}

void NiceHeartbeat::setSublayermembers(unsigned int sublayermembers_var)
{
    this->sublayermembers_var = sublayermembers_var;
}

class NiceHeartbeatDescriptor : public cClassDescriptor
{
  public:
    NiceHeartbeatDescriptor();
    virtual ~NiceHeartbeatDescriptor();

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

Register_ClassDescriptor(NiceHeartbeatDescriptor);

NiceHeartbeatDescriptor::NiceHeartbeatDescriptor() : cClassDescriptor("NiceHeartbeat", "NiceMemberMessage")
{
}

NiceHeartbeatDescriptor::~NiceHeartbeatDescriptor()
{
}

bool NiceHeartbeatDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceHeartbeat *>(obj)!=NULL;
}

const char *NiceHeartbeatDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceHeartbeatDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int NiceHeartbeatDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISARRAY | FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *NiceHeartbeatDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "seqNo";
        case 1: return "seqRspNo";
        case 2: return "hb_delay";
        case 3: return "distances";
        case 4: return "one_hop_distance";
        case 5: return "sublayermembers";
        default: return NULL;
    }
}

const char *NiceHeartbeatDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned int";
        case 1: return "unsigned int";
        case 2: return "double";
        case 3: return "double";
        case 4: return "double";
        case 5: return "unsigned int";
        default: return NULL;
    }
}

const char *NiceHeartbeatDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceHeartbeatDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        case 3: return pp->getDistancesArraySize();
        default: return 0;
    }
}

bool NiceHeartbeatDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getSeqNo(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getSeqRspNo(),resultbuf,bufsize); return true;
        case 2: double2string(pp->getHb_delay(),resultbuf,bufsize); return true;
        case 3: double2string(pp->getDistances(i),resultbuf,bufsize); return true;
        case 4: double2string(pp->getOne_hop_distance(),resultbuf,bufsize); return true;
        case 5: ulong2string(pp->getSublayermembers(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool NiceHeartbeatDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: pp->setSeqNo(string2ulong(value)); return true;
        case 1: pp->setSeqRspNo(string2ulong(value)); return true;
        case 2: pp->setHb_delay(string2double(value)); return true;
        case 3: pp->setDistances(i,string2double(value)); return true;
        case 4: pp->setOne_hop_distance(string2double(value)); return true;
        case 5: pp->setSublayermembers(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NiceHeartbeatDescriptor::getFieldStructName(void *object, int field) const
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

void *NiceHeartbeatDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NiceLeaderHeartbeat);

NiceLeaderHeartbeat::NiceLeaderHeartbeat(const char *name, int kind) : NiceHeartbeat(name,kind)
{
    supercluster_members_arraysize = 0;
    this->supercluster_members_var = 0;
    this->k_var = 0;
    this->sc_tolerance_var = 0;
}

NiceLeaderHeartbeat::NiceLeaderHeartbeat(const NiceLeaderHeartbeat& other) : NiceHeartbeat()
{
    setName(other.getName());
    supercluster_members_arraysize = 0;
    this->supercluster_members_var = 0;
    operator=(other);
}

NiceLeaderHeartbeat::~NiceLeaderHeartbeat()
{
    delete [] supercluster_members_var;
}

NiceLeaderHeartbeat& NiceLeaderHeartbeat::operator=(const NiceLeaderHeartbeat& other)
{
    if (this==&other) return *this;
    NiceHeartbeat::operator=(other);
    this->supercluster_leader_var = other.supercluster_leader_var;
    delete [] this->supercluster_members_var;
    this->supercluster_members_var = (other.supercluster_members_arraysize==0) ? NULL : new TransportAddress[other.supercluster_members_arraysize];
    supercluster_members_arraysize = other.supercluster_members_arraysize;
    for (unsigned int i=0; i<supercluster_members_arraysize; i++)
        this->supercluster_members_var[i] = other.supercluster_members_var[i];
    this->k_var = other.k_var;
    this->sc_tolerance_var = other.sc_tolerance_var;
    return *this;
}

void NiceLeaderHeartbeat::parsimPack(cCommBuffer *b)
{
    NiceHeartbeat::parsimPack(b);
    doPacking(b,this->supercluster_leader_var);
    b->pack(supercluster_members_arraysize);
    doPacking(b,this->supercluster_members_var,supercluster_members_arraysize);
    doPacking(b,this->k_var);
    doPacking(b,this->sc_tolerance_var);
}

void NiceLeaderHeartbeat::parsimUnpack(cCommBuffer *b)
{
    NiceHeartbeat::parsimUnpack(b);
    doUnpacking(b,this->supercluster_leader_var);
    delete [] this->supercluster_members_var;
    b->unpack(supercluster_members_arraysize);
    if (supercluster_members_arraysize==0) {
        this->supercluster_members_var = 0;
    } else {
        this->supercluster_members_var = new TransportAddress[supercluster_members_arraysize];
        doUnpacking(b,this->supercluster_members_var,supercluster_members_arraysize);
    }
    doUnpacking(b,this->k_var);
    doUnpacking(b,this->sc_tolerance_var);
}

TransportAddress& NiceLeaderHeartbeat::getSupercluster_leader()
{
    return supercluster_leader_var;
}

void NiceLeaderHeartbeat::setSupercluster_leader(const TransportAddress& supercluster_leader_var)
{
    this->supercluster_leader_var = supercluster_leader_var;
}

void NiceLeaderHeartbeat::setSupercluster_membersArraySize(unsigned int size)
{
    TransportAddress *supercluster_members_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = supercluster_members_arraysize < size ? supercluster_members_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        supercluster_members_var2[i] = this->supercluster_members_var[i];
    supercluster_members_arraysize = size;
    delete [] this->supercluster_members_var;
    this->supercluster_members_var = supercluster_members_var2;
}

unsigned int NiceLeaderHeartbeat::getSupercluster_membersArraySize() const
{
    return supercluster_members_arraysize;
}

TransportAddress& NiceLeaderHeartbeat::getSupercluster_members(unsigned int k)
{
    if (k>=supercluster_members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", supercluster_members_arraysize, k);
    return supercluster_members_var[k];
}

void NiceLeaderHeartbeat::setSupercluster_members(unsigned int k, const TransportAddress& supercluster_members_var)
{
    if (k>=supercluster_members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", supercluster_members_arraysize, k);
    this->supercluster_members_var[k]=supercluster_members_var;
}

unsigned int NiceLeaderHeartbeat::getK() const
{
    return k_var;
}

void NiceLeaderHeartbeat::setK(unsigned int k_var)
{
    this->k_var = k_var;
}

unsigned int NiceLeaderHeartbeat::getSc_tolerance() const
{
    return sc_tolerance_var;
}

void NiceLeaderHeartbeat::setSc_tolerance(unsigned int sc_tolerance_var)
{
    this->sc_tolerance_var = sc_tolerance_var;
}

class NiceLeaderHeartbeatDescriptor : public cClassDescriptor
{
  public:
    NiceLeaderHeartbeatDescriptor();
    virtual ~NiceLeaderHeartbeatDescriptor();

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

Register_ClassDescriptor(NiceLeaderHeartbeatDescriptor);

NiceLeaderHeartbeatDescriptor::NiceLeaderHeartbeatDescriptor() : cClassDescriptor("NiceLeaderHeartbeat", "NiceHeartbeat")
{
}

NiceLeaderHeartbeatDescriptor::~NiceLeaderHeartbeatDescriptor()
{
}

bool NiceLeaderHeartbeatDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceLeaderHeartbeat *>(obj)!=NULL;
}

const char *NiceLeaderHeartbeatDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceLeaderHeartbeatDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int NiceLeaderHeartbeatDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *NiceLeaderHeartbeatDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "supercluster_leader";
        case 1: return "supercluster_members";
        case 2: return "k";
        case 3: return "sc_tolerance";
        default: return NULL;
    }
}

const char *NiceLeaderHeartbeatDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress";
        case 1: return "TransportAddress";
        case 2: return "unsigned int";
        case 3: return "unsigned int";
        default: return NULL;
    }
}

const char *NiceLeaderHeartbeatDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceLeaderHeartbeatDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 1: return pp->getSupercluster_membersArraySize();
        default: return 0;
    }
}

bool NiceLeaderHeartbeatDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSupercluster_leader(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getSupercluster_members(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: ulong2string(pp->getK(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getSc_tolerance(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool NiceLeaderHeartbeatDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 2: pp->setK(string2ulong(value)); return true;
        case 3: pp->setSc_tolerance(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NiceLeaderHeartbeatDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress"; break;
        case 1: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *NiceLeaderHeartbeatDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSupercluster_leader()); break;
        case 1: return (void *)(&pp->getSupercluster_members(i)); break;
        default: return NULL;
    }
}

Register_Class(CbrAppMessage);

CbrAppMessage::CbrAppMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
    this->sendTime_var = 0;
    this->seqNo_var = 0;
    this->hopCount_var = 0;
    this->layer_var = 0;
}

CbrAppMessage::CbrAppMessage(const CbrAppMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    operator=(other);
}

CbrAppMessage::~CbrAppMessage()
{
}

CbrAppMessage& CbrAppMessage::operator=(const CbrAppMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->command_var = other.command_var;
    this->srcNode_var = other.srcNode_var;
    this->lastHop_var = other.lastHop_var;
    this->sendTime_var = other.sendTime_var;
    this->seqNo_var = other.seqNo_var;
    this->hopCount_var = other.hopCount_var;
    this->layer_var = other.layer_var;
    return *this;
}

void CbrAppMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->lastHop_var);
    doPacking(b,this->sendTime_var);
    doPacking(b,this->seqNo_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->layer_var);
}

void CbrAppMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->lastHop_var);
    doUnpacking(b,this->sendTime_var);
    doUnpacking(b,this->seqNo_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->layer_var);
}

int CbrAppMessage::getCommand() const
{
    return command_var;
}

void CbrAppMessage::setCommand(int command_var)
{
    this->command_var = command_var;
}

TransportAddress& CbrAppMessage::getSrcNode()
{
    return srcNode_var;
}

void CbrAppMessage::setSrcNode(const TransportAddress& srcNode_var)
{
    this->srcNode_var = srcNode_var;
}

TransportAddress& CbrAppMessage::getLastHop()
{
    return lastHop_var;
}

void CbrAppMessage::setLastHop(const TransportAddress& lastHop_var)
{
    this->lastHop_var = lastHop_var;
}

double CbrAppMessage::getSendTime() const
{
    return sendTime_var;
}

void CbrAppMessage::setSendTime(double sendTime_var)
{
    this->sendTime_var = sendTime_var;
}

unsigned int CbrAppMessage::getSeqNo() const
{
    return seqNo_var;
}

void CbrAppMessage::setSeqNo(unsigned int seqNo_var)
{
    this->seqNo_var = seqNo_var;
}

unsigned int CbrAppMessage::getHopCount() const
{
    return hopCount_var;
}

void CbrAppMessage::setHopCount(unsigned int hopCount_var)
{
    this->hopCount_var = hopCount_var;
}

short CbrAppMessage::getLayer() const
{
    return layer_var;
}

void CbrAppMessage::setLayer(short layer_var)
{
    this->layer_var = layer_var;
}

class CbrAppMessageDescriptor : public cClassDescriptor
{
  public:
    CbrAppMessageDescriptor();
    virtual ~CbrAppMessageDescriptor();

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

Register_ClassDescriptor(CbrAppMessageDescriptor);

CbrAppMessageDescriptor::CbrAppMessageDescriptor() : cClassDescriptor("CbrAppMessage", "BaseOverlayMessage")
{
}

CbrAppMessageDescriptor::~CbrAppMessageDescriptor()
{
}

bool CbrAppMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CbrAppMessage *>(obj)!=NULL;
}

const char *CbrAppMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CbrAppMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int CbrAppMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *CbrAppMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "command";
        case 1: return "srcNode";
        case 2: return "lastHop";
        case 3: return "sendTime";
        case 4: return "seqNo";
        case 5: return "hopCount";
        case 6: return "layer";
        default: return NULL;
    }
}

const char *CbrAppMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "TransportAddress";
        case 2: return "TransportAddress";
        case 3: return "double";
        case 4: return "unsigned int";
        case 5: return "unsigned int";
        case 6: return "short";
        default: return NULL;
    }
}

const char *CbrAppMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "CbrAppCommand";
            return NULL;
        default: return NULL;
    }
}

int CbrAppMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CbrAppMessage *pp = (CbrAppMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool CbrAppMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    CbrAppMessage *pp = (CbrAppMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSrcNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getLastHop(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: double2string(pp->getSendTime(),resultbuf,bufsize); return true;
        case 4: ulong2string(pp->getSeqNo(),resultbuf,bufsize); return true;
        case 5: ulong2string(pp->getHopCount(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getLayer(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool CbrAppMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CbrAppMessage *pp = (CbrAppMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 3: pp->setSendTime(string2double(value)); return true;
        case 4: pp->setSeqNo(string2ulong(value)); return true;
        case 5: pp->setHopCount(string2ulong(value)); return true;
        case 6: pp->setLayer(string2long(value)); return true;
        default: return false;
    }
}

const char *CbrAppMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "TransportAddress"; break;
        case 2: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *CbrAppMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CbrAppMessage *pp = (CbrAppMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSrcNode()); break;
        case 2: return (void *)(&pp->getLastHop()); break;
        default: return NULL;
    }
}


