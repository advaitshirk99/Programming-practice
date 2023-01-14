#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//structure of a node in Linked List
typedef struct emp{ 
	int id;
	char name[10],des[10];
  	float salary;
  	struct emp *next;	
}emp;

//function prototypes
emp* insert(emp*);
void print(emp*);
void search(int,emp*);
float avg_salary(emp*);

int main(){   
	emp *head=NULL;
	int choice,id;
	//driver code
	while(1){ 
		printf("\n1. Insert\n2. Search\n3. Avg Salary\n4. Exit\n: ");
	  	scanf("%d",&choice);
	  	switch(choice){ 
	  		case 1: head=insert(head);
	  				break;
	  		case 2: printf("\nEnter emp ID: ");
	  				scanf("%d",&id);		
	  				search(id,head);
	  				break;
	  		case 3: printf("\nAverage salary: %.2f", avg_salary(head));
	  				break;
	  		default: exit(0);
	  				break;				
	  	}
	}
	return 0;
}

//adds one node at the beggining of the list 
emp* insert(emp *head){ 	
	emp *new;
  	new=(emp*)malloc(sizeof(emp));
  	printf("Enter ID: ");
  	scanf("%d",&new->id);
  	printf("Enter name: ");
  	scanf("%s",new->name);
  	printf("Enter Designation: ");
  	scanf("%s",new->des);
  	printf("Enter Salary: ");
 	scanf("%f",&new->salary);

  	if(head==NULL){ 	
   		new->next=NULL; 
  	 	head=new;
   	}
   	else{ 	
   		new->next=head;
   	 	head=new;
    } 
	return head;
}

void print(emp* head){ 	
	printf("\nNAME: %s\nDes: %s\nSalary: %0.2f\n",head->name,head->des,head->salary);
}

//searches for a node starting from head
void search(int id,emp *head){ 
	while(head!=NULL){ 
   		if(head->id==id){ 
   	  		printf("Employee found");
   	  		print(head);
   	  		return;
   	  	}
   	  	head=head->next;
   	}
  	printf("Employee not found");
}

//finds avg salary with designation manager
float avg_salary(emp *head){ 	
	int nu=0;
  	char des1[10];
	float sum=0;
	if(head==NULL) 
		return sum;
  	else{ 
  		do{ 
  			strcpy(des1,head->des);
  			if(strcmp(des1,"manager")==0 || strcmp(des1,"Manager")==0){ 
  				sum+=head->salary;
  				nu++;
  			}
  			head=head->next;
   		}while(head!=NULL);
	}
  	return sum/nu;
}