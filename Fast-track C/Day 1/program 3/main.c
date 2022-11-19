#include<stdio.h>
#include "header.h"

int main(){

	float principal, rate_of_interest, si, ci;
	int time, compounding_frequency; 

	printf("Enter the principal amount:\n");
	scanf("%f", &principal);

    printf("Enter the rate of interest:\n");
	scanf("%f", &rate_of_interest);
	
	printf("Enter the time (in years):\n");
	scanf("%d", &time);
	
	printf("Enter the compounding frequency:\n");
	scanf("%d", &compounding_frequency);

	si = simple_interest(principal, rate_of_interest, time);
	ci = compound_interest(principal, rate_of_interest, time, compounding_frequency);

	printf("The simple interest is = %.2f \nThe compound interest is = %.2f \n", si, ci);

}