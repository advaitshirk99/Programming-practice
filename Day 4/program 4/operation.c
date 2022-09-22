#include<stdio.h>
#include<stdlib.h>
#include "header.h"

int *get_array(int size){

	int i, *arr;
	arr = malloc(size * sizeof(int));

	printf("Enter the elements of the array:\n");
	for (i=0; i<size; i++){
		scanf("%d", arr+i);
	}

	return arr;
}

void display_array(int *arr, int size){

	int i;
	printf("The array is:\n");
	for (i=0; i<size; i++) printf("%d ", *(arr+i));
	printf("\n");
}

int search(int *arr, int element, int size){

	int i=0, found = 0;
	
	while (found != 1){
		
		if(*(arr+i) == element){

			return 1;
		}

		else if (size ==i) return 0;
		
		else i++;
	}
}

int insert(int *arr, int element, int position);
int *set_union(int *arr1, int size1, int *arr2, int size2){

	
	int i, j, *union_array;

}