################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include win32/subdir.mk
-include video/subdir.mk
-include tcl/tcl2cpp/subdir.mk
-include rtp/subdir.mk
-include render/subdir.mk
-include render/ppmtolut/subdir.mk
-include render/mkhuff/subdir.mk
-include render/mkcube/subdir.mk
-include render/mkbv/subdir.mk
-include render/histtolut/subdir.mk
-include net/subdir.mk
-include cpu/subdir.mk
-include codec/subdir.mk
-include codec/tmndec/subdir.mk
-include codec/tmn-x/subdir.mk
-include codec/tmn/subdir.mk
-include codec/p64/subdir.mk
-include codec/jpeg/subdir.mk
-include codec/h263/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: vic264

# Tool invocations
vic264: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++  -o"vic264" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) vic264
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
