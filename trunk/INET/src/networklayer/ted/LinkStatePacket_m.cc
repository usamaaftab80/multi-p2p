//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ted/LinkStatePacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LinkStatePacket_m.h"

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




Register_Class(LinkStateMsg);

LinkStateMsg::LinkStateMsg(const char *name, int kind) : cPacket(name,kind)
{
    linkInfo_arraysize = 0;
    this->linkInfo_var = 0;
    this->request_var = false;
    this->command_var = LINK_STATE_MESSAGE;
}

LinkStateMsg::LinkStateMsg(const LinkStateMsg& other) : cPacket()
{
    setName(other.getName());
    linkInfo_arraysize = 0;
    this->linkInfo_var = 0;
    operator=(other);
}

LinkStateMsg::~LinkStateMsg()
{
    delete [] linkInfo_var;
}

LinkStateMsg& LinkStateMsg::operator=(const LinkStateMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    delete [] this->linkInfo_var;
    this->linkInfo_var = (other.linkInfo_arraysize==0) ? NULL : new TELinkStateInfo[other.linkInfo_arraysize];
    linkInfo_arraysize = other.linkInfo_arraysize;
    for (unsigned int i=0; i<linkInfo_arraysize; i++)
        this->linkInfo_var[i] = other.linkInfo_var[i];
    this->request_var = other.request_var;
    this->command_var = other.command_var;
    return *this;
}

void LinkStateMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    b->pack(linkInfo_arraysize);
    doPacking(b,this->linkInfo_var,linkInfo_arraysize);
    doPacking(b,this->request_var);
    doPacking(b,this->command_var);
}

void LinkStateMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    delete [] this->linkInfo_var;
    b->unpack(linkInfo_arraysize);
    if (linkInfo_arraysize==0) {
        this->linkInfo_var = 0;
    } else {
        this->linkInfo_var = new TELinkStateInfo[linkInfo_arraysize];
        doUnpacking(b,this->linkInfo_var,linkInfo_arraysize);
    }
    doUnpacking(b,this->request_var);
    doUnpacking(b,this->command_var);
}

void LinkStateMsg::setLinkInfoArraySize(unsigned int size)
{
    TELinkStateInfo *linkInfo_var2 = (size==0) ? NULL : new TELinkStateInfo[size];
    unsigned int sz = linkInfo_arraysize < size ? linkInfo_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        linkInfo_var2[i] = this->linkInfo_var[i];
    linkInfo_arraysize = size;
    delete [] this->linkInfo_var;
    this->linkInfo_var = linkInfo_var2;
}

unsigned int LinkStateMsg::getLinkInfoArraySize() const
{
    return linkInfo_arraysize;
}

TELinkStateInfo& LinkStateMsg::getLinkInfo(unsigned int k)
{
    if (k>=linkInfo_arraysize) throw cRuntimeError("Array of size %d indexed by %d", linkInfo_arraysize, k);
    return linkInfo_var[k];
}

void LinkStateMsg::setLinkInfo(unsigned int k, const TELinkStateInfo& linkInfo_var)
{
    if (k>=linkInfo_arraysize) throw cRuntimeError("Array of size %d indexed by %d", linkInfo_arraysize, k);
    this->linkInfo_var[k]=linkInfo_var;
}

bool LinkStateMsg::getRequest() const
{
    return request_var;
}

void LinkStateMsg::setRequest(bool request_var)
{
    this->request_var = request_var;
}

int LinkStateMsg::getCommand() const
{
    return command_var;
}

void LinkStateMsg::setCommand(int command_var)
{
    this->command_var = command_var;
}

class LinkStateMsgDescriptor : public cClassDescriptor
{
  public:
    LinkStateMsgDescriptor();
    virtual ~LinkStateMsgDescriptor();

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

Register_ClassDescriptor(LinkStateMsgDescriptor);

LinkStateMsgDescriptor::LinkStateMsgDescriptor() : cClassDescriptor("LinkStateMsg", "cPacket")
{
}

LinkStateMsgDescriptor::~LinkStateMsgDescriptor()
{
}

bool LinkStateMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LinkStateMsg *>(obj)!=NULL;
}

const char *LinkStateMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LinkStateMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int LinkStateMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *LinkStateMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "linkInfo";
        case 1: return "request";
        case 2: return "command";
        default: return NULL;
    }
}

const char *LinkStateMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TELinkStateInfo";
        case 1: return "bool";
        case 2: return "int";
        default: return NULL;
    }
}

const char *LinkStateMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LinkStateMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LinkStateMsg *pp = (LinkStateMsg *)object; (void)pp;
    switch (field) {
        case 0: return pp->getLinkInfoArraySize();
        default: return 0;
    }
}

bool LinkStateMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    LinkStateMsg *pp = (LinkStateMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLinkInfo(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->getRequest(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool LinkStateMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LinkStateMsg *pp = (LinkStateMsg *)object; (void)pp;
    switch (field) {
        case 1: pp->setRequest(string2bool(value)); return true;
        case 2: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *LinkStateMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TELinkStateInfo"; break;
        default: return NULL;
    }
}

void *LinkStateMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LinkStateMsg *pp = (LinkStateMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLinkInfo(i)); break;
        default: return NULL;
    }
}


