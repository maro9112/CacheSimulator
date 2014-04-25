################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/inih/cpp/INIReader.cpp 

OBJS += \
./src/inih/cpp/INIReader.o 

CPP_DEPS += \
./src/inih/cpp/INIReader.d 


# Each subdirectory must supply rules for building sources it contributes
src/inih/cpp/%.o: ../src/inih/cpp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DDEBUG -I"C:\Users\Caitlyn\Documents\ECEN4593\CacheSimulator\src\inih\cpp" -I"C:\MinGW\include" -I../include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


