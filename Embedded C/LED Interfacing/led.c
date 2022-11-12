#include "led.h"

void delay(unsigned int k){
	
	unsigned int i;
	unsigned int j;
	
	for(i=k; i>0; i--){
		for(j=0; j<3000; j++);
	}
}
