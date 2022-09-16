#include "header.h"
#include<stdio.h>

void swap(int num1, int num2){

	printf("Before swapping:\nx = %d and y = %d\n", num1, num2);
	int temp, *a, *b;

	a = &num1;
	b = &num2;

	temp = *b;
	*b = *a;
	*a = temp; 

	printf("After swapping:\nx = %d and y = %d\n", num1, num2);
}