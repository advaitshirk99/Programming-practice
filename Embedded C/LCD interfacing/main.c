#include<lpc214x.h>
#include<stdint.h>
#include<stdio.h>
#include "lcd.h"

int main(){

	uint8_t i=0;
	char val_i[3];
	init();
	display_string("Hello!");
	cmd(0xC0);
	display_string("Value of i: ");
	for(i=0; i<10; i++){
	
		sprintf(val_i, "%d", i);
		display_string(val_i);
		delay(20);
		cmd(0xCC);
	}
	return 0;
}
