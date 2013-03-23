################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/MCUinit.c" \
"../Sources/can.c" \
"../Sources/main.c" \
"../Sources/relay.c" \

C_SRCS += \
../Sources/MCUinit.c \
../Sources/can.c \
../Sources/main.c \
../Sources/relay.c \

OBJS += \
./Sources/MCUinit_c.obj \
./Sources/can_c.obj \
./Sources/main_c.obj \
./Sources/relay_c.obj \

OBJS_QUOTED += \
"./Sources/MCUinit_c.obj" \
"./Sources/can_c.obj" \
"./Sources/main_c.obj" \
"./Sources/relay_c.obj" \

C_DEPS += \
./Sources/MCUinit_c.d \
./Sources/can_c.d \
./Sources/main_c.d \
./Sources/relay_c.d \

C_DEPS_QUOTED += \
"./Sources/MCUinit_c.d" \
"./Sources/can_c.d" \
"./Sources/main_c.d" \
"./Sources/relay_c.d" \

OBJS_OS_FORMAT += \
./Sources/MCUinit_c.obj \
./Sources/can_c.obj \
./Sources/main_c.obj \
./Sources/relay_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/MCUinit_c.obj: ../Sources/MCUinit.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/MCUinit.args" -ObjN="Sources/MCUinit_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/can_c.obj: ../Sources/can.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/can.args" -ObjN="Sources/can_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/main.args" -ObjN="Sources/main_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/relay_c.obj: ../Sources/relay.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/relay.args" -ObjN="Sources/relay_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '


