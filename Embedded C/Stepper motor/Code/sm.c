#include <lpc214x.h>
#include <stdint.h>
#include "functions.h"

void clockwise(void){
		IO0PIN = ( (IO0PIN | 0x00080000) & 0xFFF8FFFF );
		delay_ms(20);
		
		IO0PIN = ( (IO0PIN | 0x00040000) & 0xFFF4FFFF );
		delay_ms(20);
		
		IO0PIN = ( (IO0PIN | 0x00020000) & 0xFFF2FFFF );
		delay_ms(20);
		
		IO0PIN = ( (IO0PIN | 0x00010000) & 0xFFF1FFFF );
		delay_ms(20);
	
		IO0PIN = ( (IO0PIN | 0x00080000) & 0xFFF8FFFF );
		delay_ms(20);
}

void anticlockwise(void){
		IO0PIN = ( (IO0PIN | 0x00010000) & 0xFFF1FFFF );
		delay_ms(20);
		
		IO0PIN = ( (IO0PIN | 0x00020000) & 0xFFF2FFFF );
		delay_ms(20);
		
		IO0PIN = ( (IO0PIN | 0x00040000) & 0xFFF4FFFF );
		delay_ms(20);
		
		IO0PIN = ( (IO0PIN | 0x00080000) & 0xFFF8FFFF );
		delay_ms(20);
	
		IO0PIN = ( (IO0PIN | 0x00010000) & 0xFFF1FFFF );
		delay_ms(20);	
}

int main (void){
	init_uart();
	IODIR1 = (IODIR1 | 0xFFFF);
	IO0DIR = (IO0DIR | 0x000F0000);
	char r;
	
	while(1){
		r = receive_char();
		if(r == 'C'){
			IOSET1 = 0xFFFF;
		}
		if(r == 'A'){
			IOCLR1 = 0xFFFF;
		}
		//clockwise();
		//if(r == 'A') anticlockwise();
	}
}