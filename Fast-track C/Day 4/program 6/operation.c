#include<stdio.h>
#include "header.h"

int linear_search(int arr[], int size, int num){

	int i;

	for (i=0; i<size; i++){
	
		if (num == arr[i]) return i;
	}
}
