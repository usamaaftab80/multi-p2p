################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../render/mkbv/mkbv.c 

OBJS += \
./render/mkbv/mkbv.o 

C_DEPS += \
./render/mkbv/mkbv.d 


# Each subdirectory must supply rules for building sources it contributes
render/mkbv/%.o: ../render/mkbv/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


