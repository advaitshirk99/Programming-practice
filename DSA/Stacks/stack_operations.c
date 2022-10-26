#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *next;
    int data;
} node;

node *top = NULL;

void push(int data);
void pop();
void display();

int main(){
    int choice, value;
    printf("\nStack using Linked List\n");
    while(1){
        printf("1-> Push\n2-> Pop\n3-> Display\n4-> Exit");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);
        
        switch(choice){

            case 1: printf("Enter the value to be inserted:\n");
                    scanf("%d", &value);
                    push(value);
                    break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("\nWrong selection!");
        }
    }
}

void push(int data){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    if(top == NULL) newNode->next = NULL;
    else newNode->next = top;
    top = newNode;
    printf("\nInsertion successful\n\n");
}

void pop(){
    if(top == NULL) printf("\nEmpty stack!\n\n");
    else{
        node *temp = top;
        printf("Popped off element: %d\n", temp->data);
        top = temp->next;
        free(temp);
    }
}

void display(){
    if (top == NULL) printf("\nStack is empty\n\n");
    else{
        node *temp = top;
        while(temp->next != NULL){
            printf("%d --->", temp->data);
            temp = temp->next;
        }
        printf("%d --->NULL\n\n", temp->data);
    }
}
