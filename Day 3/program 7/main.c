#include<stdio.h>
#include "header.h"

int main(){

	float x, result;
	int terms;

	printf("Enter the value of x and the number of terms:\n");
	scanf("%f\n%d", &x, &terms);

	result = series(x, terms);

	printf("The value of the sum of the series of %d terms with value of x = %.3f is: %.4f\n", terms, x, result);

	return 0;

}