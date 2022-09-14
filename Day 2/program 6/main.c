#include<stdio.h>
#include "header.h"

int main(){

	int number, sum;

	printf("Enter the number upto which the series of '1' should be added:\n");
	scanf("%d", &number);

	sum = sum_of_series(number);

	printf("The sum of the series is: %d\n", sum);

}