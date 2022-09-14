#include<stdio.h>
#include "header.h"

int main(){

	int number, reverse;

	printf("Enter a number:\n");
	scanf("%d", &number);

	reverse = reverse_number(number);

	printf("The reverse of %d is %d.\n", number, reverse);

}