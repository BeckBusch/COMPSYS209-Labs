#ifndef TIMER0_H_
#define TIMER0_H_

#include <stdint.h>

//Initialize timer0 as per Part 1
void timer0_init(uint8_t prescale);

//Using polling check if timer0 has reached comparison value
//if so, it will clear the compare flag and return 1
//otherwise, it returns 0
uint8_t timer0_check_clear_compare();

#endif