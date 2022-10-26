/*
Circular Queues:
1) A circular queue is a special versiona of queue where the last element of the queue is connected to the first element of the queue.
2) Unlike a normal queue where we cannot insert new elements once the queue is full, even if
   there is space in the front of the queue, circular queues allow insertion of elements in the front of the queue.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct circ_queue{
    int front;
    int rear;
    int size;
    int *arr;
} circ_queue;

void enqueue(circ_queue *q, int val);
void dequeue(circ_queue *q);
void display(circ_queue *q);

int main(){
    //Initializing the queue
    circ_queue q;
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
    dequeue(&q);
    enqueue(&q, 92);
    enqueue(&q, 31);

    display(&q);
}

void enqueue(circ_queue *q, int val){

    //First condition means rear is behind front, hence the circular queue is full 
    //Second condition means front is on position 0, and rear will be behind it, on position size-1 (since it's circular)
    if((q->front == q->rear +1) || (q->front ==0 && q->rear == q->size-1)) printf("\nQueue is full!\n");
    else{
        if(q->front == -1) q->front =0;
        q->rear = (q->rear +1) % q->size;
        q->arr[q->rear] = val;
    }
}

void dequeue(circ_queue *q){
 
    if(q->front == -1) printf("Queue is empty!");   //This is the base condition, as initialized in the main
    if(q->front == q->rear) q->front = q->rear = -1;   //This means that the queue is empty, hence setting both front and rear to -1
    if(q->front == q->size-1) q->front = 0; //This means the front has reached the end, and has to be reset to the starting point so that new elements can be added
    else q->front++;
}

void display(circ_queue *q){

    if(q->front == -1){ 
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    int i;

    //If value of rear is > front, it means the queue isn't circular yet, just a regular queue
    if (q->rear >= q->front){
        for (i = q->front; i <= q->rear; i++)
            printf("%d ", q->arr[i]);
    }
    //If above case is not true, it means queue is in circular form, and value of rear will be < front (as rear will be present before front)
    else
    {
        for (int i = q->front; i < q->size; i++)
            printf("%d ", q->arr[i]);
 
        for (int i = 0; i <= q->rear; i++)
            printf("%d ", q->arr[i]);
    }
}