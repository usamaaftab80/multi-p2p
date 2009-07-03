################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../render/mkhuff/mkhuff.cpp 

OBJS += \
./render/mkhuff/mkhuff.o 

CPP_DEPS += \
./render/mkhuff/mkhuff.d 


# Each subdirectory must supply rules for building sources it contributes
render/mkhuff/%.o: ../render/mkhuff/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


