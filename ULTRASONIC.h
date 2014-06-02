/*_AIRPRESSURE_H*/
#ifndef _ULTRASONIC_H
#define _ULTRASONIC_H
#include"common.h"
#define Distance_Measuring_TX PTB1_O 
#define Distance_Measuring_RX PTB1_O
#define US_uart_Uartx    UART5 //使用UART5
#define US_uart_BaudRate 9600  //设置波特率9600
#define US_uart_RxPin    PTE9  //接收引脚为PTE9
#define US_uart_TxPin    PTE8  //发送引脚为PTE8

extern UART_InitTypeDef US_UART_init_struct;

extern uint8 Data,Distance;

extern void Init_Utrlasonic(void);
extern uint8 Data_Calculate(uint8 Data1,uint8 Data2);
extern uint8 Distance_Measuring(void);
#endif
