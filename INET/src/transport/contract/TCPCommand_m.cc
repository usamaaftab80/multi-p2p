//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/contract/TCPCommand.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TCPCommand_m.h"

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
    cEnum *e = cEnum::find("TcpCommandCode");
    if (!e) enums.getInstance()->add(e = new cEnum("TcpCommandCode"));
    e->insert(TCP_C_OPEN_ACTIVE, "TCP_C_OPEN_ACTIVE");
    e->insert(TCP_C_OPEN_PASSIVE, "TCP_C_OPEN_PASSIVE");
    e->insert(TCP_C_SEND, "TCP_C_SEND");
    e->insert(TCP_C_CLOSE, "TCP_C_CLOSE");
    e->insert(TCP_C_ABORT, "TCP_C_ABORT");
    e->insert(TCP_C_STATUS, "TCP_C_STATUS");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("TcpStatusInd");
    if (!e) enums.getInstance()->add(e = new cEnum("TcpStatusInd"));
    e->insert(TCP_I_DATA, "TCP_I_DATA");
    e->insert(TCP_I_URGENT_DATA, "TCP_I_URGENT_DATA");
    e->insert(TCP_I_ESTABLISHED, "TCP_I_ESTABLISHED");
    e->insert(TCP_I_PEER_CLOSED, "TCP_I_PEER_CLOSED");
    e->insert(TCP_I_CLOSED, "TCP_I_CLOSED");
    e->insert(TCP_I_CONNECTION_REFUSED, "TCP_I_CONNECTION_REFUSED");
    e->insert(TCP_I_CONNECTION_RESET, "TCP_I_CONNECTION_RESET");
    e->insert(TCP_I_TIMED_OUT, "TCP_I_TIMED_OUT");
    e->insert(TCP_I_STATUS, "TCP_I_STATUS");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("TCPErrorCode");
    if (!e) enums.getInstance()->add(e = new cEnum("TCPErrorCode"));
);

Register_Class(TCPCommand);

TCPCommand::TCPCommand() : cObject()
{
    this->connId_var = -1;
    this->userId_var = -1;
}

TCPCommand::TCPCommand(const TCPCommand& other) : cObject()
{
    operator=(other);
}

TCPCommand::~TCPCommand()
{
}

TCPCommand& TCPCommand::operator=(const TCPCommand& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->connId_var = other.connId_var;
    this->userId_var = other.userId_var;
    return *this;
}

void TCPCommand::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->connId_var);
    doPacking(b,this->userId_var);
}

void TCPCommand::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->connId_var);
    doUnpacking(b,this->userId_var);
}

int TCPCommand::getConnId() const
{
    return connId_var;
}

void TCPCommand::setConnId(int connId_var)
{
    this->connId_var = connId_var;
}

int TCPCommand::getUserId() const
{
    return userId_var;
}

void TCPCommand::setUserId(int userId_var)
{
    this->userId_var = userId_var;
}

class TCPCommandDescriptor : public cClassDescriptor
{
  public:
    TCPCommandDescriptor();
    virtual ~TCPCommandDescriptor();

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

Register_ClassDescriptor(TCPCommandDescriptor);

TCPCommandDescriptor::TCPCommandDescriptor() : cClassDescriptor("TCPCommand", "cObject")
{
}

TCPCommandDescriptor::~TCPCommandDescriptor()
{
}

bool TCPCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPCommand *>(obj)!=NULL;
}

const char *TCPCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TCPCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "connId";
        case 1: return "userId";
        default: return NULL;
    }
}

const char *TCPCommandDescriptor::getFieldTypeString(void *object, int field) const
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
        default: return NULL;
    }
}

const char *TCPCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TCPCommandDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getConnId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getUserId(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TCPCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setConnId(string2long(value)); return true;
        case 1: pp->setUserId(string2long(value)); return true;
        default: return false;
    }
}

const char *TCPCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPErrorInfo);

TCPErrorInfo::TCPErrorInfo() : TCPCommand()
{
    this->errorCode_var = 0;
    this->messageText_var = 0;
}

TCPErrorInfo::TCPErrorInfo(const TCPErrorInfo& other) : TCPCommand()
{
    operator=(other);
}

TCPErrorInfo::~TCPErrorInfo()
{
}

TCPErrorInfo& TCPErrorInfo::operator=(const TCPErrorInfo& other)
{
    if (this==&other) return *this;
    TCPCommand::operator=(other);
    this->errorCode_var = other.errorCode_var;
    this->messageText_var = other.messageText_var;
    return *this;
}

void TCPErrorInfo::parsimPack(cCommBuffer *b)
{
    TCPCommand::parsimPack(b);
    doPacking(b,this->errorCode_var);
    doPacking(b,this->messageText_var);
}

void TCPErrorInfo::parsimUnpack(cCommBuffer *b)
{
    TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->errorCode_var);
    doUnpacking(b,this->messageText_var);
}

int TCPErrorInfo::getErrorCode() const
{
    return errorCode_var;
}

void TCPErrorInfo::setErrorCode(int errorCode_var)
{
    this->errorCode_var = errorCode_var;
}

const char * TCPErrorInfo::getMessageText() const
{
    return messageText_var.c_str();
}

void TCPErrorInfo::setMessageText(const char * messageText_var)
{
    this->messageText_var = messageText_var;
}

class TCPErrorInfoDescriptor : public cClassDescriptor
{
  public:
    TCPErrorInfoDescriptor();
    virtual ~TCPErrorInfoDescriptor();

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

Register_ClassDescriptor(TCPErrorInfoDescriptor);

TCPErrorInfoDescriptor::TCPErrorInfoDescriptor() : cClassDescriptor("TCPErrorInfo", "TCPCommand")
{
}

TCPErrorInfoDescriptor::~TCPErrorInfoDescriptor()
{
}

bool TCPErrorInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPErrorInfo *>(obj)!=NULL;
}

const char *TCPErrorInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPErrorInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TCPErrorInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPErrorInfoDescriptor::getFieldName(void *object, int field) const
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

const char *TCPErrorInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *TCPErrorInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "TCPErrorCode";
            return NULL;
        default: return NULL;
    }
}

int TCPErrorInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TCPErrorInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getErrorCode(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getMessageText(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TCPErrorInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setErrorCode(string2long(value)); return true;
        case 1: pp->setMessageText((value)); return true;
        default: return false;
    }
}

const char *TCPErrorInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPErrorInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOpenCommand);

TCPOpenCommand::TCPOpenCommand() : TCPCommand()
{
    this->localPort_var = -1;
    this->remotePort_var = -1;
    this->fork_var = false;
    this->sendQueueClass_var = 0;
    this->receiveQueueClass_var = 0;
    this->tcpAlgorithmClass_var = 0;
}

TCPOpenCommand::TCPOpenCommand(const TCPOpenCommand& other) : TCPCommand()
{
    operator=(other);
}

TCPOpenCommand::~TCPOpenCommand()
{
}

TCPOpenCommand& TCPOpenCommand::operator=(const TCPOpenCommand& other)
{
    if (this==&other) return *this;
    TCPCommand::operator=(other);
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    this->fork_var = other.fork_var;
    this->sendQueueClass_var = other.sendQueueClass_var;
    this->receiveQueueClass_var = other.receiveQueueClass_var;
    this->tcpAlgorithmClass_var = other.tcpAlgorithmClass_var;
    return *this;
}

void TCPOpenCommand::parsimPack(cCommBuffer *b)
{
    TCPCommand::parsimPack(b);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
    doPacking(b,this->fork_var);
    doPacking(b,this->sendQueueClass_var);
    doPacking(b,this->receiveQueueClass_var);
    doPacking(b,this->tcpAlgorithmClass_var);
}

void TCPOpenCommand::parsimUnpack(cCommBuffer *b)
{
    TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
    doUnpacking(b,this->fork_var);
    doUnpacking(b,this->sendQueueClass_var);
    doUnpacking(b,this->receiveQueueClass_var);
    doUnpacking(b,this->tcpAlgorithmClass_var);
}

IPvXAddress& TCPOpenCommand::getLocalAddr()
{
    return localAddr_var;
}

void TCPOpenCommand::setLocalAddr(const IPvXAddress& localAddr_var)
{
    this->localAddr_var = localAddr_var;
}

IPvXAddress& TCPOpenCommand::getRemoteAddr()
{
    return remoteAddr_var;
}

void TCPOpenCommand::setRemoteAddr(const IPvXAddress& remoteAddr_var)
{
    this->remoteAddr_var = remoteAddr_var;
}

int TCPOpenCommand::getLocalPort() const
{
    return localPort_var;
}

void TCPOpenCommand::setLocalPort(int localPort_var)
{
    this->localPort_var = localPort_var;
}

int TCPOpenCommand::getRemotePort() const
{
    return remotePort_var;
}

void TCPOpenCommand::setRemotePort(int remotePort_var)
{
    this->remotePort_var = remotePort_var;
}

bool TCPOpenCommand::getFork() const
{
    return fork_var;
}

void TCPOpenCommand::setFork(bool fork_var)
{
    this->fork_var = fork_var;
}

const char * TCPOpenCommand::getSendQueueClass() const
{
    return sendQueueClass_var.c_str();
}

void TCPOpenCommand::setSendQueueClass(const char * sendQueueClass_var)
{
    this->sendQueueClass_var = sendQueueClass_var;
}

const char * TCPOpenCommand::getReceiveQueueClass() const
{
    return receiveQueueClass_var.c_str();
}

void TCPOpenCommand::setReceiveQueueClass(const char * receiveQueueClass_var)
{
    this->receiveQueueClass_var = receiveQueueClass_var;
}

const char * TCPOpenCommand::getTcpAlgorithmClass() const
{
    return tcpAlgorithmClass_var.c_str();
}

void TCPOpenCommand::setTcpAlgorithmClass(const char * tcpAlgorithmClass_var)
{
    this->tcpAlgorithmClass_var = tcpAlgorithmClass_var;
}

class TCPOpenCommandDescriptor : public cClassDescriptor
{
  public:
    TCPOpenCommandDescriptor();
    virtual ~TCPOpenCommandDescriptor();

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

Register_ClassDescriptor(TCPOpenCommandDescriptor);

TCPOpenCommandDescriptor::TCPOpenCommandDescriptor() : cClassDescriptor("TCPOpenCommand", "TCPCommand")
{
}

TCPOpenCommandDescriptor::~TCPOpenCommandDescriptor()
{
}

bool TCPOpenCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOpenCommand *>(obj)!=NULL;
}

const char *TCPOpenCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOpenCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int TCPOpenCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *TCPOpenCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "localAddr";
        case 1: return "remoteAddr";
        case 2: return "localPort";
        case 3: return "remotePort";
        case 4: return "fork";
        case 5: return "sendQueueClass";
        case 6: return "receiveQueueClass";
        case 7: return "tcpAlgorithmClass";
        default: return NULL;
    }
}

const char *TCPOpenCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress";
        case 1: return "IPvXAddress";
        case 2: return "int";
        case 3: return "int";
        case 4: return "bool";
        case 5: return "string";
        case 6: return "string";
        case 7: return "string";
        default: return NULL;
    }
}

const char *TCPOpenCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOpenCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TCPOpenCommandDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLocalAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getRemoteAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getLocalPort(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getRemotePort(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->getFork(),resultbuf,bufsize); return true;
        case 5: oppstring2string(pp->getSendQueueClass(),resultbuf,bufsize); return true;
        case 6: oppstring2string(pp->getReceiveQueueClass(),resultbuf,bufsize); return true;
        case 7: oppstring2string(pp->getTcpAlgorithmClass(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TCPOpenCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        case 2: pp->setLocalPort(string2long(value)); return true;
        case 3: pp->setRemotePort(string2long(value)); return true;
        case 4: pp->setFork(string2bool(value)); return true;
        case 5: pp->setSendQueueClass((value)); return true;
        case 6: pp->setReceiveQueueClass((value)); return true;
        case 7: pp->setTcpAlgorithmClass((value)); return true;
        default: return false;
    }
}

const char *TCPOpenCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress"; break;
        case 1: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *TCPOpenCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLocalAddr()); break;
        case 1: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(TCPSendCommand);

TCPSendCommand::TCPSendCommand() : TCPCommand()
{
}

TCPSendCommand::TCPSendCommand(const TCPSendCommand& other) : TCPCommand()
{
    operator=(other);
}

TCPSendCommand::~TCPSendCommand()
{
}

TCPSendCommand& TCPSendCommand::operator=(const TCPSendCommand& other)
{
    if (this==&other) return *this;
    TCPCommand::operator=(other);
    return *this;
}

void TCPSendCommand::parsimPack(cCommBuffer *b)
{
    TCPCommand::parsimPack(b);
}

void TCPSendCommand::parsimUnpack(cCommBuffer *b)
{
    TCPCommand::parsimUnpack(b);
}

class TCPSendCommandDescriptor : public cClassDescriptor
{
  public:
    TCPSendCommandDescriptor();
    virtual ~TCPSendCommandDescriptor();

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

Register_ClassDescriptor(TCPSendCommandDescriptor);

TCPSendCommandDescriptor::TCPSendCommandDescriptor() : cClassDescriptor("TCPSendCommand", "TCPCommand")
{
}

TCPSendCommandDescriptor::~TCPSendCommandDescriptor()
{
}

bool TCPSendCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPSendCommand *>(obj)!=NULL;
}

const char *TCPSendCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPSendCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TCPSendCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPSendCommandDescriptor::getFieldName(void *object, int field) const
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

const char *TCPSendCommandDescriptor::getFieldTypeString(void *object, int field) const
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

const char *TCPSendCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPSendCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TCPSendCommandDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool TCPSendCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TCPSendCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPSendCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPConnectInfo);

TCPConnectInfo::TCPConnectInfo() : TCPCommand()
{
    this->localPort_var = 0;
    this->remotePort_var = 0;
}

TCPConnectInfo::TCPConnectInfo(const TCPConnectInfo& other) : TCPCommand()
{
    operator=(other);
}

TCPConnectInfo::~TCPConnectInfo()
{
}

TCPConnectInfo& TCPConnectInfo::operator=(const TCPConnectInfo& other)
{
    if (this==&other) return *this;
    TCPCommand::operator=(other);
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    return *this;
}

void TCPConnectInfo::parsimPack(cCommBuffer *b)
{
    TCPCommand::parsimPack(b);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
}

void TCPConnectInfo::parsimUnpack(cCommBuffer *b)
{
    TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
}

IPvXAddress& TCPConnectInfo::getLocalAddr()
{
    return localAddr_var;
}

void TCPConnectInfo::setLocalAddr(const IPvXAddress& localAddr_var)
{
    this->localAddr_var = localAddr_var;
}

IPvXAddress& TCPConnectInfo::getRemoteAddr()
{
    return remoteAddr_var;
}

void TCPConnectInfo::setRemoteAddr(const IPvXAddress& remoteAddr_var)
{
    this->remoteAddr_var = remoteAddr_var;
}

int TCPConnectInfo::getLocalPort() const
{
    return localPort_var;
}

void TCPConnectInfo::setLocalPort(int localPort_var)
{
    this->localPort_var = localPort_var;
}

int TCPConnectInfo::getRemotePort() const
{
    return remotePort_var;
}

void TCPConnectInfo::setRemotePort(int remotePort_var)
{
    this->remotePort_var = remotePort_var;
}

class TCPConnectInfoDescriptor : public cClassDescriptor
{
  public:
    TCPConnectInfoDescriptor();
    virtual ~TCPConnectInfoDescriptor();

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

Register_ClassDescriptor(TCPConnectInfoDescriptor);

TCPConnectInfoDescriptor::TCPConnectInfoDescriptor() : cClassDescriptor("TCPConnectInfo", "TCPCommand")
{
}

TCPConnectInfoDescriptor::~TCPConnectInfoDescriptor()
{
}

bool TCPConnectInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPConnectInfo *>(obj)!=NULL;
}

const char *TCPConnectInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPConnectInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int TCPConnectInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *TCPConnectInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "localAddr";
        case 1: return "remoteAddr";
        case 2: return "localPort";
        case 3: return "remotePort";
        default: return NULL;
    }
}

const char *TCPConnectInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress";
        case 1: return "IPvXAddress";
        case 2: return "int";
        case 3: return "int";
        default: return NULL;
    }
}

const char *TCPConnectInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPConnectInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TCPConnectInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLocalAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getRemoteAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getLocalPort(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getRemotePort(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TCPConnectInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        case 2: pp->setLocalPort(string2long(value)); return true;
        case 3: pp->setRemotePort(string2long(value)); return true;
        default: return false;
    }
}

const char *TCPConnectInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPvXAddress"; break;
        case 1: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *TCPConnectInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLocalAddr()); break;
        case 1: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(TCPStatusInfo);

TCPStatusInfo::TCPStatusInfo() : TCPCommand()
{
    this->state_var = 0;
    this->stateName_var = 0;
    this->localPort_var = 0;
    this->remotePort_var = 0;
    this->snd_mss_var = 0;
    this->snd_una_var = 0;
    this->snd_nxt_var = 0;
    this->snd_max_var = 0;
    this->snd_wnd_var = 0;
    this->snd_up_var = 0;
    this->snd_wl1_var = 0;
    this->snd_wl2_var = 0;
    this->iss_var = 0;
    this->rcv_nxt_var = 0;
    this->rcv_wnd_var = 0;
    this->rcv_up_var = 0;
    this->irs_var = 0;
    this->fin_ack_rcvd_var = 0;
}

TCPStatusInfo::TCPStatusInfo(const TCPStatusInfo& other) : TCPCommand()
{
    operator=(other);
}

TCPStatusInfo::~TCPStatusInfo()
{
}

TCPStatusInfo& TCPStatusInfo::operator=(const TCPStatusInfo& other)
{
    if (this==&other) return *this;
    TCPCommand::operator=(other);
    this->state_var = other.state_var;
    this->stateName_var = other.stateName_var;
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    this->snd_mss_var = other.snd_mss_var;
    this->snd_una_var = other.snd_una_var;
    this->snd_nxt_var = other.snd_nxt_var;
    this->snd_max_var = other.snd_max_var;
    this->snd_wnd_var = other.snd_wnd_var;
    this->snd_up_var = other.snd_up_var;
    this->snd_wl1_var = other.snd_wl1_var;
    this->snd_wl2_var = other.snd_wl2_var;
    this->iss_var = other.iss_var;
    this->rcv_nxt_var = other.rcv_nxt_var;
    this->rcv_wnd_var = other.rcv_wnd_var;
    this->rcv_up_var = other.rcv_up_var;
    this->irs_var = other.irs_var;
    this->fin_ack_rcvd_var = other.fin_ack_rcvd_var;
    return *this;
}

void TCPStatusInfo::parsimPack(cCommBuffer *b)
{
    TCPCommand::parsimPack(b);
    doPacking(b,this->state_var);
    doPacking(b,this->stateName_var);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
    doPacking(b,this->snd_mss_var);
    doPacking(b,this->snd_una_var);
    doPacking(b,this->snd_nxt_var);
    doPacking(b,this->snd_max_var);
    doPacking(b,this->snd_wnd_var);
    doPacking(b,this->snd_up_var);
    doPacking(b,this->snd_wl1_var);
    doPacking(b,this->snd_wl2_var);
    doPacking(b,this->iss_var);
    doPacking(b,this->rcv_nxt_var);
    doPacking(b,this->rcv_wnd_var);
    doPacking(b,this->rcv_up_var);
    doPacking(b,this->irs_var);
    doPacking(b,this->fin_ack_rcvd_var);
}

void TCPStatusInfo::parsimUnpack(cCommBuffer *b)
{
    TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->state_var);
    doUnpacking(b,this->stateName_var);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
    doUnpacking(b,this->snd_mss_var);
    doUnpacking(b,this->snd_una_var);
    doUnpacking(b,this->snd_nxt_var);
    doUnpacking(b,this->snd_max_var);
    doUnpacking(b,this->snd_wnd_var);
    doUnpacking(b,this->snd_up_var);
    doUnpacking(b,this->snd_wl1_var);
    doUnpacking(b,this->snd_wl2_var);
    doUnpacking(b,this->iss_var);
    doUnpacking(b,this->rcv_nxt_var);
    doUnpacking(b,this->rcv_wnd_var);
    doUnpacking(b,this->rcv_up_var);
    doUnpacking(b,this->irs_var);
    doUnpacking(b,this->fin_ack_rcvd_var);
}

int TCPStatusInfo::getState() const
{
    return state_var;
}

void TCPStatusInfo::setState(int state_var)
{
    this->state_var = state_var;
}

const char * TCPStatusInfo::getStateName() const
{
    return stateName_var.c_str();
}

void TCPStatusInfo::setStateName(const char * stateName_var)
{
    this->stateName_var = stateName_var;
}

IPvXAddress& TCPStatusInfo::getLocalAddr()
{
    return localAddr_var;
}

void TCPStatusInfo::setLocalAddr(const IPvXAddress& localAddr_var)
{
    this->localAddr_var = localAddr_var;
}

IPvXAddress& TCPStatusInfo::getRemoteAddr()
{
    return remoteAddr_var;
}

void TCPStatusInfo::setRemoteAddr(const IPvXAddress& remoteAddr_var)
{
    this->remoteAddr_var = remoteAddr_var;
}

int TCPStatusInfo::getLocalPort() const
{
    return localPort_var;
}

void TCPStatusInfo::setLocalPort(int localPort_var)
{
    this->localPort_var = localPort_var;
}

int TCPStatusInfo::getRemotePort() const
{
    return remotePort_var;
}

void TCPStatusInfo::setRemotePort(int remotePort_var)
{
    this->remotePort_var = remotePort_var;
}

int TCPStatusInfo::getSnd_mss() const
{
    return snd_mss_var;
}

void TCPStatusInfo::setSnd_mss(int snd_mss_var)
{
    this->snd_mss_var = snd_mss_var;
}

unsigned int TCPStatusInfo::getSnd_una() const
{
    return snd_una_var;
}

void TCPStatusInfo::setSnd_una(unsigned int snd_una_var)
{
    this->snd_una_var = snd_una_var;
}

unsigned int TCPStatusInfo::getSnd_nxt() const
{
    return snd_nxt_var;
}

void TCPStatusInfo::setSnd_nxt(unsigned int snd_nxt_var)
{
    this->snd_nxt_var = snd_nxt_var;
}

unsigned int TCPStatusInfo::getSnd_max() const
{
    return snd_max_var;
}

void TCPStatusInfo::setSnd_max(unsigned int snd_max_var)
{
    this->snd_max_var = snd_max_var;
}

unsigned int TCPStatusInfo::getSnd_wnd() const
{
    return snd_wnd_var;
}

void TCPStatusInfo::setSnd_wnd(unsigned int snd_wnd_var)
{
    this->snd_wnd_var = snd_wnd_var;
}

unsigned int TCPStatusInfo::getSnd_up() const
{
    return snd_up_var;
}

void TCPStatusInfo::setSnd_up(unsigned int snd_up_var)
{
    this->snd_up_var = snd_up_var;
}

unsigned int TCPStatusInfo::getSnd_wl1() const
{
    return snd_wl1_var;
}

void TCPStatusInfo::setSnd_wl1(unsigned int snd_wl1_var)
{
    this->snd_wl1_var = snd_wl1_var;
}

unsigned int TCPStatusInfo::getSnd_wl2() const
{
    return snd_wl2_var;
}

void TCPStatusInfo::setSnd_wl2(unsigned int snd_wl2_var)
{
    this->snd_wl2_var = snd_wl2_var;
}

unsigned int TCPStatusInfo::getIss() const
{
    return iss_var;
}

void TCPStatusInfo::setIss(unsigned int iss_var)
{
    this->iss_var = iss_var;
}

unsigned int TCPStatusInfo::getRcv_nxt() const
{
    return rcv_nxt_var;
}

void TCPStatusInfo::setRcv_nxt(unsigned int rcv_nxt_var)
{
    this->rcv_nxt_var = rcv_nxt_var;
}

unsigned int TCPStatusInfo::getRcv_wnd() const
{
    return rcv_wnd_var;
}

void TCPStatusInfo::setRcv_wnd(unsigned int rcv_wnd_var)
{
    this->rcv_wnd_var = rcv_wnd_var;
}

unsigned int TCPStatusInfo::getRcv_up() const
{
    return rcv_up_var;
}

void TCPStatusInfo::setRcv_up(unsigned int rcv_up_var)
{
    this->rcv_up_var = rcv_up_var;
}

unsigned int TCPStatusInfo::getIrs() const
{
    return irs_var;
}

void TCPStatusInfo::setIrs(unsigned int irs_var)
{
    this->irs_var = irs_var;
}

bool TCPStatusInfo::getFin_ack_rcvd() const
{
    return fin_ack_rcvd_var;
}

void TCPStatusInfo::setFin_ack_rcvd(bool fin_ack_rcvd_var)
{
    this->fin_ack_rcvd_var = fin_ack_rcvd_var;
}

class TCPStatusInfoDescriptor : public cClassDescriptor
{
  public:
    TCPStatusInfoDescriptor();
    virtual ~TCPStatusInfoDescriptor();

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

Register_ClassDescriptor(TCPStatusInfoDescriptor);

TCPStatusInfoDescriptor::TCPStatusInfoDescriptor() : cClassDescriptor("TCPStatusInfo", "TCPCommand")
{
}

TCPStatusInfoDescriptor::~TCPStatusInfoDescriptor()
{
}

bool TCPStatusInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPStatusInfo *>(obj)!=NULL;
}

const char *TCPStatusInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPStatusInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 20+basedesc->getFieldCount(object) : 20;
}

unsigned int TCPStatusInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 12: return FD_ISEDITABLE;
        case 13: return FD_ISEDITABLE;
        case 14: return FD_ISEDITABLE;
        case 15: return FD_ISEDITABLE;
        case 16: return FD_ISEDITABLE;
        case 17: return FD_ISEDITABLE;
        case 18: return FD_ISEDITABLE;
        case 19: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *TCPStatusInfoDescriptor::getFieldName(void *object, int field) const
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
        case 2: return "localAddr";
        case 3: return "remoteAddr";
        case 4: return "localPort";
        case 5: return "remotePort";
        case 6: return "snd_mss";
        case 7: return "snd_una";
        case 8: return "snd_nxt";
        case 9: return "snd_max";
        case 10: return "snd_wnd";
        case 11: return "snd_up";
        case 12: return "snd_wl1";
        case 13: return "snd_wl2";
        case 14: return "iss";
        case 15: return "rcv_nxt";
        case 16: return "rcv_wnd";
        case 17: return "rcv_up";
        case 18: return "irs";
        case 19: return "fin_ack_rcvd";
        default: return NULL;
    }
}

const char *TCPStatusInfoDescriptor::getFieldTypeString(void *object, int field) const
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
        case 3: return "IPvXAddress";
        case 4: return "int";
        case 5: return "int";
        case 6: return "int";
        case 7: return "unsigned int";
        case 8: return "unsigned int";
        case 9: return "unsigned int";
        case 10: return "unsigned int";
        case 11: return "unsigned int";
        case 12: return "unsigned int";
        case 13: return "unsigned int";
        case 14: return "unsigned int";
        case 15: return "unsigned int";
        case 16: return "unsigned int";
        case 17: return "unsigned int";
        case 18: return "unsigned int";
        case 19: return "bool";
        default: return NULL;
    }
}

const char *TCPStatusInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPStatusInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool TCPStatusInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getState(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getStateName(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getLocalAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: {std::stringstream out; out << pp->getRemoteAddr(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getLocalPort(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getRemotePort(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getSnd_mss(),resultbuf,bufsize); return true;
        case 7: ulong2string(pp->getSnd_una(),resultbuf,bufsize); return true;
        case 8: ulong2string(pp->getSnd_nxt(),resultbuf,bufsize); return true;
        case 9: ulong2string(pp->getSnd_max(),resultbuf,bufsize); return true;
        case 10: ulong2string(pp->getSnd_wnd(),resultbuf,bufsize); return true;
        case 11: ulong2string(pp->getSnd_up(),resultbuf,bufsize); return true;
        case 12: ulong2string(pp->getSnd_wl1(),resultbuf,bufsize); return true;
        case 13: ulong2string(pp->getSnd_wl2(),resultbuf,bufsize); return true;
        case 14: ulong2string(pp->getIss(),resultbuf,bufsize); return true;
        case 15: ulong2string(pp->getRcv_nxt(),resultbuf,bufsize); return true;
        case 16: ulong2string(pp->getRcv_wnd(),resultbuf,bufsize); return true;
        case 17: ulong2string(pp->getRcv_up(),resultbuf,bufsize); return true;
        case 18: ulong2string(pp->getIrs(),resultbuf,bufsize); return true;
        case 19: bool2string(pp->getFin_ack_rcvd(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TCPStatusInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setState(string2long(value)); return true;
        case 1: pp->setStateName((value)); return true;
        case 4: pp->setLocalPort(string2long(value)); return true;
        case 5: pp->setRemotePort(string2long(value)); return true;
        case 6: pp->setSnd_mss(string2long(value)); return true;
        case 7: pp->setSnd_una(string2ulong(value)); return true;
        case 8: pp->setSnd_nxt(string2ulong(value)); return true;
        case 9: pp->setSnd_max(string2ulong(value)); return true;
        case 10: pp->setSnd_wnd(string2ulong(value)); return true;
        case 11: pp->setSnd_up(string2ulong(value)); return true;
        case 12: pp->setSnd_wl1(string2ulong(value)); return true;
        case 13: pp->setSnd_wl2(string2ulong(value)); return true;
        case 14: pp->setIss(string2ulong(value)); return true;
        case 15: pp->setRcv_nxt(string2ulong(value)); return true;
        case 16: pp->setRcv_wnd(string2ulong(value)); return true;
        case 17: pp->setRcv_up(string2ulong(value)); return true;
        case 18: pp->setIrs(string2ulong(value)); return true;
        case 19: pp->setFin_ack_rcvd(string2bool(value)); return true;
        default: return false;
    }
}

const char *TCPStatusInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "IPvXAddress"; break;
        case 3: return "IPvXAddress"; break;
        default: return NULL;
    }
}

void *TCPStatusInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getLocalAddr()); break;
        case 3: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}


