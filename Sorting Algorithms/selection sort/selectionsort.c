#include "header_selectionsort.h"
#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){

    int i, j, min_index;

    for(i=0; i<n-1; i++){
        
        min_index = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;

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