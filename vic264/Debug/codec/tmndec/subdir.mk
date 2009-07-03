################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../codec/tmndec/display.c \
../codec/tmndec/dither.c \
../codec/tmndec/getbits.c \
../codec/tmndec/getblk.c \
../codec/tmndec/gethdr.c \
../codec/tmndec/getpic.c \
../codec/tmndec/getvlc.c \
../codec/tmndec/idct.c \
../codec/tmndec/idctref.c \
../codec/tmndec/recon.c \
../codec/tmndec/sac.c \
../codec/tmndec/store.c \
../codec/tmndec/tmndec.c \
../codec/tmndec/win.c \
../codec/tmndec/yuv2rgb.c \
../codec/tmndec/yuvrgb24.c 

OBJS += \
./codec/tmndec/display.o \
./codec/tmndec/dither.o \
./codec/tmndec/getbits.o \
./codec/tmndec/getblk.o \
./codec/tmndec/gethdr.o \
./codec/tmndec/getpic.o \
./codec/tmndec/getvlc.o \
./codec/tmndec/idct.o \
./codec/tmndec/idctref.o \
./codec/tmndec/recon.o \
./codec/tmndec/sac.o \
./codec/tmndec/store.o \
./codec/tmndec/tmndec.o \
./codec/tmndec/win.o \
./codec/tmndec/yuv2rgb.o \
./codec/tmndec/yuvrgb24.o 

C_DEPS += \
./codec/tmndec/display.d \
./codec/tmndec/dither.d \
./codec/tmndec/getbits.d \
./codec/tmndec/getblk.d \
./codec/tmndec/gethdr.d \
./codec/tmndec/getpic.d \
./codec/tmndec/getvlc.d \
./codec/tmndec/idct.d \
./codec/tmndec/idctref.d \
./codec/tmndec/recon.d \
./codec/tmndec/sac.d \
./codec/tmndec/store.d \
./codec/tmndec/tmndec.d \
./codec/tmndec/win.d \
./codec/tmndec/yuv2rgb.d \
./codec/tmndec/yuvrgb24.d 


# Each subdirectory must supply rules for building sources it contributes
codec/tmndec/%.o: ../codec/tmndec/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


