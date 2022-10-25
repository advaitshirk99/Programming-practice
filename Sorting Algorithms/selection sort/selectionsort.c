#include "header_selectionsort.h"
#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){

    int i, j, min_index;
    
    //First loop to iterate through all elements excluding last one
    for(i=0; i<n-1; i++){
        
        //Setting ith position as minimum index
        min_index = i;
        //j starts from i+1 because i elements are already checked, and are in ascending order
        for(j=i+1; j<n; j++){
            
            //If element on i+1 position is lesser than element on ith position, set min_index as i+1 position
            if(arr[j] < arr[min_index]){
                min_index = j;
            
            //The condition below only runs when the above if condition is satisfied. 
            if(min_index != i){
                swap(&arr[min_index], &arr[i]);
            }
            }
        }
    }
}

// A utility function to print array of size n
void print_array(int arr[], int n){
    for (int i = 0; i < n; ++i){-
        printf("%d ", arr[i]);
    }
    printf("\n");
}
