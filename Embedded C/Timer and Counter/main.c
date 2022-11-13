#include "timer.h"
#include "pll.h"
#include <lpc214x.h>

int main()
{
	IO0DIR = 0xFFFFFFFF;       // output pin
	init_pll();                // initialize the pll
	IO0SET = 0xFFFFFFFF;
	delay_milliseconds(10);
	IO0CLR = 0xFFFFFFFF;
	delay_milliseconds(10);
}
