################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../cpu/cpuid.cpp 

C_SRCS += \
../cpu/cpudetect.c 

ASM_SRCS += \
../cpu/cpuid_win.asm 

OBJS += \
./cpu/cpudetect.o \
./cpu/cpuid.o \
./cpu/cpuid_win.o 

C_DEPS += \
./cpu/cpudetect.d 

CPP_DEPS += \
./cpu/cpuid.d 


# Each subdirectory must supply rules for building sources it contributes
cpu/%.o: ../cpu/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cpu/%.o: ../cpu/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cpu/%.o: ../cpu/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


