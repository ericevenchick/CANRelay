################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Lib/mc9s08dz32.c" \

C_SRCS += \
../Lib/mc9s08dz32.c \

OBJS += \
./Lib/mc9s08dz32_c.obj \

OBJS_QUOTED += \
"./Lib/mc9s08dz32_c.obj" \

C_DEPS += \
./Lib/mc9s08dz32_c.d \

C_DEPS_QUOTED += \
"./Lib/mc9s08dz32_c.d" \

OBJS_OS_FORMAT += \
./Lib/mc9s08dz32_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Lib/mc9s08dz32_c.obj: ../Lib/mc9s08dz32.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/mc9s08dz32.args" -ObjN="Lib/mc9s08dz32_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/%.d: ../Lib/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


