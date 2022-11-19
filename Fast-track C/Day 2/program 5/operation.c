#include<stdio.h>
#include "header.h"

void generate_prime(int num){

	int i,j;
	
	for(i=2;i<=num;i++){
		
		int c=0;

	    for(j=1;j<=i;j++){

	    	if(i%j==0){
	    		c++;
	            }
	        }
	         
	       	if(c==2){
	            printf("%d ",i);
        	}
        	else if (c==1){
        		printf("\n");
        	}
	}
	
	printf("\n");
}