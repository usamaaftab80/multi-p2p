//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/contract/SCTPCommand.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SCTPCommand_m.h"

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
    cEnum *e = cEnum::find("SCTPErrorCode");
    if (!e) enums.getInstance()->add(e = new cEnum("SCTPErrorCode"));
);

Register_Class(SCTPCommand);

SCTPCommand::SCTPCommand(const char *name) : cPacket(name)
{
    this->assocId_var = -1;
    this->sid_var = -1;
    this->numMsgs_var = 1;
    this->ssn_var = -1;
    this->sendUnordered_var = false;
    this->lifetime_var = 0;
    this->localAddr_var = IPvXAddress("0.0.0.0");
    this->remoteAddr_var = IPvXAddress("0.0.0.0");
    this->gate_var = -1;
}

SCTPCommand::SCTPCommand(const SCTPCommand& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

SCTPCommand::~SCTPCommand()
{
}

SCTPCommand& SCTPCommand::operator=(const SCTPCommand& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->assocId_var = other.assocId_var;
    this->sid_var = other.sid_var;
    this->numMsgs_var = other.numMsgs_var;
    this->ssn_var = other.ssn_var;
    this->sendUnordered_var = other.sendUnordered_var;
    this->lifetime_var = other.lifetime_var;
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->gate_var = other.gate_var;
    return *this;
}

void SCTPCommand::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->assocId_var);
    doPacking(b,this->sid_var);
    doPacking(b,this->numMsgs_var);
    doPacking(b,this->ssn_var);
    doPacking(b,this->sendUnordered_var);
    doPacking(b,this->lifetime_var);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->gate_var);
}

void SCTPCommand::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->assocId_var);
    doUnpacking(b,this->sid_var);
    doUnpacking(b,this->numMsgs_var);
    doUnpacking(b,this->ssn_var);
    doUnpacking(b,this->sendUnordered_var);
    doUnpacking(b,this->lifetime_var);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->gate_var);
}

int SCTPCommand::getAssocId() const
{
    return assocId_var;
}

void SCTPCommand::setAssocId(int assocId_var)
{
    this->assocId_var = assocId_var;
}

int SCTPCommand::getSid() const
{
    return sid_var;
}

void SCTPCommand::setSid(int sid_var)
{
    this->sid_var = sid_var;
}

int SCTPCommand::getNumMsgs() const
{
    return numMsgs_var;
}

void SCTPCommand::setNumMsgs(int numMsgs_var)
{
    this->numMsgs_var = numMsgs_var;
}

int SCTPCommand::getSsn() const
{
    return ssn_var;
}

void SCTPCommand::setSsn(int ssn_var)
{
    this->ssn_var = ssn_var;
}

unsigned short SCTPCommand::getSendUnordered() const
{
    return sendUnordered_var;
}

void SCTPCommand::setSendUnordered(unsigned short sendUnordered_var)
{
    this->sendUnordered_var = sendUnordered_var;
}

double SCTPCommand::getLifetime() const
{
    return lifetime_var;
}

void SCTPCommand::setLifetime(double lifetime_var)
{
    this->lifetime_var = lifetime_var;
}

IPvXAddress& SCTPCommand::getLocalAddr()
{
    return localAddr_var;
}

void SCTPCommand::setLocalAddr(const IPvXAddress& localAddr_var)
{
    this->localAddr_var = localAddr_var;
}

IPvXAddress& SCTPCommand::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPCommand::setRemoteAddr(const IPvXAddress& remoteAddr_var)
{
    this->remoteAddr_var = remoteAddr_var;
}

int SCTPCommand::getGate() const
{
    return gate_var;
}

void SCTPCommand::setGate(int gate_var)
{
    this->gate_var = gate_var;
}

class SCTPCommandDescriptor : public cClassDescriptor
{
  public:
    SCTPCommandDescriptor();
    virtual ~SCTPCommandDescriptor();

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

Register_ClassDescriptor(SCTPCommandDescriptor);

SCTPCommandDescriptor::SCTPCommandDescriptor() : cClassDescriptor("SCTPCommand", "cPacket")
{
}

SCTPCommandDescriptor::~SCTPCommandDescriptor()
{
}

bool SCTPCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPCommand *>(obj)!=NULL;
}

const char *SCTPCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int SCTPCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISCOMPOUND;
        case 7: return FD_ISCOMPOUND;
        case 8: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *SCTPCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "assocId";
        case 1: return "sid";
        case 2: return "numMsgs";
        case 3: return "ssn";
        case 4: return "sendUnordered";
        case 5: return "lifetime";
        case 6: return "localAddr";
        case 7: return "remoteAddr";
        case 8: return "gate";
        default: return NULL;
    }
}

const char *SCTPCommandDescriptor::getFieldTypeString(void *object, int field) const
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
        case 3: return "int";
        case 4: return "unsigned short";
        case 5: return "double";
        case 6: return "IPvXAddress";
        case 7: return "IPvXAddress";
        case 8: return "int";
        default: return NULL;
    }
}

const char *SCTPCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPCommandDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getAssocId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getSid(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getNumMsgs(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getSsn(),resultbuf,bufsize); return true;
        case 4: ulong2string(pp->getSendUnordered(),resultbuf,bufsize); return true;
        case 5: double2string(pp->getLifetime(),resultbuf,bufsize); return true;
        case 6: {std::stringstream out; out << pp->getLocalAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 7: {std::stringstream out; out << pp->getRemoteAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 8: long2string(pp->getGate(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setAssocId(string2long(value)); return true;
        case 1: pp->setSid(string2long(value)); return true;
        case 2: pp->setNumMsgs(string2long(value)); return true;
        case 3: pp->setSsn(string2long(value)); return true;
        case 4: pp->setSendUnordered(string2ulong(value)); return true;
        case 5: pp->setLifetime(string2double(value)); return true;
        case 8: pp->setGate(string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return "IPvXAddress"; break;
        case 7: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *SCTPCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getLocalAddr()); break;
        case 7: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(SCTPErrorInfo);

SCTPErrorInfo::SCTPErrorInfo(const char *name) : SCTPCommand(name)
{
    this->errorCode_var = 0;
    this->messageText_var = 0;
}

SCTPErrorInfo::SCTPErrorInfo(const SCTPErrorInfo& other) : SCTPCommand()
{
    setName(other.getName());
    operator=(other);
}

SCTPErrorInfo::~SCTPErrorInfo()
{
}

SCTPErrorInfo& SCTPErrorInfo::operator=(const SCTPErrorInfo& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->errorCode_var = other.errorCode_var;
    this->messageText_var = other.messageText_var;
    return *this;
}

void SCTPErrorInfo::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->errorCode_var);
    doPacking(b,this->messageText_var);
}

void SCTPErrorInfo::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->errorCode_var);
    doUnpacking(b,this->messageText_var);
}

int SCTPErrorInfo::getErrorCode() const
{
    return errorCode_var;
}

void SCTPErrorInfo::setErrorCode(int errorCode_var)
{
    this->errorCode_var = errorCode_var;
}

const char * SCTPErrorInfo::getMessageText() const
{
    return messageText_var.c_str();
}

void SCTPErrorInfo::setMessageText(const char * messageText_var)
{
    this->messageText_var = messageText_var;
}

class SCTPErrorInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPErrorInfoDescriptor();
    virtual ~SCTPErrorInfoDescriptor();

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

Register_ClassDescriptor(SCTPErrorInfoDescriptor);

SCTPErrorInfoDescriptor::SCTPErrorInfoDescriptor() : cClassDescriptor("SCTPErrorInfo", "SCTPCommand")
{
}

SCTPErrorInfoDescriptor::~SCTPErrorInfoDescriptor()
{
}

bool SCTPErrorInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPErrorInfo *>(obj)!=NULL;
}

const char *SCTPErrorInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPErrorInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPErrorInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *SCTPErrorInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "errorCode";
        case 1: return "messageText";
        default: return NULL;
    }
}

const char *SCTPErrorInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "string";
        default: return NULL;
    }
}

const char *SCTPErrorInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "SCTPErrorCode";
            return NULL;
        default: return NULL;
    }
}

int SCTPErrorInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPErrorInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getErrorCode(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getMessageText(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPErrorInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setErrorCode(string2long(value)); return true;
        case 1: pp->setMessageText((value)); return true;
        default: return false;
    }
}

const char *SCTPErrorInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPErrorInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPOpenCommand);

SCTPOpenCommand::SCTPOpenCommand(const char *name) : SCTPCommand(name)
{
    this->localPort_var = -1;
    this->remotePort_var = -1;
    this->fork_var = false;
    this->queueClass_var = "SCTPQueue";
    this->sctpAlgorithmClass_var = 0;
    this->outboundStreams_var = 0;
    this->numRequests_var = 0;
    this->messagesToPush_var = 0;
}

SCTPOpenCommand::SCTPOpenCommand(const SCTPOpenCommand& other) : SCTPCommand()
{
    setName(other.getName());
    operator=(other);
}

SCTPOpenCommand::~SCTPOpenCommand()
{
}

SCTPOpenCommand& SCTPOpenCommand::operator=(const SCTPOpenCommand& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->localAddresses_var = other.localAddresses_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->remoteAddresses_var = other.remoteAddresses_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    this->fork_var = other.fork_var;
    this->queueClass_var = other.queueClass_var;
    this->sctpAlgorithmClass_var = other.sctpAlgorithmClass_var;
    this->outboundStreams_var = other.outboundStreams_var;
    this->numRequests_var = other.numRequests_var;
    this->messagesToPush_var = other.messagesToPush_var;
    return *this;
}

void SCTPOpenCommand::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->localAddresses_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->remoteAddresses_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
    doPacking(b,this->fork_var);
    doPacking(b,this->queueClass_var);
    doPacking(b,this->sctpAlgorithmClass_var);
    doPacking(b,this->outboundStreams_var);
    doPacking(b,this->numRequests_var);
    doPacking(b,this->messagesToPush_var);
}

void SCTPOpenCommand::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->localAddresses_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->remoteAddresses_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
    doUnpacking(b,this->fork_var);
    doUnpacking(b,this->queueClass_var);
    doUnpacking(b,this->sctpAlgorithmClass_var);
    doUnpacking(b,this->outboundStreams_var);
    doUnpacking(b,this->numRequests_var);
    doUnpacking(b,this->messagesToPush_var);
}

AddressVector& SCTPOpenCommand::getLocalAddresses()
{
    return localAddresses_var;
}

void SCTPOpenCommand::setLocalAddresses(const AddressVector& localAddresses_var)
{
    this->localAddresses_var = localAddresses_var;
}

IPvXAddress& SCTPOpenCommand::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPOpenCommand::setRemoteAddr(const IPvXAddress& remoteAddr_var)
{
    this->remoteAddr_var = remoteAddr_var;
}

AddressVector& SCTPOpenCommand::getRemoteAddresses()
{
    return remoteAddresses_var;
}

void SCTPOpenCommand::setRemoteAddresses(const AddressVector& remoteAddresses_var)
{
    this->remoteAddresses_var = remoteAddresses_var;
}

int SCTPOpenCommand::getLocalPort() const
{
    return localPort_var;
}

void SCTPOpenCommand::setLocalPort(int localPort_var)
{
    this->localPort_var = localPort_var;
}

int SCTPOpenCommand::getRemotePort() const
{
    return remotePort_var;
}

void SCTPOpenCommand::setRemotePort(int remotePort_var)
{
    this->remotePort_var = remotePort_var;
}

bool SCTPOpenCommand::getFork() const
{
    return fork_var;
}

void SCTPOpenCommand::setFork(bool fork_var)
{
    this->fork_var = fork_var;
}

const char * SCTPOpenCommand::getQueueClass() const
{
    return queueClass_var.c_str();
}

void SCTPOpenCommand::setQueueClass(const char * queueClass_var)
{
    this->queueClass_var = queueClass_var;
}

const char * SCTPOpenCommand::getSctpAlgorithmClass() const
{
    return sctpAlgorithmClass_var.c_str();
}

void SCTPOpenCommand::setSctpAlgorithmClass(const char * sctpAlgorithmClass_var)
{
    this->sctpAlgorithmClass_var = sctpAlgorithmClass_var;
}

uint32 SCTPOpenCommand::getOutboundStreams() const
{
    return outboundStreams_var;
}

void SCTPOpenCommand::setOutboundStreams(uint32 outboundStreams_var)
{
    this->outboundStreams_var = outboundStreams_var;
}

uint32 SCTPOpenCommand::getNumRequests() const
{
    return numRequests_var;
}

void SCTPOpenCommand::setNumRequests(uint32 numRequests_var)
{
    this->numRequests_var = numRequests_var;
}

uint32 SCTPOpenCommand::getMessagesToPush() const
{
    return messagesToPush_var;
}

void SCTPOpenCommand::setMessagesToPush(uint32 messagesToPush_var)
{
    this->messagesToPush_var = messagesToPush_var;
}

class SCTPOpenCommandDescriptor : public cClassDescriptor
{
  public:
    SCTPOpenCommandDescriptor();
    virtual ~SCTPOpenCommandDescriptor();

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

Register_ClassDescriptor(SCTPOpenCommandDescriptor);

SCTPOpenCommandDescriptor::SCTPOpenCommandDescriptor() : cClassDescriptor("SCTPOpenCommand", "SCTPCommand")
{
}

SCTPOpenCommandDescriptor::~SCTPOpenCommandDescriptor()
{
}

bool SCTPOpenCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPOpenCommand *>(obj)!=NULL;
}

const char *SCTPOpenCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPOpenCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 11+basedesc->getFieldCount(object) : 11;
}

unsigned int SCTPOpenCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        case 9: return FD_ISEDITABLE;
        case 10: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *SCTPOpenCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "localAddresses";
        case 1: return "remoteAddr";
        case 2: return "remoteAddresses";
        case 3: return "localPort";
        case 4: return "remotePort";
        case 5: return "fork";
        case 6: return "queueClass";
        case 7: return "sctpAlgorithmClass";
        case 8: return "outboundStreams";
        case 9: return "numRequests";
        case 10: return "messagesToPush";
        default: return NULL;
    }
}

const char *SCTPOpenCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "AddressVector";
        case 1: return "IPvXAddress";
        case 2: return "AddressVector";
        case 3: return "int";
        case 4: return "int";
        case 5: return "bool";
        case 6: return "string";
        case 7: return "string";
        case 8: return "uint32";
        case 9: return "uint32";
        case 10: return "uint32";
        default: return NULL;
    }
}

const char *SCTPOpenCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPOpenCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPOpenCommandDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLocalAddresses(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getRemoteAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getRemoteAddresses(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->getLocalPort(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getRemotePort(),resultbuf,bufsize); return true;
        case 5: bool2string(pp->getFork(),resultbuf,bufsize); return true;
        case 6: oppstring2string(pp->getQueueClass(),resultbuf,bufsize); return true;
        case 7: oppstring2string(pp->getSctpAlgorithmClass(),resultbuf,bufsize); return true;
        case 8: ulong2string(pp->getOutboundStreams(),resultbuf,bufsize); return true;
        case 9: ulong2string(pp->getNumRequests(),resultbuf,bufsize); return true;
        case 10: ulong2string(pp->getMessagesToPush(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPOpenCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        case 3: pp->setLocalPort(string2long(value)); return true;
        case 4: pp->setRemotePort(string2long(value)); return true;
        case 5: pp->setFork(string2bool(value)); return true;
        case 6: pp->setQueueClass((value)); return true;
        case 7: pp->setSctpAlgorithmClass((value)); return true;
        case 8: pp->setOutboundStreams(string2ulong(value)); return true;
        case 9: pp->setNumRequests(string2ulong(value)); return true;
        case 10: pp->setMessagesToPush(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPOpenCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "AddressVector"; break;
        case 1: return "IPvXAddress"; break;
        case 2: return "AddressVector"; break;
        default: return NULL;
    }
}

void *SCTPOpenCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLocalAddresses()); break;
        case 1: return (void *)(&pp->getRemoteAddr()); break;
        case 2: return (void *)(&pp->getRemoteAddresses()); break;
        default: return NULL;
    }
}

Register_Class(SCTPSendCommand);

SCTPSendCommand::SCTPSendCommand(const char *name) : SCTPCommand(name)
{
    this->last_var = 0;
    this->ppid_var = 0;
    this->primary_var = true;
}

SCTPSendCommand::SCTPSendCommand(const SCTPSendCommand& other) : SCTPCommand()
{
    setName(other.getName());
    operator=(other);
}

SCTPSendCommand::~SCTPSendCommand()
{
}

SCTPSendCommand& SCTPSendCommand::operator=(const SCTPSendCommand& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->last_var = other.last_var;
    this->ppid_var = other.ppid_var;
    this->primary_var = other.primary_var;
    return *this;
}

void SCTPSendCommand::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->last_var);
    doPacking(b,this->ppid_var);
    doPacking(b,this->primary_var);
}

void SCTPSendCommand::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->last_var);
    doUnpacking(b,this->ppid_var);
    doUnpacking(b,this->primary_var);
}

bool SCTPSendCommand::getLast() const
{
    return last_var;
}

void SCTPSendCommand::setLast(bool last_var)
{
    this->last_var = last_var;
}

unsigned int SCTPSendCommand::getPpid() const
{
    return ppid_var;
}

void SCTPSendCommand::setPpid(unsigned int ppid_var)
{
    this->ppid_var = ppid_var;
}

bool SCTPSendCommand::getPrimary() const
{
    return primary_var;
}

void SCTPSendCommand::setPrimary(bool primary_var)
{
    this->primary_var = primary_var;
}

class SCTPSendCommandDescriptor : public cClassDescriptor
{
  public:
    SCTPSendCommandDescriptor();
    virtual ~SCTPSendCommandDescriptor();

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

Register_ClassDescriptor(SCTPSendCommandDescriptor);

SCTPSendCommandDescriptor::SCTPSendCommandDescriptor() : cClassDescriptor("SCTPSendCommand", "SCTPCommand")
{
}

SCTPSendCommandDescriptor::~SCTPSendCommandDescriptor()
{
}

bool SCTPSendCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSendCommand *>(obj)!=NULL;
}

const char *SCTPSendCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSendCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPSendCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPSendCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "last";
        case 1: return "ppid";
        case 2: return "primary";
        default: return NULL;
    }
}

const char *SCTPSendCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "unsigned int";
        case 2: return "bool";
        default: return NULL;
    }
}

const char *SCTPSendCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSendCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPSendCommandDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getLast(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getPpid(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->getPrimary(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPSendCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setLast(string2bool(value)); return true;
        case 1: pp->setPpid(string2ulong(value)); return true;
        case 2: pp->setPrimary(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPSendCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSendCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPConnectInfo);

SCTPConnectInfo::SCTPConnectInfo(const char *name) : SCTPCommand(name)
{
    this->localPort_var = 0;
    this->remotePort_var = 0;
    this->status_var = 0;
    this->inboundStreams_var = 0;
    this->outboundStreams_var = 0;
}

SCTPConnectInfo::SCTPConnectInfo(const SCTPConnectInfo& other) : SCTPCommand()
{
    setName(other.getName());
    operator=(other);
}

SCTPConnectInfo::~SCTPConnectInfo()
{
}

SCTPConnectInfo& SCTPConnectInfo::operator=(const SCTPConnectInfo& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->remoteAddresses_var = other.remoteAddresses_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    this->status_var = other.status_var;
    this->inboundStreams_var = other.inboundStreams_var;
    this->outboundStreams_var = other.outboundStreams_var;
    return *this;
}

void SCTPConnectInfo::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->remoteAddresses_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
    doPacking(b,this->status_var);
    doPacking(b,this->inboundStreams_var);
    doPacking(b,this->outboundStreams_var);
}

void SCTPConnectInfo::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->remoteAddresses_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->inboundStreams_var);
    doUnpacking(b,this->outboundStreams_var);
}

AddressVector& SCTPConnectInfo::getRemoteAddresses()
{
    return remoteAddresses_var;
}

void SCTPConnectInfo::setRemoteAddresses(const AddressVector& remoteAddresses_var)
{
    this->remoteAddresses_var = remoteAddresses_var;
}

int SCTPConnectInfo::getLocalPort() const
{
    return localPort_var;
}

void SCTPConnectInfo::setLocalPort(int localPort_var)
{
    this->localPort_var = localPort_var;
}

int SCTPConnectInfo::getRemotePort() const
{
    return remotePort_var;
}

void SCTPConnectInfo::setRemotePort(int remotePort_var)
{
    this->remotePort_var = remotePort_var;
}

int SCTPConnectInfo::getStatus() const
{
    return status_var;
}

void SCTPConnectInfo::setStatus(int status_var)
{
    this->status_var = status_var;
}

int SCTPConnectInfo::getInboundStreams() const
{
    return inboundStreams_var;
}

void SCTPConnectInfo::setInboundStreams(int inboundStreams_var)
{
    this->inboundStreams_var = inboundStreams_var;
}

int SCTPConnectInfo::getOutboundStreams() const
{
    return outboundStreams_var;
}

void SCTPConnectInfo::setOutboundStreams(int outboundStreams_var)
{
    this->outboundStreams_var = outboundStreams_var;
}

class SCTPConnectInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPConnectInfoDescriptor();
    virtual ~SCTPConnectInfoDescriptor();

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

Register_ClassDescriptor(SCTPConnectInfoDescriptor);

SCTPConnectInfoDescriptor::SCTPConnectInfoDescriptor() : cClassDescriptor("SCTPConnectInfo", "SCTPCommand")
{
}

SCTPConnectInfoDescriptor::~SCTPConnectInfoDescriptor()
{
}

bool SCTPConnectInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPConnectInfo *>(obj)!=NULL;
}

const char *SCTPConnectInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPConnectInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int SCTPConnectInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *SCTPConnectInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "remoteAddresses";
        case 1: return "localPort";
        case 2: return "remotePort";
        case 3: return "status";
        case 4: return "inboundStreams";
        case 5: return "outboundStreams";
        default: return NULL;
    }
}

const char *SCTPConnectInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "AddressVector";
        case 1: return "int";
        case 2: return "int";
        case 3: return "int";
        case 4: return "int";
        case 5: return "int";
        default: return NULL;
    }
}

const char *SCTPConnectInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPConnectInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPConnectInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddresses(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getLocalPort(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getRemotePort(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getStatus(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getInboundStreams(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getOutboundStreams(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPConnectInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        case 1: pp->setLocalPort(string2long(value)); return true;
        case 2: pp->setRemotePort(string2long(value)); return true;
        case 3: pp->setStatus(string2long(value)); return true;
        case 4: pp->setInboundStreams(string2long(value)); return true;
        case 5: pp->setOutboundStreams(string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPConnectInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "AddressVector"; break;
        default: return NULL;
    }
}

void *SCTPConnectInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddresses()); break;
        default: return NULL;
    }
}

Register_Class(SCTPStatusInfo);

SCTPStatusInfo::SCTPStatusInfo(const char *name) : SCTPCommand(name)
{
    this->state_var = 0;
    this->stateName_var = 0;
    this->active_var = 0;
}

SCTPStatusInfo::SCTPStatusInfo(const SCTPStatusInfo& other) : SCTPCommand()
{
    setName(other.getName());
    operator=(other);
}

SCTPStatusInfo::~SCTPStatusInfo()
{
}

SCTPStatusInfo& SCTPStatusInfo::operator=(const SCTPStatusInfo& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->state_var = other.state_var;
    this->stateName_var = other.stateName_var;
    this->pathId_var = other.pathId_var;
    this->active_var = other.active_var;
    return *this;
}

void SCTPStatusInfo::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->state_var);
    doPacking(b,this->stateName_var);
    doPacking(b,this->pathId_var);
    doPacking(b,this->active_var);
}

void SCTPStatusInfo::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->state_var);
    doUnpacking(b,this->stateName_var);
    doUnpacking(b,this->pathId_var);
    doUnpacking(b,this->active_var);
}

int SCTPStatusInfo::getState() const
{
    return state_var;
}

void SCTPStatusInfo::setState(int state_var)
{
    this->state_var = state_var;
}

const char * SCTPStatusInfo::getStateName() const
{
    return stateName_var.c_str();
}

void SCTPStatusInfo::setStateName(const char * stateName_var)
{
    this->stateName_var = stateName_var;
}

IPvXAddress& SCTPStatusInfo::getPathId()
{
    return pathId_var;
}

void SCTPStatusInfo::setPathId(const IPvXAddress& pathId_var)
{
    this->pathId_var = pathId_var;
}

bool SCTPStatusInfo::getActive() const
{
    return active_var;
}

void SCTPStatusInfo::setActive(bool active_var)
{
    this->active_var = active_var;
}

class SCTPStatusInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPStatusInfoDescriptor();
    virtual ~SCTPStatusInfoDescriptor();

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

Register_ClassDescriptor(SCTPStatusInfoDescriptor);

SCTPStatusInfoDescriptor::SCTPStatusInfoDescriptor() : cClassDescriptor("SCTPStatusInfo", "SCTPCommand")
{
}

SCTPStatusInfoDescriptor::~SCTPStatusInfoDescriptor()
{
}

bool SCTPStatusInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPStatusInfo *>(obj)!=NULL;
}

const char *SCTPStatusInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPStatusInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPStatusInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *SCTPStatusInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "state";
        case 1: return "stateName";
        case 2: return "pathId";
        case 3: return "active";
        default: return NULL;
    }
}

const char *SCTPStatusInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "string";
        case 2: return "IPvXAddress";
        case 3: return "bool";
        default: return NULL;
    }
}

const char *SCTPStatusInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPStatusInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPStatusInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getState(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getStateName(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getPathId(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: bool2string(pp->getActive(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPStatusInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setState(string2long(value)); return true;
        case 1: pp->setStateName((value)); return true;
        case 3: pp->setActive(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPStatusInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *SCTPStatusInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getPathId()); break;
        default: return NULL;
    }
}

Register_Class(SCTPPathInfo);

SCTPPathInfo::SCTPPathInfo(const char *name) : SCTPCommand(name)
{
}

SCTPPathInfo::SCTPPathInfo(const SCTPPathInfo& other) : SCTPCommand()
{
    setName(other.getName());
    operator=(other);
}

SCTPPathInfo::~SCTPPathInfo()
{
}

SCTPPathInfo& SCTPPathInfo::operator=(const SCTPPathInfo& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->remoteAddress_var = other.remoteAddress_var;
    return *this;
}

void SCTPPathInfo::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->remoteAddress_var);
}

void SCTPPathInfo::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->remoteAddress_var);
}

IPvXAddress& SCTPPathInfo::getRemoteAddress()
{
    return remoteAddress_var;
}

void SCTPPathInfo::setRemoteAddress(const IPvXAddress& remoteAddress_var)
{
    this->remoteAddress_var = remoteAddress_var;
}

class SCTPPathInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPPathInfoDescriptor();
    virtual ~SCTPPathInfoDescriptor();

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

Register_ClassDescriptor(SCTPPathInfoDescriptor);

SCTPPathInfoDescriptor::SCTPPathInfoDescriptor() : cClassDescriptor("SCTPPathInfo", "SCTPCommand")
{
}

SCTPPathInfoDescriptor::~SCTPPathInfoDescriptor()
{
}

bool SCTPPathInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPPathInfo *>(obj)!=NULL;
}

const char *SCTPPathInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPPathInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPPathInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPPathInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "remoteAddress";
        default: return NULL;
    }
}

const char *SCTPPathInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress";
        default: return NULL;
    }
}

const char *SCTPPathInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPPathInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPPathInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool SCTPPathInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SCTPPathInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *SCTPPathInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddress()); break;
        default: return NULL;
    }
}

Register_Class(SCTPResetInfo);

SCTPResetInfo::SCTPResetInfo(const char *name) : SCTPCommand(name)
{
    this->requestType_var = 0;
    streams_arraysize = 0;
    this->streams_var = 0;
}

SCTPResetInfo::SCTPResetInfo(const SCTPResetInfo& other) : SCTPCommand()
{
    setName(other.getName());
    streams_arraysize = 0;
    this->streams_var = 0;
    operator=(other);
}

SCTPResetInfo::~SCTPResetInfo()
{
    delete [] streams_var;
}

SCTPResetInfo& SCTPResetInfo::operator=(const SCTPResetInfo& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->remoteAddr_var = other.remoteAddr_var;
    this->requestType_var = other.requestType_var;
    delete [] this->streams_var;
    this->streams_var = (other.streams_arraysize==0) ? NULL : new char[other.streams_arraysize];
    streams_arraysize = other.streams_arraysize;
    for (unsigned int i=0; i<streams_arraysize; i++)
        this->streams_var[i] = other.streams_var[i];
    return *this;
}

void SCTPResetInfo::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->requestType_var);
    b->pack(streams_arraysize);
    doPacking(b,this->streams_var,streams_arraysize);
}

void SCTPResetInfo::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->requestType_var);
    delete [] this->streams_var;
    b->unpack(streams_arraysize);
    if (streams_arraysize==0) {
        this->streams_var = 0;
    } else {
        this->streams_var = new char[streams_arraysize];
        doUnpacking(b,this->streams_var,streams_arraysize);
    }
}

IPvXAddress& SCTPResetInfo::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPResetInfo::setRemoteAddr(const IPvXAddress& remoteAddr_var)
{
    this->remoteAddr_var = remoteAddr_var;
}

unsigned short SCTPResetInfo::getRequestType() const
{
    return requestType_var;
}

void SCTPResetInfo::setRequestType(unsigned short requestType_var)
{
    this->requestType_var = requestType_var;
}

void SCTPResetInfo::setStreamsArraySize(unsigned int size)
{
    char *streams_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = streams_arraysize < size ? streams_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        streams_var2[i] = this->streams_var[i];
    for (unsigned int i=sz; i<size; i++)
        streams_var2[i] = 0;
    streams_arraysize = size;
    delete [] this->streams_var;
    this->streams_var = streams_var2;
}

unsigned int SCTPResetInfo::getStreamsArraySize() const
{
    return streams_arraysize;
}

char SCTPResetInfo::getStreams(unsigned int k) const
{
    if (k>=streams_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streams_arraysize, k);
    return streams_var[k];
}

void SCTPResetInfo::setStreams(unsigned int k, char streams_var)
{
    if (k>=streams_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streams_arraysize, k);
    this->streams_var[k]=streams_var;
}

class SCTPResetInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPResetInfoDescriptor();
    virtual ~SCTPResetInfoDescriptor();

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

Register_ClassDescriptor(SCTPResetInfoDescriptor);

SCTPResetInfoDescriptor::SCTPResetInfoDescriptor() : cClassDescriptor("SCTPResetInfo", "SCTPCommand")
{
}

SCTPResetInfoDescriptor::~SCTPResetInfoDescriptor()
{
}

bool SCTPResetInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPResetInfo *>(obj)!=NULL;
}

const char *SCTPResetInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPResetInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPResetInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *SCTPResetInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "remoteAddr";
        case 1: return "requestType";
        case 2: return "streams";
        default: return NULL;
    }
}

const char *SCTPResetInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress";
        case 1: return "unsigned short";
        case 2: return "char";
        default: return NULL;
    }
}

const char *SCTPResetInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPResetInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 2: return pp->getStreamsArraySize();
        default: return 0;
    }
}

bool SCTPResetInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getRequestType(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getStreams(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPResetInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 1: pp->setRequestType(string2ulong(value)); return true;
        case 2: pp->setStreams(i,string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPResetInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *SCTPResetInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(SCTPInfo);

SCTPInfo::SCTPInfo(const char *name) : SCTPCommand(name)
{
    this->text_var = 0;
}

SCTPInfo::SCTPInfo(const SCTPInfo& other) : SCTPCommand()
{
    setName(other.getName());
    operator=(other);
}

SCTPInfo::~SCTPInfo()
{
}

SCTPInfo& SCTPInfo::operator=(const SCTPInfo& other)
{
    if (this==&other) return *this;
    SCTPCommand::operator=(other);
    this->text_var = other.text_var;
    return *this;
}

void SCTPInfo::parsimPack(cCommBuffer *b)
{
    SCTPCommand::parsimPack(b);
    doPacking(b,this->text_var);
}

void SCTPInfo::parsimUnpack(cCommBuffer *b)
{
    SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->text_var);
}

int SCTPInfo::getText() const
{
    return text_var;
}

void SCTPInfo::setText(int text_var)
{
    this->text_var = text_var;
}

class SCTPInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPInfoDescriptor();
    virtual ~SCTPInfoDescriptor();

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

Register_ClassDescriptor(SCTPInfoDescriptor);

SCTPInfoDescriptor::SCTPInfoDescriptor() : cClassDescriptor("SCTPInfo", "SCTPCommand")
{
}

SCTPInfoDescriptor::~SCTPInfoDescriptor()
{
}

bool SCTPInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPInfo *>(obj)!=NULL;
}

const char *SCTPInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "text";
        default: return NULL;
    }
}

const char *SCTPInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SCTPInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool SCTPInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getText(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool SCTPInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setText(string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


