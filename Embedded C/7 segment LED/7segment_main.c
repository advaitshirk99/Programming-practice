#include<lpc214x.h>
#include "LED_7segment.h"

unsigned int arr[] = {0xf3, 0x12, 0x163, 0x133, 0x192, 0x1b1, 0x1f1, 0x13, 0x1f3, 0x1b3};		//Value to activate individual LED of the 7 segment display

int main(){

	PINSEL0 = 0x00000000;				//Defining port0's pins as GPIO pins
	IODIR0 = 0x000001FF;				//Setting pins 0 to 8 of port0 as output
	unsigned int i;
	
	while(1){
	
		for(i=0; i<10; i++){
			IOSET0 |= arr[i];				//Setting the pins high for the corresponding digit
			delay(25);							
			IOCLR0 |= arr[i];				//Setting pins low for the corresponding digit
			delay(2);
		}
	}
	
	return 0;
}
