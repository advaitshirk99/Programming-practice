#include "header.h"
#include<stdio.h>

void get_array(int size, int arr[]){
	
	int i;
	printf("Enter the elements of the array:\n");
	for (i=0; i<size; i++){
	
		scanf("%d", &arr[i]);
	}
}

int get_sum(int arr[], int size){

	int i, sum=0; 
	for(i=0; i<size-1; i++){
	
		sum += arr[i]*arr[i+1];
	}

	return sum;
}
