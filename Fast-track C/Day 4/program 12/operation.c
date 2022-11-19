#include<stdio.h>
#include "header.h"

void reverse_string(char arr[]){
	
	int i, j, l=0;
	for(i=0; arr[i] != '\0'; i++){
			
		l++;
	}
	for(j=l; j>=0; j--){
		printf("%c", arr[j]); 		
	}
	printf("\n");
}
