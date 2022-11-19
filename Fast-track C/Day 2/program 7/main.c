#include<stdio.h>
#include "header.h"

int main(){

	int number;

	printf("Enter the number for the Armstrong test:\n");
	scanf("%d", &number);

	check_if_armstrong(number);

	return 0;

}