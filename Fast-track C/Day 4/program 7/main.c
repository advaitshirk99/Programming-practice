#include<stdio.h>
#include "header.h"

int main(){

	int size;
	printf("Enter the size of the sorted array\n");
	scanf("%d", &size);

	int i, arr[size], low, high;
	printf("Enter the elements of the sorted array:\n");
	for(i=0; i<size; i++) scanf("%d", &arr[i]);
	low = 0;
	high = size-1;

	int element_to_be_found, index;
	printf("Enter the element to be found:\n");
	scanf("%d", &element_to_be_found);
	
	
	index = binary_search(arr, element_to_be_found, low, high);

	printf("The element %d is on the index %d.\n", element_to_be_found, index);

	return 0;	
}
