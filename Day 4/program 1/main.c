#include<stdio.h>
#include "header.h"

int main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d", &size);

	int *unsorted_array;
	int arr[size]; 

	unsorted_array = input_data(arr, size);

	printf("Enter the number:\n\
1 -> To sort the array in descending order.\n\
2 -> To sort the array in ascending order.\n");

	int choice, *sorted_array;
	scanf("%d", &choice);

	sorted_array = select_operation(choice, unsorted_array, size);

	display_array(sorted_array, size);

	return 0;
}