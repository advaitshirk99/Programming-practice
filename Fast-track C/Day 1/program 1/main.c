#include<stdio.h>
#include<assert.h>
#include "header.h"

int main(){

	char c, lowercase;
	printf("Enter a character: \n");
	scanf("%c", &c);

	lowercase = uppercase_to_lowercase(c);

	printf("Lowercase character is: %c \n", lowercase);
}