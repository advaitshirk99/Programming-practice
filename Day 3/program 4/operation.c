#include "header.h"
#include "../../Day 2/program 1/operation.c"
#include<stdio.h>

void multiple_of_seven(){

	int i, digit_sum;

	for (i=MIN; i<MAX; i++){
		
		digit_sum = sum_of_digits(i);
		if ((digit_sum % 7) == 0){
			printf("%d, ",i);
		}
	}	

	printf("\n");
}