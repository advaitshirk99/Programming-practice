#include "header.h"

int occurances(int number, int digit){

	int count=0, remainder;

	while (number !=0){

		remainder = number % 10;
		if (remainder == digit) count += 1;
		number /= 10; 

	}

	return count;

}