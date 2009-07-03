################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../codec/compositor.cpp \
../codec/databuffer.cpp \
../codec/dct.cpp \
../codec/decoder-bvc.cpp \
../codec/decoder-cellb.cpp \
../codec/decoder-cosmo.cpp \
../codec/decoder-dv.cpp \
../codec/decoder-h261.cpp \
../codec/decoder-h261as.cpp \
../codec/decoder-h261v1.cpp \
../codec/decoder-h263.cpp \
../codec/decoder-h263v2.cpp \
../codec/decoder-h264.cpp \
../codec/decoder-jpeg.cpp \
../codec/decoder-mpeg4.cpp \
../codec/decoder-nv.cpp \
../codec/decoder-pvh.cpp \
../codec/decoder-raw.cpp \
../codec/decoder-scr.cpp \
../codec/decoder.cpp \
../codec/encoder-bvc.cpp \
../codec/encoder-cellb.cpp \
../codec/encoder-h261.cpp \
../codec/encoder-h261as.cpp \
../codec/encoder-h263.cpp \
../codec/encoder-h263v2.cpp \
../codec/encoder-h264.cpp \
../codec/encoder-jpeg.cpp \
../codec/encoder-mpeg4.cpp \
../codec/encoder-nv.cpp \
../codec/encoder-pvh.cpp \
../codec/encoder-raw.cpp \
../codec/ffmpeg_codec.cpp \
../codec/framer-cellb.cpp \
../codec/framer-h261.cpp \
../codec/framer-h261hw.cpp \
../codec/framer-jpeg.cpp \
../codec/packetbuffer.cpp \
../codec/rtp_h264_depayloader.cpp \
../codec/transcoder-jpeg.cpp \
../codec/x264encoder.cpp 

C_SRCS += \
../codec/cellb_tables.c \
../codec/huffcode.c \
../codec/pvh-huff.c 

OBJS += \
./codec/cellb_tables.o \
./codec/compositor.o \
./codec/databuffer.o \
./codec/dct.o \
./codec/decoder-bvc.o \
./codec/decoder-cellb.o \
./codec/decoder-cosmo.o \
./codec/decoder-dv.o \
./codec/decoder-h261.o \
./codec/decoder-h261as.o \
./codec/decoder-h261v1.o \
./codec/decoder-h263.o \
./codec/decoder-h263v2.o \
./codec/decoder-h264.o \
./codec/decoder-jpeg.o \
./codec/decoder-mpeg4.o \
./codec/decoder-nv.o \
./codec/decoder-pvh.o \
./codec/decoder-raw.o \
./codec/decoder-scr.o \
./codec/decoder.o \
./codec/encoder-bvc.o \
./codec/encoder-cellb.o \
./codec/encoder-h261.o \
./codec/encoder-h261as.o \
./codec/encoder-h263.o \
./codec/encoder-h263v2.o \
./codec/encoder-h264.o \
./codec/encoder-jpeg.o \
./codec/encoder-mpeg4.o \
./codec/encoder-nv.o \
./codec/encoder-pvh.o \
./codec/encoder-raw.o \
./codec/ffmpeg_codec.o \
./codec/framer-cellb.o \
./codec/framer-h261.o \
./codec/framer-h261hw.o \
./codec/framer-jpeg.o \
./codec/huffcode.o \
./codec/packetbuffer.o \
./codec/pvh-huff.o \
./codec/rtp_h264_depayloader.o \
./codec/transcoder-jpeg.o \
./codec/x264encoder.o 

C_DEPS += \
./codec/cellb_tables.d \
./codec/huffcode.d \
./codec/pvh-huff.d 

CPP_DEPS += \
./codec/compositor.d \
./codec/databuffer.d \
./codec/dct.d \
./codec/decoder-bvc.d \
./codec/decoder-cellb.d \
./codec/decoder-cosmo.d \
./codec/decoder-dv.d \
./codec/decoder-h261.d \
./codec/decoder-h261as.d \
./codec/decoder-h261v1.d \
./codec/decoder-h263.d \
./codec/decoder-h263v2.d \
./codec/decoder-h264.d \
./codec/decoder-jpeg.d \
./codec/decoder-mpeg4.d \
./codec/decoder-nv.d \
./codec/decoder-pvh.d \
./codec/decoder-raw.d \
./codec/decoder-scr.d \
./codec/decoder.d \
./codec/encoder-bvc.d \
./codec/encoder-cellb.d \
./codec/encoder-h261.d \
./codec/encoder-h261as.d \
./codec/encoder-h263.d \
./codec/encoder-h263v2.d \
./codec/encoder-h264.d \
./codec/encoder-jpeg.d \
./codec/encoder-mpeg4.d \
./codec/encoder-nv.d \
./codec/encoder-pvh.d \
./codec/encoder-raw.d \
./codec/ffmpeg_codec.d \
./codec/framer-cellb.d \
./codec/framer-h261.d \
./codec/framer-h261hw.d \
./codec/framer-jpeg.d \
./codec/packetbuffer.d \
./codec/rtp_h264_depayloader.d \
./codec/transcoder-jpeg.d \
./codec/x264encoder.d 


# Each subdirectory must supply rules for building sources it contributes
codec/%.o: ../codec/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

codec/%.o: ../codec/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


