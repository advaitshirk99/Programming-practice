#include<stdio.h>
#include "header.h"

int main(){

	int number, fact;

	printf("Enter the number who's factorial is to be found:\n");
	scanf("%d", &number);

	fact = factorial(number);

	printf("The factorial of %d is %d\n", number, fact);

	return 0;

}