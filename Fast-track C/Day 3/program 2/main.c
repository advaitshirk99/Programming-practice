#include<stdio.h>
#include "header.h"

int main(){

	int num;

	//Get the number of terms from the user
	printf("Enter the number of terms: \n");
	scanf("%d", &num);

	generate_fibonacci(num);

	return 0;

}