/**
  ******************************************************************************
  * @file    main.c
  * @author  KHARDANI MAjdi
  * @brief   GGPIO_DRIVER
  * @version V1.0.0
  * @date    15-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
 #include "stm32f4xx.h"
#include "gpio.h"





int main()
{ 
 GPIO_Clock_Enable(GPIOD); 
 GPIO_Clock_Config(GPIOD,PIN12, OUTPUT,OUTPUT_OPEN_DRAIN);
}




/**************************************END OF FILE**************************************/
