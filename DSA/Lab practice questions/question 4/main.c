#include<stdio.h>
#include<stdlib.h>	

struct node
{
	struct node *next;
  	int val;
};
typedef struct node node;


typedef struct head 
{
	node *head_ptr;
	int num;
}head;

head HS;

void delete()
{  	if(HS.num==0)
	{ 	
		printf("\nList empty!!");
	   	return;
	}
	node *ptr;
	ptr=HS.head_ptr;
	HS.head_ptr=ptr->next;
	printf("\nElement deleted:%d",ptr->val);
	free(ptr);
	HS.num--;
}

void insert()
{  
	node *np;
   	np=(node*)malloc(sizeof(node));
	printf("Enter data:");
   	scanf("%d",&np->val);
   	if(HS.num==0) 
   	{ 
   		np->next=NULL;
   	}
   	else
   	{ 
   		np->next=HS.head_ptr;
   	}
   	HS.head_ptr=np;
   	HS.num++;
   	//printf("%p %p %d\n",HS.head_ptr,np,HS.num);
}

void display()
{ 
	printf("\n %d elements in list\n",HS.num);
	node *ptr;
  	ptr=HS.head_ptr;
  	while(ptr!=NULL)
  	{ 
  		printf("%d ",ptr->val);
    	ptr=ptr->next;
  	}
}

int main()
{   
	HS.head_ptr=NULL;
    HS.num=0;
    int ch;
    while(1)
    { 
    	printf("\n1.Insert\n2.Delete\n3.Display list\n4.Exit\n");
	  	scanf("%d",&ch);
	  	switch(ch)
	  	{ 
	  		case 1: insert();
	    			break;
	    	case 2: delete();
	    			break;
	    	case 3: display();
	    			break;
	    	default: exit(0);						
	  	}
    }
	return 0;
}