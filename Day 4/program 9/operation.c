#include<stdio.h>
#include "header.h"

int string_length(char arr[]){
	
	int i, count=0;
	
	for(i=0; arr[i] != '\0'; i++){
		count++;
	}

	return count;
}
