#include<lpc214x.h>
#include<stdio.h>
#include "led.h"

int main(){

	PINSEL0 = 0x00000000;					//Defining Port0's 16 to 31 pins as GPIO pins
	IODIR0 = 0x0FFF0000;					//Setting pins 16 to 31 as output pins
	IOPIN0 = 0x00000000;					//Setting pins 16 to 31 as 0
	PINSEL1 = 0x00000000;					//Defining Port1's 16 to 31 
	IODIR1 = 0x00000000;					//Setting port1's pins 16 to 31 as input pins
	
	while(1){
		if(IOPIN1 & 0x00010000){
			IOCLR0 = 0x0FFF0000;				//Setting pins of 16 - 23 low
		}
		else{
			IOSET0 = 0x0FFF0000;				//Setting pins 16 - 23 high
		}
	}
}
