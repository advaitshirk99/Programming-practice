#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct queue{
    node *stack1;
    node *stack2;
}queue;

void display(node *,node *);
void enqueue(queue *, int );
void dequeue(queue *);
void push(node** , int );
int pop(node** );

int main(void){
    queue *q=(queue*)malloc(sizeof(queue));
    int a,ch;
    q->stack1=NULL;
    q->stack2=NULL;
    do{
        printf("\n1.Add\n2.Delete\n3.Display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch) 
        {
            case 1 : printf("Enter the element to be added to queue\n");
                     scanf("%d", &a);
                     enqueue(q,a);
                     break;
            case 2 : dequeue(q);
                     break;
            case 3 : display(q->stack1,q->stack2);
                     break;
        }
    }while(ch!=4);
    return 0;
}

void enqueue(queue *q, int val){
    push(&q->stack1,val);
}

void dequeue(queue *q){
    int val;
    if(q->stack1==NULL && q->stack2==NULL){   
        printf("Queue is empty");
        return;
    }
    if(q->stack2==NULL){  
        while (q->stack1!=NULL){ 
            val=pop(&q->stack1);
            push(&q->stack2,val);
        }
    }
    val=pop(&q->stack2);
    printf("%d\n",val);
}

void push(node** top, int data){
    node* newnode=(node*)malloc(sizeof(node));
        if(newnode==NULL){   
            printf("Stack overflow\n");
            return;
        }
    newnode->data=data;
    newnode->next=(*top);
    (*top)=newnode;
}

int pop(node** top){
    int a;
    node *t;
    if(*top==NULL) 
        printf("Stack underflow\n");
    else{
        t=*top;
        a=t->data;
        *top=t->next;
        free(t);
        return a;
    }
}

void display(node *top1,node *top2){   
    printf("\n");
    while(top1!=NULL){   
        printf("%d\t",top1->data);
        top1=top1->next;
    }
}
