################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../net/cb.cpp \
../net/communicator.cpp \
../net/confbus.cpp \
../net/crypt-des.cpp \
../net/crypt-dull.cpp \
../net/crypt-rijndael.cpp \
../net/crypt.cpp \
../net/group-ipc.cpp \
../net/mbus_engine.cpp \
../net/mbus_handler.cpp \
../net/net-addr.cpp \
../net/net-atm.cpp \
../net/net-ip.cpp \
../net/net-ipv6.cpp \
../net/net-rtip.cpp \
../net/net.cpp \
../net/pktbuf.cpp \
../net/pkttbl.cpp 

C_SRCS += \
../net/cbAppInit.c \
../net/inet.c \
../net/inet6.c 

OBJS += \
./net/cb.o \
./net/cbAppInit.o \
./net/communicator.o \
./net/confbus.o \
./net/crypt-des.o \
./net/crypt-dull.o \
./net/crypt-rijndael.o \
./net/crypt.o \
./net/group-ipc.o \
./net/inet.o \
./net/inet6.o \
./net/mbus_engine.o \
./net/mbus_handler.o \
./net/net-addr.o \
./net/net-atm.o \
./net/net-ip.o \
./net/net-ipv6.o \
./net/net-rtip.o \
./net/net.o \
./net/pktbuf.o \
./net/pkttbl.o 

C_DEPS += \
./net/cbAppInit.d \
./net/inet.d \
./net/inet6.d 

CPP_DEPS += \
./net/cb.d \
./net/communicator.d \
./net/confbus.d \
./net/crypt-des.d \
./net/crypt-dull.d \
./net/crypt-rijndael.d \
./net/crypt.d \
./net/group-ipc.d \
./net/mbus_engine.d \
./net/mbus_handler.d \
./net/net-addr.d \
./net/net-atm.d \
./net/net-ip.d \
./net/net-ipv6.d \
./net/net-rtip.d \
./net/net.d \
./net/pktbuf.d \
./net/pkttbl.d 


# Each subdirectory must supply rules for building sources it contributes
net/%.o: ../net/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

net/%.o: ../net/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


