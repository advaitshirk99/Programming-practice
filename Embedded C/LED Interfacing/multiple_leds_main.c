#include<lpc214x.h>
#include "functions.h"
#define bit(x) (1<<x)

int main(){
	pll_init();
	PINSEL0 = 0x0;
	IODIR = IODIR | (0xF<<16);
	IODIR0 |= (0xF<<16);
	VICIntEnable = bit(1);
	VICIntEnable = bit(3);
	VICVectAddr0 = (unsigned int) increment;
	VICVectCntl0 = bit(5) | 14;
	VICVectAddr1 = (unsigned int) decrement;
	VICVectCntl0 = bit(5) | 15;
	while(1);
	return 0;
}
