#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int front;
    int rear;
    int size;
    int *arr;
} queue;

void enqueue(queue *q, int val);
void dequeue(queue *q);
void display(queue *q);

int main(){
    //Initializing the queue
    queue q;
    q.size = 10;
    q.front = -1;
    q.rear = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    display(&q);
    enqueue(&q, 29);
    enqueue(&q, 84);
    enqueue(&q, 81);
    enqueue(&q, 87);
    display(&q);

    dequeue(&q);
    display(&q);
}

void enqueue(queue *q, int val){

    if(q->rear == q->size-1) printf("\nQueue overflow!\n");
    else{
        q->rear = q->rear + 1;
        q->arr[q->rear] = val;
    }
}

void dequeue(queue *q){
    int a = -1; //If element can't be dequeued
    if(q->front == q->rear) printf("\nNo element to dequeue\n");
    if(q->rear == q->size-1) printf("\nQueue is full\n"); //Returning 1 indicates Queue is full, not necessary
    else{
        q->front++;
        a = q->arr[q->front];
    }
    if(a==-1) printf("\nQueue cannot be dequeued\n");
}

void display(queue *q){

    if(q->front == q->rear){ 
        printf("\nNo elements in the queue\n");
        return;
    }
    int i = q->front+1;
    while(i != q->rear+1){
        printf("%d<--- ", q->arr[i]);
        i++;
    }
    printf("\n");
}