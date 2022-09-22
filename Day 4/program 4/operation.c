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
int search(int *arr, int element, int size, int *position){

	int i;
	
	for(i=0; i<size; i++){

		if(*(arr+i) == element){
			*position = i;
			return 1;
		}
	}
	return 0;
}

/*Function to insert an element in the array*/
int insert(int *arr, int element, int position){

	*(arr+position) = element;
	return position +=1;

}

/*Function to find the union of two arrays*/
int *set_union(int *arr1, int size1, int *arr2, int size2){

	int i=0, *union_array, element_position=0, *search_position;
	int union_size = size1 + size2;

	search_position = malloc(sizeof(int));
	union_array = malloc(union_size * sizeof(int));

	for(i=0; i<size1; i++){

		//arr1 will be bigger than arr2 (will be handled in main)
		if (!search(union_array, *(arr1+i), union_size, search_position)){

			if(!search(arr2, *(arr1+i), size2, search_position)){

				element_position = insert(union_array, *(arr1+i), element_position);
				printf("unique element position in array:%d\n", element_position);
				element_position = insert(union_array, *(arr2+(*search_position)),*search_position);
				printf("unique element position in array:%d\n", element_position);

			}
		}
	}

	//final_array = (int *)realloc(union_array, sizeof(int) * (position+1));
	return union_array;
}