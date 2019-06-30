/****************************************************
* Microcontroller: STM32F030
* File: main.c
* Revision: 1.0
* Description: Demo
* Author: 
* Date: 2018.9.25
****************************************************/
#include "sys_stm32f030.h"
#include "global.h"
#include "led.h"

int main(void)
{
	sys.Init();
	InitGlobal();
	InitLed();
	
	while (TRUE)
	{
		taskLed.Process();
	}
}
