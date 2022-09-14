#include<math.h>
#include<stdio.h>
#include "header.h"

void check_if_armstrong(int number){

	int remainder, buffer, sum=0;

	buffer = number;

	while(number != 0){

		remainder = number % 10;
		sum += pow(remainder, 3);
		number /= 10;

	}

	if(sum == buffer){
		printf("%d is an Armstrong number.\n",buffer);
	}
	else printf("%d is not an Armstrong number.\n", buffer);
}