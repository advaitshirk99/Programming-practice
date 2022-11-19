#include "header.h"
#include<stdio.h>

void generate_pattern(int num){

	int i, j, k;

   	for (i = 1; i <= num; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= num; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  

}