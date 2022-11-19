#include<stdio.h>
#include "header.h"

int remove_duplicates(int arr[], int size){

	int i, j, k;

	for(i=0; i<size; i++){
		
		for(j=i+1; j<size; j++){
		
			if(arr[i] == arr[j]){
			
				for(k=j; k<size-1; k++){
				
					arr[k] = arr[k+1];
				}
				size--;
				j--;
			}
		}
	}
	return size;
}
