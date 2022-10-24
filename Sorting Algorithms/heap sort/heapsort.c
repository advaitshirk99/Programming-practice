#include "header_heapsort.h"
#include<stdio.h>

//Swap function
void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i){

    int largest, left, right;

    //Starting with largest as node i
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    //Update indexes 
    if (left < n && arr[left] > arr[largest])   largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    //Update the actual content on those indexes
    if (largest != i){
        swap(&arr[i], &arr[largest]);
        //Recursive heapify to swap out the node and the smallest leaf node
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){

    //Build the max heap
    int i;
    for (i=(n/2 - 1); i>=0; i--) heapify(arr, n, i);

    for (i=0; i<n; i++) printf("%d ", arr[i]);

    //Heap sort
    for(i = n-1; i>=0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}