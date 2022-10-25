#include<stdio.h>
#include "header_bubblesort.h"

int main(){

    int arr[] = {21, 31, 64, 138, 59, 61, 46, 87, 29, 23};
    int n = sizeof(arr)/sizeof(int);
    printf("Unsorted array:\n");
    print_array(arr, n);

    bubbleSort(arr, n);
    printf("\nSorted array after bubble sort:\n");
    print_array(arr, n);

    return 0;
}