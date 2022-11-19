#include "header.h"
#include "../program 6/operation.c" //Factorial function
#include<math.h>

float series(float x, int n){

	float sum=0;
	int i;

	//Starts with exponent as 1, and increments by 2
	for(i=1; i<n; i +=2){

		sum += (pow(x, i)/factorial(i));

	}

	return sum;
}
