#include<stdio.h>
#include<stdlib.h>
#include "header.h"

int main(){

	int size1, size2;
	printf("Enter the size of array A and array B respectively:\n");
	scanf("%d\n%d", &size1, &size2);

	int *arr1, *arr2;

	arr1 = get_array(size1);
	arr2 = get_array(size2);


	/*
	Test search (WORKS)
	int status, element;
	printf("Enter element to be found: \n");
	scanf("%d", &element);
	status = search(arr1, element, size1);
	printf("Status: %d\n\n", status);

	//Test insert (WORKS)
	int *arr;
	arr = malloc(10*sizeof(int));
	int next_pos, pos = 8;
	next_pos = insert(arr, 5, pos);
	printf("inserted element: %d\nNext position: %d\n\n",*(arr+8), next_pos);
	*/

	//Testing set_union function (WORKING)
	int *union_array, final_union_size;
	union_array = malloc((size1+size2) * sizeof(int));
	final_union_size = set_union(arr1, size1, arr2, size2, union_array);

	int *intersection_array, final_intersection_size, intersection_size;
	if(size1>size2) intersection_size = size2;
	else intersection_size = size1;

	intersection_array = malloc(intersection_size )

	display_array(arr1, size1);
	display_array(arr2, size2);
	display_array(union_array, final_union_size);

	free(arr1);
	free(arr2);
	//free(arr);
	free(union_array);

	return 0;
}