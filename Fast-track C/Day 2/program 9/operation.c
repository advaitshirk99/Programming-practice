#include "header.h"
#include<string.h>
#include<stdio.h>

void operate(int option, int num1, int num2){

	switch(option){
		case 1:
			printf("The sum of the two numbers is %d \n", num1+num2);
			break;

		case 2:
	 		printf("The difference of the two numbers is %d \n", num1-num2);
	 		break;

		case 3:
	 		printf("The product of the two numbers is %d \n",num1*num2);
	 		break;

		default: printf("You have entered the wrong character\n");
		
	}
}