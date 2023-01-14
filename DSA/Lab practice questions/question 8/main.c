#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node { 
    int no;
    char name[25];
    int sci_marks;
    int math_marks;
    struct Node *next;
    struct Node *prev;
};

void insertStart(struct Node** head, int no, char * name, int sci_marks, int math_marks)
{
    
    // creating memory for newNode
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    
    // assigning newNode's next as the current head 
    // Assign data & and make newNode's prev as NULL
    newNode->no = no;
	newNode -> sci_marks = sci_marks;
	newNode -> math_marks = math_marks;
	strcpy(newNode -> name, name);

    newNode->next = *head;
    newNode->prev = NULL;
    
    // if list already had item(s)
    // We need to make current head previous node as this new node
    if(*head != NULL)
        (*head)->prev = newNode;
    
    // change head to this newNode
    *head = newNode;
    
}

void insertLast(struct Node** head, int no, char * name, int sci_marks, int math_marks)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->no = no;
	newNode -> sci_marks = sci_marks;
	newNode -> math_marks = math_marks;
	strcpy(newNode -> name, name);

    newNode->next = NULL;
    
    //need this if there is no node present in linked list at all
    if(*head==NULL){
        *head = newNode;
        newNode->prev = NULL;
        return;
    }
    
    struct Node* temp = *head;
    
    // traverse till the last node
    while(temp->next!=NULL)
        temp = temp->next;
    
    // assign last node's next to this new Node
    temp->next = newNode;
    // assign this new Node's previous to last node(temp)
    newNode->prev = temp;
}

void display(struct Node* node, int rollno)
{
    struct Node* end;
    printf("\nThe Student details are:\n");
    while (node != NULL) 
    {
    	if((node -> no) == rollno)
    	{
        	printf("Name: %s\nRoll no: %d \nSci_marks: %d\nMath_marks: %d\n", node->name,node->no, node->sci_marks ,node->math_marks);
        	return;
        }
    	end = node;
    	node = node->next;
    }
    
}

void displayAbove90(struct Node* head)
{
	struct Node * temp = head;
	printf("\nThe details of student who scored more than 90 in math and science are: ");
	while(temp -> next != NULL)
	{
		if((temp -> math_marks >=90) && (temp -> sci_marks >=90))
			printf("\nName: %s\nRoll no: %d \nSci_marks: %d\nMath_marks: %d\n", temp->name,temp->no, temp->sci_marks ,temp->math_marks);
		printf("\n---------------------------------------------\n");
		temp = temp -> next;
	}
}


int main()
{
    struct Node* head = NULL;
    
    // Need '&' i.e. address as we need to change head
    insertStart(&head,1, "abc", 90, 90);
    insertStart(&head,2, "acd", 50, 50);
    insertStart(&head,3, "adc", 95, 92);
    
    insertLast(&head,10, "bcd", 98, 99);
    insertLast(&head,20, "dcb" ,25, 50);
    
    // no need for '&' as head need not be changed
    // only doing traversal
    display(head, 2);
    displayAbove90(head);
    return 0;
}