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

	int i;
	
	for(i=0; i<size; i++){
		if(*(arr+i) == element){
			return 1;
		}
	}

	return 0;
}

int insert(int *arr, int element, int position){

	*(arr+position) = element;
	return position +=1;

}

int *set_union(int *arr1, int size1, int *arr2, int size2){

	int i=0, j=0, *union_array, *final_array, position=0;
	int union_size = size1 + size2;

	union_array = malloc(union_size * sizeof(int));

	while(i != size1){ //assuming that size1 is bigger (Can be checked in the main)
		if (!search(arr2, *(arr1+i), size2) && !search(union_array, *(arr1+i), union_size) && !search(union_array, *(arr2+j), union_size)){
			position += insert(union_array, *(arr1+i), position);
			position += insert(union_array, *(arr2+j), position);
		}
		else{
			i++;
			j++;
		}
	}

	final_array = (int *)realloc(union_array, sizeof(int) * (position+1));

	return final_array;
}