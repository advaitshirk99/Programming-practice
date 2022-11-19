#include<stdio.h>
#include "header.h"

int main(){

	char string[MAX_STRING_LENGTH];
	printf("Enter a string:\n");
	scanf("%s", string);

	int length;
	length = string_length(string);

	printf("The length of the entered string is: %d\n", length);

	return 0;
}
