#include<stdio.h>
#include "header.h"

int binary_search(int arr[], int element, int low, int high){
	
	int mid;
	if (low>high) return False;

	else{
	
		mid = (low+high)/2;
		if (element == arr[mid]) return mid;

		else if (element > arr[mid]) return binary_search(arr, element, mid+1, high);
		else return binary_search(arr, element, low, mid-1);
	}
}
