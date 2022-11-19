#include<stdio.h>
#include "header.h"

int main(){

	int number, digit, occurance;

	printf("Enter the number, and the digit to be checked respectively:\n");
	scanf("%d\n%d", &number, &digit);

	occurance = occurances(number, digit);

	printf("Occurance of the digit %d in the number %d: %d.\n", digit, number, occurance);

	return 0;

}
