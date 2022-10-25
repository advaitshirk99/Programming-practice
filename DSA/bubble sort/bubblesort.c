#include "header_bubblesort.h"
#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){

    int i, j;
    
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
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