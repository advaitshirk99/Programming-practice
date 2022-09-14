#include "header.h"

int sum_of_digits(int number){

	int sum=0, remainder;

	while (remainder != 0){

		remainder = number % 10;
		number = number/10; 
		sum += remainder;

	}

	return sum;
}