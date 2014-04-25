################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CacheBlocks.cpp \
../src/CacheController.cpp \
../src/config.cpp \
../src/lruNode.cpp \
../src/main.cpp 

OBJS += \
./src/CacheBlocks.o \
./src/CacheController.o \
./src/config.o \
./src/lruNode.o \
./src/main.o 

CPP_DEPS += \
./src/CacheBlocks.d \
./src/CacheController.d \
./src/config.d \
./src/lruNode.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DDEBUG -I"C:\Users\Caitlyn\Documents\ECEN4593\CacheSimulator\src\inih\cpp" -I"C:\MinGW\include" -I../include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


