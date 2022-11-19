#include "header.h"
#include<stdio.h>

int main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d", &size);
	
	int sum, arr[size];
	get_array(size, arr);

	sum = get_sum(arr, size);
	printf("The sum of product of consecutive numbers is: %d\n", sum);

	return 0;
}
