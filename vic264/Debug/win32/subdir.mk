################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../win32/win32.c \
../win32/win32X.c 

OBJS += \
./win32/win32.o \
./win32/win32X.o 

C_DEPS += \
./win32/win32.d \
./win32/win32X.d 


# Each subdirectory must supply rules for building sources it contributes
win32/%.o: ../win32/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


