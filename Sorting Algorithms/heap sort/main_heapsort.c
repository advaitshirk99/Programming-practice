#include<stdio.h>
#include "header_heapsort.h"

int main(){

    int arr[] = {12, 31, 53, 429, 1, 218, 85, 13, 68, 192};
    int max_element, i, n = 10;
    
    heapSort(arr, n);
    printf("\nThe sorted array is:\n");
    for(i = 0; i<n; i++) printf("%d ", arr[i]);

    printf("\nMax element is: %d\n", extract_max(arr, n));
}