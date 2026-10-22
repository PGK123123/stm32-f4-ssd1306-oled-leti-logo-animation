#include "systick.h"

volatile uint32_t ms_counter = 0;



void SysTick_Handler() {
    ms_counter++;
}


void delay_ms(uint32_t time){
	uint32_t start = get_ticks();
	while ((get_ticks() - start) < time);
}


uint32_t get_ticks() {
    return ms_counter;
}
