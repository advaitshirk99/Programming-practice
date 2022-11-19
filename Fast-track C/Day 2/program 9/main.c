#include<stdio.h>
#include "header.h"

int main(){

	int num1, num2;
	printf("Enter the two numbers to find sum, difference, product \n");
	scanf("%d\n%d", &num1, &num2);
	
	int option;

	printf("Enter the number \n 1 -> to find sum \n 2 -> to find difference \n 3 -> to find the product \n ");
	scanf("%d", &option);

	operate(option, num1, num2);

}