#include<stdio.h>
#include<stdlib.h>
#include "header.h"

/*Function to get the elements of the array*/
int *get_array(int size){

	int i, *arr;
	arr = malloc(size * sizeof(int));

	printf("Enter the elements of the array:\n");
	for (i=0; i<size; i++){
		scanf("%d", arr+i);
	}

	return arr;
}

/*Function to display the elements of the array*/
void display_array(int *arr, int size){

	int i;
	printf("The array is:\n");
	for (i=0; i<size; i++) printf("%d ", *(arr+i));
	printf("\n");
}

/*Function to search an element in an array and if found, update the position where it is located*/
int search(int *arr, int element, int size){ //no need of position

	int i;
	
	for(i=0; i<size; i++){

		if(*(arr+i) == element){
			return 1;
		}
	}
	return 0;
}

/*Function to insert an element in the array*/
int insert(int *arr, int element, int position){ //check if position is req

	*(arr+position) = element;
	return position +=1;

}

/*Function to find the union of two arrays*/
int *set_union(int *arr1, int size1, int *arr2, int size2){

	int i;

	for(i=0; i<size1; i++){
		if(!search(union_array, *() ))
	}

	//final_array = (int *)realloc(union_array, sizeof(int) * (position+1));
	return union_array;
}