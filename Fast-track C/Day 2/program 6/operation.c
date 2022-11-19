#include "header.h"

int generate_number(int size){

	int i, num=0;
	
	for (i=0; i<size; i++){

		num = (num * 10) + 1;

	}

	return num;

}

int sum_of_series(int num){

	int i, number, sum=0;

	for (i=0; i<num; i++){

		number = generate_number(i+1);
		sum += number;

	}

	return sum;

}