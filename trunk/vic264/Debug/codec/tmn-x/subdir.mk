################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../codec/tmn-x/coder.c \
../codec/tmn-x/countbit.c \
../codec/tmn-x/dct.c \
../codec/tmn-x/filter.c \
../codec/tmn-x/intra_pred.c \
../codec/tmn-x/io.c \
../codec/tmn-x/main.c \
../codec/tmn-x/malloc_debug.c \
../codec/tmn-x/mot_est.c \
../codec/tmn-x/pred.c \
../codec/tmn-x/putbits.c \
../codec/tmn-x/putvlc.c \
../codec/tmn-x/quant.c \
../codec/tmn-x/ratectrl.c \
../codec/tmn-x/sac.c \
../codec/tmn-x/snr.c 

OBJS += \
./codec/tmn-x/coder.o \
./codec/tmn-x/countbit.o \
./codec/tmn-x/dct.o \
./codec/tmn-x/filter.o \
./codec/tmn-x/intra_pred.o \
./codec/tmn-x/io.o \
./codec/tmn-x/main.o \
./codec/tmn-x/malloc_debug.o \
./codec/tmn-x/mot_est.o \
./codec/tmn-x/pred.o \
./codec/tmn-x/putbits.o \
./codec/tmn-x/putvlc.o \
./codec/tmn-x/quant.o \
./codec/tmn-x/ratectrl.o \
./codec/tmn-x/sac.o \
./codec/tmn-x/snr.o 

C_DEPS += \
./codec/tmn-x/coder.d \
./codec/tmn-x/countbit.d \
./codec/tmn-x/dct.d \
./codec/tmn-x/filter.d \
./codec/tmn-x/intra_pred.d \
./codec/tmn-x/io.d \
./codec/tmn-x/main.d \
./codec/tmn-x/malloc_debug.d \
./codec/tmn-x/mot_est.d \
./codec/tmn-x/pred.d \
./codec/tmn-x/putbits.d \
./codec/tmn-x/putvlc.d \
./codec/tmn-x/quant.d \
./codec/tmn-x/ratectrl.d \
./codec/tmn-x/sac.d \
./codec/tmn-x/snr.d 


# Each subdirectory must supply rules for building sources it contributes
codec/tmn-x/%.o: ../codec/tmn-x/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


