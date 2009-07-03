################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../codec/p64/mkhuff.cpp \
../codec/p64/p64.cpp \
../codec/p64/p64as.cpp \
../codec/p64/p64dump.cpp 

OBJS += \
./codec/p64/mkhuff.o \
./codec/p64/p64.o \
./codec/p64/p64as.o \
./codec/p64/p64dump.o 

CPP_DEPS += \
./codec/p64/mkhuff.d \
./codec/p64/p64.d \
./codec/p64/p64as.d \
./codec/p64/p64dump.d 


# Each subdirectory must supply rules for building sources it contributes
codec/p64/%.o: ../codec/p64/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


