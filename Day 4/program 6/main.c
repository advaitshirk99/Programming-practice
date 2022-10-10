#include<stdio.h>
#include "header.h"

int main(){

	int i, size;
	printf("Enter the size of the array:\n");
	scanf("%d", &size);
	
	int arr[size], num;
	printf("Enter the elements of the array:\n");
	for(i=0; i<size; i++) scanf("%d", &arr[i]);
	
	printf("Enter the number that has to be found:\n");
	scanf("%d", &num);

	int index;
	index = linear_search(arr, size, num);

	printf("The number %d is located at position %d of the given array.\n", num, index);

	return 0;
}
