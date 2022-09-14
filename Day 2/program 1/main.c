#include<stdio.h>
#include "header.h"

int main(){

	int num, result;

	printf("Enter the number:\n");
	scanf("%d", &num);

	result = sum_of_digits(num);

	printf("The sum of the digits is %d.\n", result); 

	return 0;
}