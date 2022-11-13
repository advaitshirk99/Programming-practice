#include "pll.h"
#include "uart.h"
#include<lpc214x.h>

int main(){
	
	unsigned char temp;
	init_pll();
	init_uart0();
	while(1){
		
		temp = receive_char_uart0();
		transmit_char_uart0(temp);
	}
}
