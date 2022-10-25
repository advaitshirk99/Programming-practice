#include<stdio.h>
#include "header_insertionsort.h"

int main(){

    int arr[] = {21, 13, 53, 12, 46, 39, 78, 102};
    int n = sizeof(arr)/sizeof(int);
    printf("Unsorted array:\n");
    print_array(arr, n);

    insertionSort(arr, n);
    printf("\nSorted array using insertion sort:\n");
    print_array(arr, n);

    return 0;
}