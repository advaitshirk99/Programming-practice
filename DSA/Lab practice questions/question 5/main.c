#include <stdio.h>
#include <stdlib.h>
int n,top1=-1,top2;
int arr[1000];

void pushOne(int);
void pushTwo(int);
void showStacks();

int main(){	
	int ch,ele;
	printf("Enter array size:");
	scanf("%d",&n);
	top2=n;
	while(1){ 
		printf("\n1.Push to stack 1\n2.Push to stack 2\n3.Show stacks\n4.Exit\n:");
	  	scanf("%d",&ch);
	  	switch(ch){
	  		case 1: printf("\nEnter element:");
	  				scanf("%d",&ele);
	  				pushOne(ele);
	  				break;
		  	case 2:	printf("\nEnter element:");
		  			scanf("%d",&ele);
		  			pushTwo(ele);
		  			break;
		  	case 3: showStacks();
		  			break;			
		  	default: exit(0);		
		}
	}
	return 0;
}

void pushOne(int ele){ 
	if((top1+1)==top2){ 
		printf("\nStack overflow!!\n");
	  	return;
	}
  	else arr[++top1]=ele;
}

void pushTwo(int ele){ 
	if((top1+1)==top2){ 
		printf("\nStack overflow!!\n");
	  	return;
	}
  	else
  		arr[--top2]=ele;
}

void popOne(){
	if(top1 == -1) printf("Stack 1 underflow");
	else{
		printf("The popped element is %d", arr[top1]);
		top1--;
	}
}

void popTwo(){
	if(top2 == n) printf("Stack 2 underflow");
	else{
		printf("The popped element is %d", arr[top2]);
		top2++;
	}
}

void showStacks(){ 
	printf("\nStack 1:\n");
  	for(int i=0;i<=top1;i++)
  		printf("%d ",arr[i]);

  	printf("\nStack 2:\n");
  	for(int i=n-1;i>=top2;i--)
  		printf("%d ",arr[i]);
}