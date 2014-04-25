################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/inih/ini.c 

OBJS += \
./src/inih/ini.o 

C_DEPS += \
./src/inih/ini.d 


# Each subdirectory must supply rules for building sources it contributes
src/inih/%.o: ../src/inih/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"C:\MinGW\lib\gcc\mingw32\4.6.1\include\c++" -I"C:\MinGW\lib\gcc\mingw32\4.6.1\include\c++\mingw32" -I"C:\MinGW\lib\gcc\mingw32\4.6.1\include\c++\backward" -I"C:\MinGW\lib\gcc\mingw32\4.6.1\include" -I"C:\MinGW\include" -I"C:\MinGW\lib\gcc\mingw32\4.6.1\include-fixed" -I../CacheSimulator/include -I../include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


