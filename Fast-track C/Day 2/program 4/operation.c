#include<stdio.h>
#include "header.h"
#include "../program 2/operation.c" //Operation file of 'Reverse a number'

void check_palindrome(int number){

	int reverse; 
	reverse = reverse_number(number);

	if (reverse == number){
		printf("The number %d is a palindrome.\n", number);
	}
	else printf("The number %d is not a palindrome.\n", number);

}