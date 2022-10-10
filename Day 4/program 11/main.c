#include<stdio.h>
#include "header.h"

int main(){

	char string[1000];
	printf("Enter the string:\n");
	scanf("%s", string);

	printf("The converted string with all uppercase characters is:\n");
	lower_to_upper(string);

	return 0;
}
