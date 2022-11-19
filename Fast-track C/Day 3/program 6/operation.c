#include "header.h"

int factorial(int num){
	
	if(num == 0) return 1;

	if(num != 1) return (num * factorial(num-1));

	else return (1);

}