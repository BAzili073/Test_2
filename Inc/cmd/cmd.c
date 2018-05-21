/*
 * cmd.c
 *
 *  Created on: 18 мая 2018 г.
 *      Author: user
 */

#include "cmd.h"

#define CMD_UART USART1
char cmd;
void cmdInitUART()
{
	CMD_UART -> CR1 |= USART_CR1_UE;
	CMD_UART -> ISR |= USART_ISR_RXNE;
}

//void cmdIncomingData()
//{
//	if (UART_STR->buffSize){
//			UART_STR->buff[UART_STR->curr_cnt] =  UART_STR->UART->DR;
//			UART_STR->curr_cnt++;
//			if (UART_STR->curr_cnt == UART_STR->buffSize) UART_STR->curr_cnt = 0;
//		}else{
//			UART_STR->UART -> DR;
//		}
//		UART_STR->UART->SR &= ~(USART_SR_RXNE | USART_SR_ORE);
//}



