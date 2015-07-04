# Installing OSIP2 & eXosip2 Library #

Download: http://ftp.gnu.org/gnu/osip/libosip2-3.3.0.tar.gz

> tar xzfv libosip2-3.3.0.tar.gz

> cd libosip2-3.3.0

> ./configure --enable-test

> make

> sudo make install

Download eXosip: http://mirror.lihnidos.org/GNU/savannah/exosip/libeXosip2-3.3.0.tar.gz

> tar xzfv libeXosip2-3.3.0.tar.gz

> cd libeXosip2-3.3.0

> ./configure

> make

> make install

## Config OMNeT++ IDE to build with osip library ##
![http://i183.photobucket.com/albums/x32/hoangnq/install_osip.png](http://i183.photobucket.com/albums/x32/hoangnq/install_osip.png)

# Example sourcecode #
main.c
Class: HOSIP.h, .cc

## Compiling ##
gcc main.c -losip2 -lpthread -o test\_osip

## Compiling in Eclipse ##
Goto: Project/ Properties / Settings / C/C++ Build /Tool Settings / GCC C Linker / Libraries

Add: _osip2_ to (-l)

Add: _/usr/local/lib_ to (-L)

Add: _-lpthread_ to _Miscellaneous_ of GCC C Compiler, GCC C++ Compiler, GCC C Linker

## Running ##
./test\_osip: error while loading shared libraries: libosip2.so.3: cannot open shared object file: No such file or directory

**FIX:**
Add _export LD\_LIBRARY\_PATH=/usr/local/lib_ to /etc/profile

Add _/usr/local/lib_ to /etc/ld.so.conf