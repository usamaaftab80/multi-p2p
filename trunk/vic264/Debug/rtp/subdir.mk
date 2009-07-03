################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../rtp/h261_play.cpp \
../rtp/pktbuf-rtp.cpp \
../rtp/session-ivs.cpp \
../rtp/session-nv.cpp \
../rtp/session-rtpv1.cpp \
../rtp/session.cpp \
../rtp/source.cpp \
../rtp/transmitter.cpp \
../rtp/vdd.cpp 

OBJS += \
./rtp/h261_play.o \
./rtp/pktbuf-rtp.o \
./rtp/session-ivs.o \
./rtp/session-nv.o \
./rtp/session-rtpv1.o \
./rtp/session.o \
./rtp/source.o \
./rtp/transmitter.o \
./rtp/vdd.o 

CPP_DEPS += \
./rtp/h261_play.d \
./rtp/pktbuf-rtp.d \
./rtp/session-ivs.d \
./rtp/session-nv.d \
./rtp/session-rtpv1.d \
./rtp/session.d \
./rtp/source.d \
./rtp/transmitter.d \
./rtp/vdd.d 


# Each subdirectory must supply rules for building sources it contributes
rtp/%.o: ../rtp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


