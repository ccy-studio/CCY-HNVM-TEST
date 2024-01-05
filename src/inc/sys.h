#ifndef __SYS_H
#define __SYS_H

#include <intrins.h>
#include "STC/STC8H.H"
#include "STDIO.H"
#include "STDLIB.H"
#include "STRING.H"

// #define SYS_FOSC 22118400UL  // 22.1184Mhz

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long uint32_t;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint8_t bool;
#define false 0
#define true 1

/*VFD模块的GPIO端口定义*/
#define VFD_EN P13
#define P_STB P14
#define P_CLK P10
#define P_DIN P37

void delay_ms(u32 ms);
void delay_us(u32 us);

/**
 * 初始化GPIO端口
 */
void hal_init_gpio();

#endif