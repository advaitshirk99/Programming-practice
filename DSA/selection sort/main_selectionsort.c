#include<stdio.h>
#include "header_selectionsort.h"

int main(){

    int arr[] = {21, 31, 64, 138, 59, 61, 46, 87, 29, 23};
    int n = sizeof(arr)/sizeof(int);
    printf("Unsorted array:\n");
    print_array(arr, n);

    selectionSort(arr, n);
    printf("\nSorted array after selection sort:\n");
    print_array(arr, n);

    return 0;
}