#include "header.h"
#include<stdio.h>
#include<math.h>

void square_root(){

	int number;
	printf("Enter the number who's square root is to be found:\n");
	scanf("%d", &number);

	printf("The square root of %d is: %lf\n", number, sqrt(number));
}

void natural_log(){

	int number;
	printf("Enter the number who's natural log is to be found:\n");
	scanf("%d", &number);	

	printf("The natural log of %d is: %lf\n", number, log(number));
}

void log_base10(){
	
	int number;
	printf("Enter the number who's log base 10 is to be found:\n");
	scanf("%d", &number);	

	printf("The log base 10 of %d is: %lf\n", number, log10(number));
}

void power(){
	
	int number, exponent;
	printf("Enter the number and the exponent who's power is to be found:\n");
	scanf("%d\n%d", &number, &exponent);	

	printf("The power of %d^%d is: %lf\n", number, exponent, pow(number, exponent));
}

void cosine(){

	int number;
	printf("Enter the radian angle who's cosine is to be found:\n");
	scanf("%d", &number);	

	printf("The cosine of %d radians is: %lf\n", number, cos(number));
}

void select_operation(int choice){

	switch(choice){
		case 1:
		square_root();
		break;

		case 2:
		natural_log();
		break;

		case 3:
		log_base10();
		break;

		case 4:
		power();
		break;

		case 5:
		cosine();
		break;

		default:
		printf("Incorrect choice.\n");
	}
}