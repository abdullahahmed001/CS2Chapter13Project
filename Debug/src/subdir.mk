################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArcticAnimal.cpp \
../src/Chapter13Project.cpp 

CPP_DEPS += \
./src/ArcticAnimal.d \
./src/Chapter13Project.d 

OBJS += \
./src/ArcticAnimal.o \
./src/Chapter13Project.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ArcticAnimal.d ./src/ArcticAnimal.o ./src/Chapter13Project.d ./src/Chapter13Project.o

.PHONY: clean-src

