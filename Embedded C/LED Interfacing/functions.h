#include<lpc214x.h>
#define bitx(x) (x<<16)

void millisecond_delay(unsigned int ms){
	T0CTCR = 0x00;
	T0TCR = 0x0;
	T0PR = 59999;
	T0TCR = 0x02;
	T0TCR = 0x01;
	while(T0TC < ms);
	T0TCR = 0x00;
	T0TC = 0;
}

void pll_init(){
	PLL0CON = 0x1;
	PLL0CFG = 0x24;
	PLL0FEED = 0xAA;
	PLL0FEED = 0x55;
	while(!(PLL0STAT & (1<<10)));
	PLL0CON = 0x3;
	PLL0FEED = 0xAA;
	PLL0FEED = 0x55;
	VPBDIV = 0x1;
}

void ledWrite(int a){
	if(a < 16){
		IOSET0 = bitx(a);
		millisecond_delay(10);
		IOCLR0 = bitx(a);
	}
}

__irq void increment(){
	int i;
	for(i=0; i<16; i++){
		ledWrite(i);
	}
	EXTINT |= 0x3;
	VICVectAddr = 0;
}

__irq void decrement(){
	int i;
	for(i=15; i>=0; i--){
		ledWrite(i);
	}
	EXTINT |= 0x3;
	VICVectAddr = 0;
}
