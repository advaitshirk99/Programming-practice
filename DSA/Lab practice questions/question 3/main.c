#include<stdio.h>
#include<stdlib.h>

struct node
{
        int info;
        struct node *link;
};

struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
int Split(struct node *start, struct node **start1);

int main()
{
        struct node *start=NULL,*start1=NULL;
        int value;

        start=create_list(start);
        display(start);

        if(start!=NULL)
		{
    		Split(start, &start1);
        	display(start);
        	display(start1);
		}
        return 0;

}/*End of main()*/

int Split(struct node *start, struct node **start1)
{
        struct node *slow, *fast;
        if(start->link==NULL) /*only one element*/
                return 0;

        slow=fast=start;

        while(fast->link!=NULL && fast->link->link!=NULL)
        {
                slow = slow->link;
                fast = fast->link->link;
        }
        *start1 = slow->link;
        slow->link = NULL;
}/*End of Split()*/

struct node *create_list(struct node *start)
{
        int i,n,data;
        printf("Enter the number of nodes : ");
        scanf("%d",&n);
        start=NULL;
        if(n==0)
                return start;

        printf("\nEnter the element to be inserted : ");
        scanf("%d",&data);
        start=addatbeg(start,data);

        for(i=2;i<=n;i++)
        {
                printf("\nEnter the element to be inserted : ");
                scanf("%d",&data);
                start=addatend(start,data);
        }
        return start;
}/*End of create_list()*/

void display(struct node *start)
{
        struct node *p;
        if(start==NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        p=start;
        printf("\nList is :\n");
        while(p!=NULL)
        {
                printf("%d ",p->info);
                p=p->link;
        }
        printf("\n\n");
}/*End of display() */

struct node *addatbeg(struct node *start,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=start;
        start=tmp;
        return start;
}/*End of addatbeg()*/

struct node *addatend(struct node *start,int data)
{
        struct node *p,*tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        p=start;
        while(p->link!=NULL)
                p=p->link;
        p->link=tmp;
        tmp->link=NULL;
        return start;
}/*End of addatend()*/