#include<stdio.h>
#include <stdlib.h>

typedef struct queue{ 
	int arr[100];
	int size,first,last;
}qu;

//global variable queues q1 and q2
qu q1={{},0,0,0};
qu q2={{},0,0,0};

//function prototypes
int enQ(int,qu*);
int deQ(qu*);
int pop();
void showStack();

int main()
{	
		int size=0,ch,ele;
		printf("Enter size of stack:");
		scanf("%d",&size);
		q1.size=q2.size=size;
		while(1){ 
			printf("\n1.Push\n2.Pop\n3.Show stack\n4.Exit\n:");
			scanf("%d",&ch);
			switch(ch){ 
			  	case 1: printf("\nEnter element:");
				  			scanf("%d",&ele);
				  			enQ(ele,&q1);
				  			break;
			  	case 2:	printf("\nElement popped: %d",pop());
			  				break;
			  	case 3: showStack();
			  				break;	
			  	default:exit(0);		
		  	}
		}
		return 0;
}

int enQ(int ele,qu *q)
{ 
		if(q->last==q->size)
		{ 
				printf("\nStack full !!\n");
		  	return 0;
		}
	  if(q->first <= q->last)
	  { 
	  		q->arr[q->last++]=ele;
	  }	
	  return 1;
}

int deQ(qu *q)
{ 
		int ele;
		if(q->first==q->last)
		{  
				return 0;
		}
	  else if(q->first+1==q->last)
	  { 
	  		ele=q->arr[q->first];
				q->first=q->last=0;
	  }	
	  else
	  		return q->arr[q->first++];
	  return ele;
}

void showStack()
{ 
		for(int i=q1.last-1;i>=q1.first;i--)
		printf("%d ",q1.arr[i]);
}

int pop()
{ 
		if(q1.first==q1.last)
		{ 
				printf(" Stack empty\n");
			  q1.first=q1.last=0;
			  return 0;
		}
	int f=q1.first,l=q1.last-1;
	for(int i=f;i<l;i++)
	{   
			enQ(deQ(&q1),&q2);
	}
	int ele=deQ(&q1);
	f=q2.first;
	l=q2.last;
	for(int i=f;i<l;i++)
	{ 
			enQ(deQ(&q2),&q1);
	}
	return ele;
}