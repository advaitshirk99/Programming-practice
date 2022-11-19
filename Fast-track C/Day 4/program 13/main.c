#include<stdio.h>
#include "header.h"

int main(){
	
	int arr[5][5];
	printf("Enter the elements of the 5x5 matrix:\n\n");
	
	construct_matrix(arr);
	display_matrix(arr);

	return 0;
}
