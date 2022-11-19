#include "header.h"
#include<stdio.h>

int main(){

	int number, result;

	printf("Enter the number who's square is to be found:\n");
	scanf("%d", &number);

	result = square(number);

	printf("The square of %d is: %d\n", number, result);

	return 0;
}