#ifndef __SYS_STM32F030_H
#define __SYS_STM32F030_H

/*------------------------------*
*  include head files           *
*-------------------------------*/
#include "sys_stm.h"
#include "stm32f0xx.h"

/*------------------------------*
*  macros for others            *
*-------------------------------*/
#define   SYSCLK   48

#define   BIT_ADDR(addr, bitnum)   (*((volatile BITS_32 *)addr)).bit##bitnum

#define   GPIOA_ODR_Addr   (GPIOA_BASE + 20)   // 0x48000014
#define   GPIOB_ODR_Addr   (GPIOB_BASE + 20)   // 0x48000414
#define   GPIOC_ODR_Addr   (GPIOC_BASE + 20)   // 0x48000814
#define   GPIOD_ODR_Addr   (GPIOD_BASE + 20)   // 0x48000C14
#define   GPIOE_ODR_Addr   (GPIOE_BASE + 20)   // 0x48001014
#define   GPIOF_ODR_Addr   (GPIOF_BASE + 20)   // 0x48001414

#define   GPIOA_IDR_Addr   (GPIOA_BASE + 16)   // 0x48000010
#define   GPIOB_IDR_Addr   (GPIOB_BASE + 16)   // 0x48000410
#define   GPIOC_IDR_Addr   (GPIOC_BASE + 16)   // 0x48000810
#define   GPIOD_IDR_Addr   (GPIOD_BASE + 16)   // 0x48000C10
#define   GPIOE_IDR_Addr   (GPIOE_BASE + 16)   // 0x48001010
#define   GPIOF_IDR_Addr   (GPIOF_BASE + 16)   // 0x48001410

#define   PAout(n)   BIT_ADDR(GPIOA_ODR_Addr, n)
#define   PAin(n)    BIT_ADDR(GPIOA_IDR_Addr, n)
#define   PBout(n)   BIT_ADDR(GPIOB_ODR_Addr, n)
#define   PBin(n)    BIT_ADDR(GPIOB_IDR_Addr, n)
#define   PCout(n)   BIT_ADDR(GPIOC_ODR_Addr, n)
#define   PCin(n)    BIT_ADDR(GPIOC_IDR_Addr, n)
#define   PDout(n)   BIT_ADDR(GPIOD_ODR_Addr, n)
#define   PDin(n)    BIT_ADDR(GPIOD_IDR_Addr, n)
#define   PEout(n)   BIT_ADDR(GPIOE_ODR_Addr, n)
#define   PEin(n)    BIT_ADDR(GPIOE_IDR_Addr, n)
#define   PFout(n)   BIT_ADDR(GPIOF_ODR_Addr, n)
#define   PFin(n)    BIT_ADDR(GPIOF_IDR_Addr, n)

#define   Hx(val)     *(((char *) &val) + 1)
#define   xH(val)     *((char *) &val)
#define   Hxxx(val)   *(((char *) &val) + 3)
#define   xHxx(val)   *(((char *) &val) + 2)
#define   xxHx(val)   *(((char *) &val) + 1)
#define   xxxH(val)   *((char *) &val)

#define   TICK_1US   (SYSCLK / 8)
#define   LOAD_VAL   TICK_1US * 1000

/*------------------------------*
*  macros for functions         *
*-------------------------------*/
#define   EnableInterrupt()    __ASM volatile("cpsie i")
#define   DisableInterrupt()   __ASM volatile("cpsid i")
#define   NOP()   do { __nop(); __nop(); __nop(); } while (FALSE)

/*------------------------------*
*  type definitions             *
*-------------------------------*/
typedef struct
{
	u8 bit0:  1;
	u8 bit1:  1;
	u8 bit2:  1;
	u8 bit3:  1;
	u8 bit4:  1;
	u8 bit5:  1;
	u8 bit6:  1;
	u8 bit7:  1;
    u8 bit8:  1;
	u8 bit9:  1;
	u8 bit10: 1;
	u8 bit11: 1;
	u8 bit12: 1;
	u8 bit13: 1;
	u8 bit14: 1;
	u8 bit15: 1;
    u8 bit16: 1;
	u8 bit17: 1;
	u8 bit18: 1;
	u8 bit19: 1;
	u8 bit20: 1;
	u8 bit21: 1;
	u8 bit22: 1;
	u8 bit23: 1;
    u8 bit24: 1;
	u8 bit25: 1;
	u8 bit26: 1;
	u8 bit27: 1;
	u8 bit28: 1;
	u8 bit29: 1;
	u8 bit30: 1;
	u8 bit31: 1;
} BITS_32;

#endif
