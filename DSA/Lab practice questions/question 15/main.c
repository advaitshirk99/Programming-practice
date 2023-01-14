#include<stdio.h>
#include<stdlib.h>

int size1,size2;

void input(int [],int);
void insSort(int [],int);
void printArr(int [],int );
void mergeArr(int [],int,int[],int,int[]);
int main()
{
		printf("Enter array sizes S1 and S2:");
		scanf("%d %d",&size1,&size2);
		int arr[size1],arr2[size2],arr3[size1+size2];
		input(arr,size1);
		input(arr2,size2);
		insSort(arr,size1);
		insSort(arr2,size2);
		mergeArr( arr, size1, arr2, size2, arr3);
		printArr(arr3,size2+size1);
		return 0;
}

void input(int arr[],int size)
{ 
		printf("\nEnter %d elements: \n",size);
		for(int i=0;i<size;i++)
		    scanf("%d",&arr[i]);
}

void insSort(int arr[],int size)
{ 
		int i,j,key;
	  for(int i=1;i<size;i++)
	  { 
		  	key=arr[i];
				j=i-1;
				while(j>=0 && arr[j]>key)	
				{ 
						arr[j+1]=arr[j];
			  		j--;
				}
				arr[j+1]=key;
	  }
}

void printArr(int arr[],int size)
{	
		printf("\n");
		for(int i=0;i<size;i++)
	    	printf("%d ",arr[i]);
}

void mergeArr(int arr[],int size1,int arr2[],int size2,int arr3[])
{ 	
		int i=0,j=0,k=0;
	  while(i<=size1 && j<=size2)
	  { 
	  		if(arr[i]<arr2[j])
						arr3[k++]=arr[i++];
				else
			 			arr3[k++]=arr2[j++];	
	  }
	  while(i<=size1)
	  { 
	  		arr3[k++]=arr[i++];
	  }
	  while(j<=size2)
	  { 
	  		arr3[k++]=arr2[j++];
	  }
}