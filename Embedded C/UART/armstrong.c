#include<lpc214x.h>
#include<stdint.h>
#include "functions.h"
#include "pll.h"
#include "uart.h"

int main(){
	char temp, num[4];
	unsigned int i;
	IODIR0 = 0xFFFFFFFF;
	char *str1 = "IS ARMSTRONG";
	char *str2 = "NOT ARMSTRONG";
	init_pll();
	init_uart0();
	while(1){
		i=0;
		temp = receive_char_uart0();
		while(temp != 0xD && i <=3){
			num[i++] = temp;
			temp = receive_char_uart0();
		}
		num[i] = '\0';
	}
	if(isArmstrong(num)){
		transmit_string_uart0(str1);
	}
	else transmit_string_uart0(str2);
	
	return 0;
}
