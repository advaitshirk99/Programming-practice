#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *front = NULL;
node *rear = NULL;

void enqueue(int data){
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    if(rear == NULL && front == NULL){
        front = rear = new_node;
        rear->next = front;
    }
    else{
        rear->next = new_node;
        rear = new_node;
        new_node->next = front;
    }
}

int dequeue(){
    node *temp = front;
    printf("The dequeued element is: %d\n", temp->data);
    if(front == NULL && rear == NULL){
        printf("Queue is empty\n");
    }
    else if(front == rear){
        front = rear = NULL;
        free(temp);
    }
    else{
        front = front->next;
        rear->next = front;
        free(temp);
    }
}