#include "header.h"
#include<stdio.h>

int *sort_descending(int *arr, int size){

	int i, j, temp;

	for (i=0; i<size; i++){

		for (j=i+1; j<size; j++){

			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return arr;
}

int *sort_ascending(int *arr,int size){

	int i, j, temp;

	for (i=0; i<size; i++){

		for (j=i+1; j<size; j++){

			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return arr;
}

int *input_data(int *arr, int size){

	int i; 

	printf("Enter the elements of the array\n");
	for (i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}

	return arr;
}

void display_array(int *arr, int size){

	int i;
	printf("The sorted array is:\n");
	for(i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

int *select_operation(int choice, int *arr, int size){

	switch(choice){

		case 1:
		return sort_descending(arr, size);
		break;

		case 2:
		return sort_ascending(arr, size);

		default:
		printf ("Incorrect choice\n");
	}
}