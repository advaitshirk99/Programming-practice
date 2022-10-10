#include<stdio.h>
#include "header.h"

int main(){
	
	char string[1000];
	printf("Enter the string:\n");
	fgets(string, 1000, stdin);

	reverse_string(string);

	return 0;
}
