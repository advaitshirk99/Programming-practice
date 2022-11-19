#include<stdio.h>
#include "header.h"

int main(){

	int number;

	printf("Enter the number till which you want prime numbers:\n");
	scanf("%d", &number);

	generate_prime(number);

	return 0;

}