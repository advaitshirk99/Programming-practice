#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *prev;
    struct node *next;
    int data;
}node;

void createNode(node *ptr, int data){

    ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
}

void dll_traverse(node *ptr);
void deleteNode(node **headNode, node *delNode);
void insertNode(node **headNode, node *insNode, int position);

int main(){

    node *head, *node2, *node3, *node4;
    
    head = (node *)malloc(sizeof(node));
    node2 = (node *)malloc(sizeof(node));
    node3 = (node *)malloc(sizeof(node));
    node4 = (node *)malloc(sizeof(node));
    
    head->prev = NULL;
    head->data = 32;
    head->next = node2;

    node2->prev = head->next;
    node2->data = 84;
    node2->next = node3;

    node3->prev = node2->next;
    node3->data = 56;
    node3->next = node4;

    node4->prev = node3->next;
    node4->data = 48;
    node4->next = NULL;

    printf("Before deleting:\n");
    dll_traverse(head);

    printf("After deleting:\n");
    deleteNode(&head, head);
    dll_traverse(head);
    printf("\n");
    
    node *new_node1 = (node *)malloc(sizeof(node));
    new_node1->data = 50;
    int position = 1;
    insertNode(&head, new_node1, position);

    printf("After insertion:\n");
    dll_traverse(head);
    //free(head);
    free(node2);
    free(node3);
    free(node4);
    free(new_node1);
    return 0;
}

void dll_traverse(node *ptr){

    while(ptr != NULL){
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void deleteNode(node **headNode, node *delNode){

    //Case 1: base case, checking for empty list
    if(headNode == NULL || delNode == NULL) return;

    /*Case 2:
    If node to be deleted is head node. The new head node
    will be pointing to the next node*/
    if(*headNode == delNode){
        *headNode = delNode->next;
    }
    //Delete only if delNode is not the last node
    if(delNode->next != NULL){
        delNode->next->prev = delNode->prev;
    }

    //Change prev only if node to be deleted is NOT first node
    if(delNode->prev != NULL){
        delNode->prev->next = delNode->next;
    }

    //Free the memory occupied by the node to be deleted.
    free(delNode);
}

//Works till position 2, not beyond
void insertNode(node **headNode, node *insNode, int position){

    node **temp;
    //If node is to be added at the front,
    if(position == 1){

        insNode->next = (*headNode);
        insNode->prev = NULL;
        
        if((*headNode) != NULL){
            (*headNode)->prev = insNode;
        }
        (*headNode) = insNode;
    }

    temp = headNode;
    int i=1;
    //(*headNode) will be the node after which the insertion has to be made
    while(i != position-1 && *temp != NULL){
        *temp = (*temp)->next;
        i++;
    }
    i++;

    if((*temp)->next != NULL){    

        //next of insNode points to prev of current node at 'position'
        insNode->next = (*temp)->next;
        //next of previous node (*headNode in this case) points to insNode
        (*temp)->next = insNode;
        //prev of insNode points to next of previous node (*headNode in this case)
        insNode->prev = (*temp);

        //Updating prev of 'insNode's next node
        if(insNode->next != NULL){
            insNode->next->prev = insNode;
        }
    }
    else{
        insNode->next = NULL;
        (*temp)->next = insNode;
        insNode->prev = (*temp);
    }

    printf("%d\n", (*headNode)->data);
}