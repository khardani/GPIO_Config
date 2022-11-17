#include "gpio.h"

void GPIO_Clock_Enable(uint32_t *GPIOx)
{ assert(GPIOx == GPIOA ||GPIOB || GPIOC || GPIOD);
  uint16_t *RCCAHB1 = (uint16_t *)(0x40023830);
   
if  (GPIOx == GPIOA)
{
    *RCCAHB1 |= (1<<0);
}
else if  (GPIOx == GPIOB)
{
    *RCCAHB1 |= (1<<1);
}

else if  (GPIOx == GPIOC)
{
    *RCCAHB1 |= (1<<2);
}
else if (GPIOx == GPIOD)
{
    *RCCAHB1 |= (1<<3);
}
 

  }
void GPIO_Clock_Config(uint32_t *GPIOx, uint8_t pin, uint8_t Mode ,uint8_t Type)
{
   uint32_t *MODER = (uint32_t *)(0x40020c00);
   uint16_t *OTYPER = (uint16_t *)(0x40020c04);

   //pin 0
 if ( pin == PIN0 )
{ *MODER = (*MODER & ~(0x3))| (Mode);
  if(Type == OUTPUT_PUSH_PULL)
   {*OTYPER |= 1 ;}
   else
     { *OTYPER &= ~(1);}
  }
 //pin1
if ( pin == PIN1 )
{ *MODER = (*MODER & ~(0x3<<2))| (Mode<<2);
   if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<1 ;}
    else
     { *OTYPER &= ~(1<<1);}
}
//pin2
if ( pin == PIN2  )
{ *MODER = (*MODER & ~(0x3<<4))| (Mode<<4);
  if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<2 ;}
   else
     { *OTYPER &= ~(1<<2);}
}
   //pin 3
 if ( pin == PIN0 )
{ *MODER = (*MODER & ~(0x3<<6))| (Mode<<6);
  if(Type == OUTPUT_PUSH_PULL)
   {*OTYPER |= 1<<3 ;}
   else
     { *OTYPER &= ~(1<<3);}
  }
 //pin4
if ( pin == PIN4 )
{ *MODER = (*MODER & ~(0x3<<8))| (Mode<<8);
   if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<4 ;}
    else
     { *OTYPER &= ~(1<<4);}
}
//pin5
if ( pin == PIN5  )
{ *MODER = (*MODER & ~(0x3<<10))| (Mode<<10);
  if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<5 ;}
   else
     { *OTYPER &= ~(1<<5);}
}
   //pin 6
 if ( pin == PIN6 )
{ *MODER = (*MODER & ~(0x3<<12))| (Mode<<12);
  if(Type == OUTPUT_PUSH_PULL)
   {*OTYPER |= 1<<6 ;}
   else
     { *OTYPER &= ~(1<<6);}
  }
 //pin7
if ( pin == PIN7 )
{ *MODER = (*MODER & ~(0x3<<14))| (Mode<<14);
   if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<7;}
    else
     { *OTYPER &= ~(1<<7);}
}
//pin8
if ( pin == PIN8  )
{ *MODER = (*MODER & ~(0x3<<16))| (Mode<<16);
  if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<8 ;}
   else
     { *OTYPER &= ~(1<<8);}
}
   //pin 9
 if ( pin == PIN9 )
{ *MODER = (*MODER & ~(0x3<<18))| (Mode<<18);
  if(Type == OUTPUT_PUSH_PULL)
   {*OTYPER |= 1<<9;}
   else
     { *OTYPER &= ~(1<<9);}
  }
 //pin10
if ( pin == PIN10 )
{ *MODER = (*MODER & ~(0x3<<20))| (Mode<<20);
   if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<10 ;}
    else
     { *OTYPER &= ~(1<<10);}
}
//pin11
if ( pin == PIN11  )
{ *MODER = (*MODER & ~(0x3<<22))| (Mode<<22);
  if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<11 ;}
   else
     { *OTYPER &= ~(1<<11);}
}
   //pin12
 if ( pin == PIN0 )
{ *MODER = (*MODER & ~(0x3<<24))| (Mode<<24);
  if(Type == OUTPUT_PUSH_PULL)
   {*OTYPER |= 1<<12 ;}
   else
     { *OTYPER &= ~(1<<12);}
  }
 //pin13
if ( pin == PIN13 )
{ *MODER = (*MODER & ~(0x3<<26))| (Mode<<26);
   if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<13;}
    else
     { *OTYPER &= ~(1<<13);}
}
//pin14
if ( pin == PIN14  )
{ *MODER = (*MODER & ~(0x3<<28))| (Mode<<28);
  if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<14 ;}
   else
     { *OTYPER &= ~(1<<14);}
}
//pin15
if ( pin == PIN15  )
{ *MODER = (*MODER & ~(0x3<<30))| (Mode<<30);
  if(Type == OUTPUT_PUSH_PULL)
   { *OTYPER |= 1<<15 ;}
   else
     { *OTYPER &= ~(1<<15);}
}
}