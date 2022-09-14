#include<stdio.h>
#include "header.h"

int main(){

	int number, check;

	printf("Enter a number: \n");
	scanf("%d", &number);

	even_or_odd(number);

	return 0;
}