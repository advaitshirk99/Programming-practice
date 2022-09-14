#include<stdio.h>
#include "header.h"

int main(){

	int index;
	int result;

	printf("Enter the index: \n");
	scanf("%d", &index);

	result = left_shift(index);

	printf("The power of 2^%d is %.2d \n", index, result);

}