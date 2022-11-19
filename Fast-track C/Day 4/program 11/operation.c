#include<stdio.h>
#include "header.h"
#include<ctype.h>

void lower_to_upper(char string[]){

	int i;
	for(i=0; string[i] != '\0'; i++){
		
		if(string[i] >= 'a' && string[i] <= 'z'){
		
			string[i] = string[i] - 32;
		}
	}
	printf("%s\n", string);	
}
