#include "header.h"

int power(int base,int exponent){
	
	if(exponent!=0) return (base*power(base,exponent-1));
	else return(1);
}