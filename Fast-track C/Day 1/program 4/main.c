#include<stdio.h>
#include "header.h"

int main(){

	float f, c;

	printf("Enter temperature in Fahrenheit:\n");
	scanf("%f", &f);
	c = fahrenheit_to_celcius(f);
	printf("The temperature in Celcius is: %.2f C\n", c);

	printf("Enter temperature in Celcius:\n");
	scanf("%f", &c);
	c = celcius_to_fahrenheit(f);
	printf("The temperature in Fahrenheit is: %.2f F\n", f);

	return 0;
}