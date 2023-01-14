#include <stdio.h>
int size = 0;
void swap(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
void heapify(int array[], int size, int i)
{
  	if (size == 1)
  	{
    	printf("Single element in the heap");
  	}
  	else
  	{	
    	int largest = i;
	    int l = 2 * i + 1;
	    int r = 2 * i + 2;
	    if (l < size && array[l] > array[largest])
	      	largest = l;
	    if (r < size && array[r] > array[largest])
	      	largest = r;
	    if (largest != i)
    	{
	      	swap(&array[i], &array[largest]);
	      	heapify(array, size, largest);
    	}
  	}
}	
void insert(int array[], int newNum)
{
  	if (size == 0)
  	{
	    array[0] = newNum;
	    size += 1;
  	}
  	else
  	{
	    array[size] = newNum;
	    size += 1;
	    for (int i = size / 2 - 1; i >= 0; i--)
    	{
      		heapify(array, size, i);
    	}
  	}
}

void deleteMax(int array[])
{
	swap(&array[0], &array[size - 1]);
  	size -= 1;
  	for (int i = size / 2 - 1; i >= 0; i--)
  	{
   		heapify(array, size, i);
  	}
}

void printArray(int array[], int size)
{
  	for (int i = 0; i < size; ++i)
    	printf("%d ", array[i]);
  	printf("\n");
}

int main()
{
  	int array[10];

	insert(array, 3);
	insert(array, 4);
	insert(array, 9);
	insert(array, 5);
	insert(array, 2);

  	printf("Heap array: ");
  	printArray(array, size);

  	deleteMax(array);
  	deleteMax(array);
  	printf("After deleting an element: ");

  	printArray(array, size);
}