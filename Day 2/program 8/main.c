#include<stdio.h>
#include "header.h"

int main(){

	int num1, num2;

	printf("Enter the two numbers:\n");
	scanf("%d\n%d", &num1, &num2);

	check_if_amicable(num1, num2);

	return 0;

}