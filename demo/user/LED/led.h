#ifndef __LED_H
#define __LED_H	 

/*------------------------------*
*  include head files           *
*-------------------------------*/
#include "sys_stm32f030.h"

/*------------------------------*
*  macros for configurations    *
*-------------------------------*/
#define   LED_ON    LOW
#define   LED_OFF   HIGH

#define   LED_G   PAout(4)

/*------------------------------*
*  public variables             *
*-------------------------------*/
extern Task taskLed;

/*------------------------------*
*  public functions             *
*-------------------------------*/
extern void InitLed(void);

#endif
