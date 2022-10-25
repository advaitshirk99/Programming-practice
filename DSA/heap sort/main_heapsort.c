#include<stdio.h>
#include "header_heapsort.h"

int main(){

    int arr[MAX_HEAP_SIZE] = {12, 31, 53, 429, 1, 218, 85, 13, 68, 192};
    int max_element, i, n = 10;
    
    heapSort(arr, n);
    printf("\nThe sorted array is:\n");
    print_array(arr, n);

    int element = 1000;
    printf("\nArray after inserting %d:\n", element);
    insert_node(arr, n, element);
    print_array(arr, n+1);
    printf("\nMax element is: %d\n", extract_max(arr, n));

    return 0;
}