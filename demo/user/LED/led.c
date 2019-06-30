/****************************************************
* Microcontroller: STM32F103
* File: led.c
* Revision: 1.0
* Description: LED API
* Author: ValarHao
* Date: 2017.3.21
****************************************************/
#include "led.h"

static void ProcessLed(void);
Task taskLed = { TRUE, FALSE, 0, ProcessLed };

void InitLed(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);

	GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	LED_G = LED_OFF;
}

static void ProcessLed(void)
{
	TASK_CHECK(taskLed);
	
	LED_G ^= 1;
	
	TASK_WAIT(500);
}
