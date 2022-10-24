#include "header_heapsort.h"
#include<stdio.h>
#include<stdlib.h>

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

    //Update indexes: < for MAX_HEAP, > for MIN_HEAP
    if (left < n && arr[left] < arr[largest])   largest = left;
    if (right < n && arr[right] < arr[largest]) largest = right;

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

//Extract max only works on MAX_HEAPS
int extract_max(int arr[], int n){

    if (n<1) return 0;

    int max = arr[0];
    n -= 1;
    heapify(arr, n, 0);
    return max;
}

//Function to insert a node in heap
void insert_heapify(int arr[], int n, int i){

    int parent = (i - 1)/2;

    //Condition to check till root node
    if(arr[parent] > 0){

        if(arr[parent] < arr[i]){
            //Swapping leaf node if parent is smaller than leaf node
            swap(&arr[parent], &arr[i]);
            //Recursive insert_heapify to sort remaining parent-leaf pairs
            insert_heapify(arr, n, parent);
        }
    } 
}

void insert_node(int arr[], int n, int key){

    n += 1;
    arr[n-1] = key;
    insert_heapify(arr, n, n-1);
}

// A utility function to print array of size n
void print_array(int arr[], int n){
    for (int i = 0; i < n; ++i){-
        printf("%d ", arr[i]);
    }
    printf("\n");
}