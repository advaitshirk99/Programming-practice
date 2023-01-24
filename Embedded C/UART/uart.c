#include "pll.h"
#include <lpc214x.h>
#include<stdint.h>

char receive_string[20];

void init_uart0(void){
	PINSEL0 = 0x5;	//For Tx and Rx 
	U0LCR = 0x83;		//8-data bits 1 stop bit, disable parity enable dlab
	U0DLL = 0x87;		//baud rate of 9600
	U0DLM = 0x1;
	U0LCR = 0x03;		//clear dlab
}

void transmit_char_uart0(unsigned char c){
	while((U0LSR & (1<<5))==0);
	U0THR = c;
}
	
char receive_char_uart0(void){
	unsigned char temp_rec_var;
	while((U0LSR & (1<<0))==0);         //Checking RDR bit
  	temp_rec_var = U0RBR;
  	return temp_rec_var;
}

char *receive_string_uart0(void){
	uint8_t i =0;
	char c = receive_char_uart0(); 
	while(c != 0xD){
		receive_string[i++] = c;
		c = receive_char_uart0();
	}
	receive_string[i] = '\0';
	return receive_string;
}

void transmit_string_uart0(char *str){
	unsigned int i=0;
	while(str[i] != '\0'){
		transmit_char_uart0(str[i++]);
	}
	unsigned char c = '\n';
	transmit_char_uart0(c);
}
