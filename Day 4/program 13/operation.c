#include<stdio.h>
#include "header.h"

void construct_matrix(int arr[][5]){
	
	int i, j;
	for(i=0; i<5; i++){
	
		printf("Enter the elements of the Row%d:\n", i+1);
		
		for(j=0; j<5; j++){
		
			scanf("%d", &arr[i][j]);
		}
	}
}

void display_matrix(int arr[][5]){

	int i, j;
	printf("\nThe 5x5 matrix is:\n\n");

	for(i=0; i<5; i++){
	
		for(j=0; j<5; j++){
		
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
