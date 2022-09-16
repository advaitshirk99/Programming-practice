#include<stdio.h>
#include "header.h"
#include "../program 1/operation.c"

typedef struct min_max {
	int min;
	int max;
} pair;

int main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d", &size);

	int i, array[size];
	printf("Enter the elements of the array:\n");

	for (i=0; i<size; i++){
		scanf("%d", array[i]);
	}
	printf("\n");

	pair minmax = find_min_max(array, size);

	printf("The max element is:\n%d\nAnd the min element is:\n%d\n", minmax.max, minmax.min);

	return 0;
}