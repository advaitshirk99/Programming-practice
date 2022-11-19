#include<stdio.h>
#include "header.h"

int main(){

	char string[1000];
	printf("Enter the string:\n");
	fgets(string, 1000, stdin);

	printf("The converted string with all uppercase characters is:\n");
	lower_to_upper(string);

	return 0;
}
