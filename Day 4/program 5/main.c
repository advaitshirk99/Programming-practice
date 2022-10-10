#include<stdio.h>
#include "header.h"

int main(){

	printf("Enter the 10 elements of the array:\n");
	int i, j, arr[10], size =10;

	for(i=0; i<size; i++){
		
		scanf("%d", &arr[i]);
	}

	int new_size = remove_duplicates(arr, size);
	
	printf("The new array without duplicates is:\n");
	for(j=0; j<new_size; j++){
	
		printf("%d ", arr[j]);
	}

	return 0;
}
