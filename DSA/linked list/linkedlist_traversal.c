#include<stdio.h>
#include<stdlib.h>
#define TRUE 0
#define FALSE 1

typedef struct node{
    int data;
    struct node *next;
} node;

void ll_traversal(node *ptr);
void insert_node(node *prevNode, int data);
int searchEle(node *ptr, int element);

int main(){

    node *head, *node2, *node3;

    //Allocating memory for nodes in the heap NOT IN THE STACK
    head = (node*)malloc(sizeof(node));
    node2 = (node*)malloc(sizeof(node));
    node3 = (node*)malloc(sizeof(node));

    //Adding data and link to the head node
    /*The -> operator is used because we are dealing 
    with pointers in structures */
    head->data = 7;
    head->next = node2; //linking the 'next' part of head node to the data part of node2

    //Adding data and link to node2
    node2->data = 10;
    node2->next = node3;

    node3->data = 21;
    node3->next = NULL; //NULL indicates end of the linked list

    //Traversing the linked list
    ll_traversal(head);
    printf("\n\n");
    //Inserting a new node after node2
    insert_node(node2, 37);
    ll_traversal(head);

    //Searching element
    int element = 20;
    if(searchEle(head, element) == 0){
        printf("Element found\n");
    }
    else printf("Element not found\n");

    return 0;
}

void ll_traversal(node *ptr){
    
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void insert_node(node *prevNode, int data){

    if(prevNode == NULL){
        printf("The given previous node cannot be null\n");
        return;
    }

    node *newNode = (node *)malloc(sizeof(node));

    //Allocating data in new node
    newNode->data = data;
    //newNode's next points to what prevNode's next was pointing to
    newNode->next = prevNode->next;
    //prevNode's next points to newNode
    prevNode->next = newNode;
}

int searchEle(node *ptr, int element){
    
    //traversing through the linked list to find the element
    while(ptr != NULL){
        if(ptr->data == element) return TRUE;
        else ptr = ptr->next;
    }
    //If the while loop ends, it means element was not found in the linked list
    return FALSE;
}
