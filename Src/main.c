#include "main.h"
#include "init.h"
#include "i2c.h"
#include "ssd1306.h"
#include "systick.h"
#include "logo_leti_anim_24.h"


int main(void){

    clock_init(CLOCK_PLL);
    i2c_init();

	ssd1306Init();
	ssd1306Clear();

	SysTick_Config(SystemCoreClock/1000);

	for(;;){
		play_leti_rotation(30);
	}
}
