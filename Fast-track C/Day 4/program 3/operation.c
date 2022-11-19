#include "header.h"
#include<stdio.h>

void find_max_min(int array[], int size, int *max, int *min){

	int i, temp;

	//If only 1 element in the array, return that as both min and max term
	if (size == 1){
		
		*max = array[0];
		*min = array[0];
	}	

	if (array[0] < array[1]){

		temp = *min;
		*min = *max;
		*max = temp;
	}
	
	//Find the min-max pair in the array
	for (i=2; i<size; i++){
		if (array[i] > *max){

			*max = array[i];
		}

		else if (array[i] < *min){

			*min = array[i];
		}
	}

	printf("The max element is:\n%d\nAnd the min element is:\n%d\n", *max, *min);
}