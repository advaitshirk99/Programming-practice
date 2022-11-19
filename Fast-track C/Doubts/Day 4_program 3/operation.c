#include "header.h"

typedef struct min_max {
	int min;
	int max;
} pair;

pair find_max_min(int array[], int size){

	pair minmax;
	int i;

	//If only 1 element in the array, return that as both min and max term
	if (size == 1){
		
		minmax.max = array[0];
		minmax.min = array[0];
	}	

	//If more than 1 element, set 1st element as max and next one as min
	if (array[0] > array[1]){
		
		minmax.max = array[0];
		minmax.min = array[1];
	}
	else{

		minmax.max = array[1];
		minmax.min = array[0];
	}

	//Find the min-max pair in the array
	for (i=2; i<size; i++){
		if (array[i] > minmax.max){

			minmax.max = array[i];
		}

		else if (array[i]<minmax.min){

			minmax.min = array[i];
		}
	}

	return minmax;
}