#include<stdio.h>
#include "header.h"

int main(){

	int base, exponent, result;

	printf("Enter the base and exponent:\n");
	scanf("%d\n%d", &base, &exponent);

	result = power(base, exponent);

	printf("%d^%d is: %d\n", base, exponent, result);

	return 0;

}