#include "header.h"
#include<stdio.h>

int main(){

	int number;

	printf("Enter the number of rows for the pattern:\n");
	scanf("%d", &number);

	generate_pattern(number);

	return 0;
}