#include "timer.h"
#include "pll.h"
#include <lpc214x.h>
#define bit(x) 1<<x

int main()
{
	PINSEL0 = 0x00000000;
	IO0DIR = 0xFFFFFFFF;       	// output pin
	init_pll();               	// initialize the pll
	IO0SET = bit(0);						//Pin 0.0
	delay_milliseconds(100);
	IO0CLR = bit(0);
	
	IO0SET = bit(4);						//Pin 0.4
	delay_milliseconds(50);
	IO0CLR = bit(4);	
	
	IO0SET = bit(6);						//Pin 0.6
	delay_microseconds(1);			
	IO0CLR = bit(6);
	
	IO0SET = bit(10);						//Pin 0.A
	delay_microseconds(2);
	IO0CLR = bit(10);
}
