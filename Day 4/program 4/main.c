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

	display_array(arr1, size1);
	display_array(arr2, size2);

	free(arr1);
	free(arr2);

	return 0;
}