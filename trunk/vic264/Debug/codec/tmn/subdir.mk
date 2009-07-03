################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../codec/tmn/coder.c \
../codec/tmn/countbit.c \
../codec/tmn/dct.c \
../codec/tmn/filter.c \
../codec/tmn/intra_pred.c \
../codec/tmn/io.c \
../codec/tmn/main.c \
../codec/tmn/malloc_debug.c \
../codec/tmn/mot_est.c \
../codec/tmn/pred.c \
../codec/tmn/putbits.c \
../codec/tmn/putvlc.c \
../codec/tmn/quant.c \
../codec/tmn/ratectrl.c \
../codec/tmn/sac.c \
../codec/tmn/snr.c 

OBJS += \
./codec/tmn/coder.o \
./codec/tmn/countbit.o \
./codec/tmn/dct.o \
./codec/tmn/filter.o \
./codec/tmn/intra_pred.o \
./codec/tmn/io.o \
./codec/tmn/main.o \
./codec/tmn/malloc_debug.o \
./codec/tmn/mot_est.o \
./codec/tmn/pred.o \
./codec/tmn/putbits.o \
./codec/tmn/putvlc.o \
./codec/tmn/quant.o \
./codec/tmn/ratectrl.o \
./codec/tmn/sac.o \
./codec/tmn/snr.o 

C_DEPS += \
./codec/tmn/coder.d \
./codec/tmn/countbit.d \
./codec/tmn/dct.d \
./codec/tmn/filter.d \
./codec/tmn/intra_pred.d \
./codec/tmn/io.d \
./codec/tmn/main.d \
./codec/tmn/malloc_debug.d \
./codec/tmn/mot_est.d \
./codec/tmn/pred.d \
./codec/tmn/putbits.d \
./codec/tmn/putvlc.d \
./codec/tmn/quant.d \
./codec/tmn/ratectrl.d \
./codec/tmn/sac.d \
./codec/tmn/snr.d 


# Each subdirectory must supply rules for building sources it contributes
codec/tmn/%.o: ../codec/tmn/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


