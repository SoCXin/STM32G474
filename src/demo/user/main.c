/****************************************************
* Microcontroller: STM32F030
* File: main.c
* Revision: 1.0
* Description: 
* Author: qitas
* Date: 
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
