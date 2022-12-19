#include<lpc214x.h>
#include<stdint.h>

void init_uart(void){

	PINSEL0 = 0x5;	
	U0LCR = 0x83;		
	U0DLL = 0x83;		
	U0DLM = 0x01;
	U0LCR = 0x03;		
}

char receive_char(void){
	
	char a;
	while((U0LSR & (1<<0))==0);         
  a = U0RBR;
  return a;
}

void transmit_char(char a){

	while((U0LSR & (1<<5))==0);
	U0THR = a;
}

void delay_ms(uint16_t j){
    uint16_t x,i;
	for(i=0;i<j;i++){
    for(x=0; x<6000; x++);    
	}
}