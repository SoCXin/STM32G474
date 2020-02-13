#include "stm32f0xx.h"
#include "delay.h"
#include "led.h"
#include "USART1.h"
#include "Key.h"

void KeyInit(void);
void GetKeyVal(void);

int main(void)
{
  delay_init();
  LED_Init();
	KeyInit();
  USART1_Init(115200);	
	printf("STM32F030F4P6 USART QITAS\r\n");
  while (1)
  {	
    GetKeyVal();		
	  delay_ms(500);
    LED_TURN;   	//LED·­×ª
  } 
}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t* file, uint32_t line)
{

  while (1)
  {
  }
}
#endif

/**********END OF FILE****/
