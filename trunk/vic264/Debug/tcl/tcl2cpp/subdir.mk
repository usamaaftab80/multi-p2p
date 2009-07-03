################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../tcl/tcl2cpp/tcl2cpp.c 

OBJS += \
./tcl/tcl2cpp/tcl2cpp.o 

C_DEPS += \
./tcl/tcl2cpp/tcl2cpp.d 


# Each subdirectory must supply rules for building sources it contributes
tcl/tcl2cpp/%.o: ../tcl/tcl2cpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


