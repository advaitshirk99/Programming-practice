#include<stdio.h>
#include "header_mergesort.h"

int main(){

    int arr[] = {10, 120, 318, 247, 29, 273, 187, 84, 1902}, n =9, i;
    
    printf("Unsorted elements of the array:\n");
    for(i=0; i<9; i++) printf("%d ", arr[i]);
    
    printf("\nSorted elements:\n");
    mergesort(arr, 8, 0);
    for(i=0; i<9; i++) printf("%d ", arr[i]);

    return 0;
}