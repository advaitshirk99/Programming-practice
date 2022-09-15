#include "header.h"
#include<math.h>
#include<stdio.h>

void decimal_to_binary(){

	//Take the decimal number as input from the user
	int decimal_number;
	printf("Please enter the decimal number:\n");
	scanf("%d", &decimal_number);

	long long binary = 0;
  	int remainder, i = 1, buffer;

  	buffer = decimal_number;

  	//Calculate the binary equivalent of the decimal number
  	while (decimal_number!=0) {
  		remainder = decimal_number % 2;
    	decimal_number /= 2;
    	binary += remainder * i;
   		i *= 10;
   	}

   	printf("The binary equivalent of %d is %lld\n", buffer, binary);
}

void binary_to_decimal(){
	
	//Take the binary number as input from the user
	long long binary_number, buffer;
	printf("Please enter the binary number:\n");
	scanf("%lld", &binary_number);

	int i = 0, remainder, decimal = 0;

	buffer = binary_number;

	//Calculate the decimal equivalent of the binary number
  	while (binary_number!=0) {
  		remainder = binary_number % 10;
  		binary_number /= 10;
  		decimal += remainder * pow(2, i);
    	++i;
    }

    printf("The decimal equivalent of %lld is %d\n", buffer, decimal);
}

void select_operation(int choice){

	switch(choice){
		case 1:
		binary_to_decimal();
		break;

		case 2:
		decimal_to_binary();
		break;

		default:
		printf("Incorrect choice\n");
	}

}