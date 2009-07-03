################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../video/assistor-jv.cpp \
../video/assistor-list.cpp \
../video/assistor-plx.cpp \
../video/assistor-xil.cpp \
../video/crossbar.cpp \
../video/deinterlace.cpp \
../video/device.cpp \
../video/grabber-bttv.cpp \
../video/grabber-cosmo.cpp \
../video/grabber-file.cpp \
../video/grabber-jv.cpp \
../video/grabber-linux1394.cpp \
../video/grabber-macosx.cpp \
../video/grabber-meteor.cpp \
../video/grabber-mme.cpp \
../video/grabber-ov511.cpp \
../video/grabber-plx.cpp \
../video/grabber-qcam.cpp \
../video/grabber-rtvc.cpp \
../video/grabber-slv.cpp \
../video/grabber-spigot.cpp \
../video/grabber-still.cpp \
../video/grabber-sunrise.cpp \
../video/grabber-svideo.cpp \
../video/grabber-v4l2-old.cpp \
../video/grabber-v4l2.cpp \
../video/grabber-video4linux.cpp \
../video/grabber-vigra.cpp \
../video/grabber-vl.cpp \
../video/grabber-vpix.cpp \
../video/grabber-win32.cpp \
../video/grabber-win32DS.cpp \
../video/grabber-x11.cpp \
../video/grabber-xil.cpp \
../video/grabber-xv.cpp \
../video/grabber.cpp \
../video/output-vl.cpp \
../video/yuv_convert.cpp 

C_SRCS += \
../video/jidctflt.c \
../video/tinyjpeg.c 

OBJS += \
./video/assistor-jv.o \
./video/assistor-list.o \
./video/assistor-plx.o \
./video/assistor-xil.o \
./video/crossbar.o \
./video/deinterlace.o \
./video/device.o \
./video/grabber-bttv.o \
./video/grabber-cosmo.o \
./video/grabber-file.o \
./video/grabber-jv.o \
./video/grabber-linux1394.o \
./video/grabber-macosx.o \
./video/grabber-meteor.o \
./video/grabber-mme.o \
./video/grabber-ov511.o \
./video/grabber-plx.o \
./video/grabber-qcam.o \
./video/grabber-rtvc.o \
./video/grabber-slv.o \
./video/grabber-spigot.o \
./video/grabber-still.o \
./video/grabber-sunrise.o \
./video/grabber-svideo.o \
./video/grabber-v4l2-old.o \
./video/grabber-v4l2.o \
./video/grabber-video4linux.o \
./video/grabber-vigra.o \
./video/grabber-vl.o \
./video/grabber-vpix.o \
./video/grabber-win32.o \
./video/grabber-win32DS.o \
./video/grabber-x11.o \
./video/grabber-xil.o \
./video/grabber-xv.o \
./video/grabber.o \
./video/jidctflt.o \
./video/output-vl.o \
./video/tinyjpeg.o \
./video/yuv_convert.o 

C_DEPS += \
./video/jidctflt.d \
./video/tinyjpeg.d 

CPP_DEPS += \
./video/assistor-jv.d \
./video/assistor-list.d \
./video/assistor-plx.d \
./video/assistor-xil.d \
./video/crossbar.d \
./video/deinterlace.d \
./video/device.d \
./video/grabber-bttv.d \
./video/grabber-cosmo.d \
./video/grabber-file.d \
./video/grabber-jv.d \
./video/grabber-linux1394.d \
./video/grabber-macosx.d \
./video/grabber-meteor.d \
./video/grabber-mme.d \
./video/grabber-ov511.d \
./video/grabber-plx.d \
./video/grabber-qcam.d \
./video/grabber-rtvc.d \
./video/grabber-slv.d \
./video/grabber-spigot.d \
./video/grabber-still.d \
./video/grabber-sunrise.d \
./video/grabber-svideo.d \
./video/grabber-v4l2-old.d \
./video/grabber-v4l2.d \
./video/grabber-video4linux.d \
./video/grabber-vigra.d \
./video/grabber-vl.d \
./video/grabber-vpix.d \
./video/grabber-win32.d \
./video/grabber-win32DS.d \
./video/grabber-x11.d \
./video/grabber-xil.d \
./video/grabber-xv.d \
./video/grabber.d \
./video/output-vl.d \
./video/yuv_convert.d 


# Each subdirectory must supply rules for building sources it contributes
video/%.o: ../video/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

video/%.o: ../video/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


