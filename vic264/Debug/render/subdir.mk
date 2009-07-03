################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../render/color-dither.cpp \
../render/color-ed.cpp \
../render/color-gray.cpp \
../render/color-hi.cpp \
../render/color-hist.cpp \
../render/color-mono.cpp \
../render/color-pseudo.cpp \
../render/color-quant.cpp \
../render/color-swscale.cpp \
../render/color-true.cpp \
../render/color-yuv.cpp \
../render/color.cpp \
../render/ppm.cpp \
../render/renderer-window.cpp \
../render/renderer.cpp \
../render/rgb-converter.cpp \
../render/vw.cpp \
../render/xvideo.cpp 

OBJS += \
./render/color-dither.o \
./render/color-ed.o \
./render/color-gray.o \
./render/color-hi.o \
./render/color-hist.o \
./render/color-mono.o \
./render/color-pseudo.o \
./render/color-quant.o \
./render/color-swscale.o \
./render/color-true.o \
./render/color-yuv.o \
./render/color.o \
./render/ppm.o \
./render/renderer-window.o \
./render/renderer.o \
./render/rgb-converter.o \
./render/vw.o \
./render/xvideo.o 

CPP_DEPS += \
./render/color-dither.d \
./render/color-ed.d \
./render/color-gray.d \
./render/color-hi.d \
./render/color-hist.d \
./render/color-mono.d \
./render/color-pseudo.d \
./render/color-quant.d \
./render/color-swscale.d \
./render/color-true.d \
./render/color-yuv.d \
./render/color.d \
./render/ppm.d \
./render/renderer-window.d \
./render/renderer.d \
./render/rgb-converter.d \
./render/vw.d \
./render/xvideo.d 


# Each subdirectory must supply rules for building sources it contributes
render/%.o: ../render/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


