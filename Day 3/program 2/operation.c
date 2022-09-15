#include "header.h"
#include<stdio.h>

int generate_fibonacci(int number){

	int i;
	//Initializing the first three terms
	int t1 = 0, t2 = 0, t3 = 1;

	//Initializing the next term 
	int next_term = t1 + t2 + t3;

	//Printing the first 3 terms
	printf("Fibonacci series: %d, %d, %d", t1, t2, t3);

	//print the 4th to nth terms
	for(i=4; i<number+1; i++){

		printf(", %d", next_term);
		t1 = t2;
		t2 = t3;
		t3 = next_term;
		next_term = t1 + t2 + t3;
	}

	printf("\n");

	return 0;
}