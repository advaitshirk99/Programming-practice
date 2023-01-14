/*18. Describe a 0(n logn) time algorithm that, given a set of n real numbers and another
number x determines whether or not there exits two elements in the set whose sum is
exactly x.*/

#include <stdio.h>
#include <stdlib.h>

//Merge function
void merge(int arr[], int high, int mid, int low)
{
    //b will store the sorted array, hence will be of max size high
    int i, j, k, b[high+1];
    i = low;
    j = mid+1;
    k = low;

    /*dividing the array into two halves, i.e. from low to mid, and mid+1 to high
    The while loop runs till both sides are iterated till their respective ends (till mid and till high)*/
    while(i <= mid && j <= high)
    {
        /*if element of left array is lesser than element of right array, place element of 
        right array in the new, b array (for ascending sort)*/
        if(arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++; k++;
        }
        else
        {
            b[k] = arr[j];
            j++; k++;
        } 
    }

    //if the left array is bigger than the right array, the remaining elements of the left array are copied to the new array b
    while (i <= mid)
    {
        b[k] = arr[i];
        i++; k++;
    }
    
    //if the right array is bigger than the right array, the remaining elements of the right array are copied to the new array b
    while (j <= high)
    {
        b[k] = arr[j];
        j++; k++;
    }

    //The sorted array is stored back in the original array 
    for(i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}

//Merge sort function
void mergesort(int arr[], int low, int high)
{
    int mid;

    //Sorting will only occur if there are more than 1 elements in the array
    if(low < high)
    {
        //mid is taken as the floor value (since if its an odd no, the decimal part will be ignored)
        mid = (low + high)/2;
        mergesort(arr, mid, low);
        mergesort(arr, high, mid+1);
        merge(arr, high, mid, low);
    }
}

int binarySearch(int arr[], int low, int high, int searchKey)
{
	while(low<=high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == searchKey)
			return 1;
		if(arr[mid] > searchKey)
			low = mid + 1;
		else
			high = mid -1;
	}
	return 0;
}

int checkSum(int arr[], int arr_size, int sum)
{

	mergesort(arr, 0, arr_size-1);

	for(int i =0; i < arr_size -1; i++)
	{
		int searchKey = sum - arr[i];
		if(binarySearch(arr, i+1, arr_size - 1, searchKey))
			return 1;
	}
	return 0;
}

int main()
{
	int arr[] = { 1, 4, 45, 6, 10, -8 };
	int n = 14;
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	if(checkSum(arr, arr_size, n))
		printf("\nSum pair exists\n");
	else
		printf("\nSum pair doesn't exist\n");
	return 0;
}