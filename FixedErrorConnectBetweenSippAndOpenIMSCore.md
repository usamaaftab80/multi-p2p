# Installing SIPp and configuring the Open IMS Core #

  1. download the newest SIPp stable version (http://sipp.sourceforge.net)
> 2. compile it with MD5 authentication support
- Add **#include <limits.h>** in the file header where it is missed: **scenario.cpp** and **call.cpp**
> 3. install SIPp
With TLS and authentication  support, you must have installed OpenSSL library (>=0.9.8) (which may come with your system). Building SIPp consist only in adding the "ossl" option to the make command:
  * gunzip sipp-xxx.tar.gz
  * tar -xvf sipp-xxx.tar
  * cd sipp
  * make ossl



> 4. Modify the scripts for the S-SCSCF (file scscf.cfg)
> > set the default authentication algorithm to MD5

  * modparam("scscf","registration\_default\_algorithm","MD5")


> set the qop parameter to ""

> modparam("scscf","registration\_qop","auth,auth-int") ----->**modparam("scscf","registration\_qop","")**