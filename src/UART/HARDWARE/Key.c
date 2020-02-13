#include "stm32f0xx.h"
#include "delay.h"
void KeyInit(void)
{
  GPIO_InitTypeDef  GPIO_InitStructure;
  
  /* 使能GPIOB时钟 */
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);

  /* 配置LED相应引脚PB1*/
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);

}
unsigned char GetKeyVal(void)
{
	 unsigned char ucTmp;
	 
	 ucTmp = GPIOA->IDR & 0x3f;
   if(ucTmp != 0x3f){
		  delay_ms(20);
			ucTmp = GPIOA->IDR & 0x3f;
			if(ucTmp != 0x3f){
	      if( ucTmp == 0x00){ return 1;}
	      if( ucTmp == 0x02){ return 2;}
	      if( ucTmp == 0x04){ return 3;}
	      if( ucTmp == 0x08){ return 4;}
	      if( ucTmp == 0x10){ return 5;}
	      if( ucTmp == 0x20){ return 6;}
		  }
   }

}