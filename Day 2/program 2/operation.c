#include "header.h"

int reverse_number(int number){

	int remainder, reverse=0;

	while (number != 0){

		remainder = number % 10;
		reverse	= (reverse * 10) + remainder;
		number /= 10;

	}

	return reverse;

}