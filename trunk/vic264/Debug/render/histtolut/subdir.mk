################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../render/histtolut/histtolut.cpp 

C_SRCS += \
../render/histtolut/convex_hull.c 

OBJS += \
./render/histtolut/convex_hull.o \
./render/histtolut/histtolut.o 

C_DEPS += \
./render/histtolut/convex_hull.d 

CPP_DEPS += \
./render/histtolut/histtolut.d 


# Each subdirectory must supply rules for building sources it contributes
render/histtolut/%.o: ../render/histtolut/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

render/histtolut/%.o: ../render/histtolut/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


