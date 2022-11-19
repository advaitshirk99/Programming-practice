#include "header.h"
#include<stdio.h>

int main(){

	int choice;

	printf("Please enter the number as per your desired conversion:\n \
1 -> Binary number to Decimal number\n \
2 -> Decimal number to Binary number\n");
	scanf("%d", &choice);

	select_operation(choice);

	return 0;
}