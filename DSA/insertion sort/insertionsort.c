#include<stdio.h>
#include "header_insertionsort.h"

void insertionSort(int arr[], int n){

    int i, j, current;
    for(i=1; i<n; i++){

        current = arr[i];
        j = i - 1;

        /*This while loop will keep checking if the next element is 
        greater than the previous one, while j (the counter) is not less than 0 */
        //This will bring down the smallest element of the array to the 0th position
        //Use: > for ascending sort, < for descending sort
        while(j >= 0 && arr[j] > current){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
    }
}

// A utility function to print array of size n
void print_array(int arr[], int n){
    for (int i = 0; i < n; ++i){-
        printf("%d ", arr[i]);
    }
    printf("\n");
}