#include<stdio.h>
#include "header.h"
#include<stdlib.h>

int main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d", &size);

	//If 0 elements
	if (size == 0){
		printf("Empty array\n");
		exit(1);
	}

	int i, array[size];
	printf("Enter the elements of the array:\n");

	for (i=0; i<size; i++){
		scanf("%d", &array[i]);
	}
	printf("\n");

	int *max, *min;

	max = &array[0];
	min = &array[1];

	find_max_min(array, size, max, min);

	return 0;
}