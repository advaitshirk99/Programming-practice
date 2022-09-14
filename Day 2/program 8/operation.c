#include<stdio.h>
#include "header.h"

int sum_of_divisors(int num){

	int i, sum=0;

	for (i=1; i<num; i++){

		if (num % i == 0){
			sum += i;
		}

	}

	return sum;

}

void check_if_amicable(int num1, int num2){

	int sum1, sum2;

	sum1 = sum_of_divisors(num1);
	sum2 = sum_of_divisors(num2);

	if (sum1 == num2 && sum2 == num1){
		printf("%d and %d are amicable numbers.\n",num1, num2);
	}

	else printf("%d and %d are not amicable numbers.\n",num1, num2);

}