#include<lpc214x.h>
#include<stdint.h>
#include "pll.h"
#include "timer.h"

int main(){
	init_pll();
	uint16_t value;
	PINSEL1 = 0x00080000; //P0.25 for DAC
	IODIR0 = 0xFFFFF0FF;
	while(1){
		if(!(IOPIN0 & (1<<8))){ 	//Sq wave
			value = 1023;
			DACR = ((1<<16) | (value<<6));
			delay_milliseconds(20);
			value = 0;
			DACR = (1<<16) | (value<<6);
			delay_milliseconds(20);
		}
		else if(!(IOPIN0 & (1<<9))){
			value = 0;
			while(value != 1023){
				DACR = (1<<16) | (value<<6);
				value++;
			}
		}
		else if(!(IOPIN0 & (1<<10))){
			value = 0;
			while(value != 1023){
				DACR = (1<<16) | (value<<6);
				value++;
			}
			while(value != 0){
				DACR = (1<<16) | (value<<6);
				value--;
			}
		}
		else{
			value = 1023;
			DACR = (1<<16) | (value<<6);
		}
	}	
}