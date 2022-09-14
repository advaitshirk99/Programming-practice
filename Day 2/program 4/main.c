#include<stdio.h>
#include "header.h"

int main(){

	int number;

	printf("Enter the number to be checked:\n");
	scanf("%d", &number);

	check_palindrome(number);

	return 0;

}