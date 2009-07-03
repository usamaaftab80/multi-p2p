################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../render/ppmtolut/ppmtolut.c 

OBJS += \
./render/ppmtolut/ppmtolut.o 

C_DEPS += \
./render/ppmtolut/ppmtolut.d 


# Each subdirectory must supply rules for building sources it contributes
render/ppmtolut/%.o: ../render/ppmtolut/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


