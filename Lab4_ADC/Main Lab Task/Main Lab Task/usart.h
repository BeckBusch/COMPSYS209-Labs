#ifndef USART_H_
#define USART_H_

#include <stdint.h>

void usart_init(uint16_t ubrr);
void usart_transmit(uint8_t data);

#endif /* USART_H_ */