################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../codec/h263/bitIn.c \
../codec/h263/bitOut.c \
../codec/h263/block.c \
../codec/h263/code.c \
../codec/h263/fdct.c \
../codec/h263/getblk.c \
../codec/h263/getgob.c \
../codec/h263/gethdr.c \
../codec/h263/getvlc.c \
../codec/h263/h263dec.c \
../codec/h263/h263enc.c \
../codec/h263/h263mux.c \
../codec/h263/h263rtp.c \
../codec/h263/idctdec.c \
../codec/h263/idctenc.c \
../codec/h263/input.c \
../codec/h263/motion.c \
../codec/h263/recon.c \
../codec/h263/reconh263.c \
../codec/h263/sac.c 

OBJS += \
./codec/h263/bitIn.o \
./codec/h263/bitOut.o \
./codec/h263/block.o \
./codec/h263/code.o \
./codec/h263/fdct.o \
./codec/h263/getblk.o \
./codec/h263/getgob.o \
./codec/h263/gethdr.o \
./codec/h263/getvlc.o \
./codec/h263/h263dec.o \
./codec/h263/h263enc.o \
./codec/h263/h263mux.o \
./codec/h263/h263rtp.o \
./codec/h263/idctdec.o \
./codec/h263/idctenc.o \
./codec/h263/input.o \
./codec/h263/motion.o \
./codec/h263/recon.o \
./codec/h263/reconh263.o \
./codec/h263/sac.o 

C_DEPS += \
./codec/h263/bitIn.d \
./codec/h263/bitOut.d \
./codec/h263/block.d \
./codec/h263/code.d \
./codec/h263/fdct.d \
./codec/h263/getblk.d \
./codec/h263/getgob.d \
./codec/h263/gethdr.d \
./codec/h263/getvlc.d \
./codec/h263/h263dec.d \
./codec/h263/h263enc.d \
./codec/h263/h263mux.d \
./codec/h263/h263rtp.d \
./codec/h263/idctdec.d \
./codec/h263/idctenc.d \
./codec/h263/input.d \
./codec/h263/motion.d \
./codec/h263/recon.d \
./codec/h263/reconh263.d \
./codec/h263/sac.d 


# Each subdirectory must supply rules for building sources it contributes
codec/h263/%.o: ../codec/h263/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


