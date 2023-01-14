#include <stdio.h> 
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void MaxHeapify(int arr[], int i, int N)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
 
    if (l < N && arr[l] > arr[i])
        largest = l;
    if (r < N && arr[r] > arr[largest])
        largest = r;
    if (largest != i) 
    {
        swap(&arr[i], &arr[largest]);
        MaxHeapify(arr, largest, N);
    }
}
 

void convertMaxHeap(int arr[], int N)
{
    
    for (int i = (N - 2) / 2; i >= 0; --i)
        MaxHeapify(arr, i, N);
}

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
}
 
void input(int arr[],int size)
{ 
    printf("\nEnter %d elements: \n",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
}

void MinHeapify(int arr[],int N, int i)
{   
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int small = i;
 
    if (l < N && arr[l] < arr[i])
        small = l;
    if (r < N && arr[r] < arr[small])
        small = r;
    if (small != i) 
    {
        swap(&arr[i], &arr[small]);
        MinHeapify(arr,N,small);
    }

}

void Minheap(int arr[],int N)
{ 
    for(int i=(N-1)/2;i>=0;i--)
        MinHeapify(arr,N,i);
}
int main()
{   
    int N;
    printf("\nEnter size of array:");
    scanf("%d",&N);
    
    int arr[N];
    input(arr,N);

    Minheap(arr,N);

    printf("Min Heap array : ");
    printArray(arr, N);
 
    convertMaxHeap(arr, N);
 
    printf("\nMax Heap array : ");
    printArray(arr, N);
 
    return 0;
}