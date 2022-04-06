#ifndef _HAL_SYSTEM_H
#define _HAL_SYSTEM_H

// Define the CPU family and type.
#if !defined(STM32F7) && !defined(STM32F4)
	#error "Define CPU family! Either STM32F7 or STM32F4"
#endif
#if !defined(STM32F746xx) && !defined(STM32F746xx)
	#error "Define CPU type! Either STM32F746xx or STM32F746xx"
#endif

#ifdef STM32F746xx

// Include LL and HAL include files.
#include "stm32f7xx.h"
#include "stm32f7xx_ll_bus.h"
#include "stm32f7xx_ll_rcc.h"
#include "stm32f7xx_ll_system.h"
#include "stm32f7xx_ll_utils.h"
#include "stm32f7xx_ll_pwr.h"
#include "stm32f7xx_ll_exti.h"
#include "stm32f7xx_ll_gpio.h"
#include "stm32f7xx_ll_adc.h"
#include "stm32f7xx_ll_cortex.h"
#include "stm32f7xx_ll_crc.h"
#include "stm32f7xx_ll_dac.h"
#include "stm32f7xx_ll_dma.h"
#include "stm32f7xx_ll_dma2d.h"
#include "stm32f7xx_ll_i2c.h"
#include "stm32f7xx_ll_iwdg.h"
#include "stm32f7xx_ll_rtc.h"
#include "stm32f7xx_ll_spi.h"
#include "stm32f7xx_ll_tim.h"
#include "stm32f7xx_ll_usart.h"
#include "stm32f7xx_ll_wwdg.h"
#include "stm32f7xx_ll_rng.h"
#include "stm32f7xx_ll_lptim.h"
#include "stm32f7xx_hal.h"

#else

// Include LL and HAL include files.
#include "stm32f7xx.h"
#include "stm32f7xx_ll_bus.h"
#include "stm32f7xx_ll_rcc.h"
#include "stm32f7xx_ll_system.h"
#include "stm32f7xx_ll_utils.h"
#include "stm32f7xx_ll_pwr.h"
#include "stm32f7xx_ll_exti.h"
#include "stm32f7xx_ll_gpio.h"
#include "stm32f7xx_ll_adc.h"
#include "stm32f7xx_ll_cortex.h"
#include "stm32f7xx_ll_crc.h"
#include "stm32f7xx_ll_dac.h"
#include "stm32f7xx_ll_dma.h"
#include "stm32f7xx_ll_dma2d.h"
#include "stm32f7xx_ll_i2c.h"
#include "stm32f7xx_ll_iwdg.h"
#include "stm32f7xx_ll_rtc.h"
#include "stm32f7xx_ll_spi.h"
#include "stm32f7xx_ll_tim.h"
#include "stm32f7xx_ll_usart.h"
#include "stm32f7xx_ll_wwdg.h"
#include "stm32f7xx_ll_rng.h"
#include "stm32f7xx_ll_lptim.h"
#include "stm32f7xx_hal.h"

#endif



// Common HAL functions.
HAL_StatusTypeDef HAL_SystemInit(void);
void MPU_Config(void);
void CPU_CACHE_Enable(void);

void HAL_EthDelay(uint32_t delay);

#endif /* _HAL_SYSTEM_H */
