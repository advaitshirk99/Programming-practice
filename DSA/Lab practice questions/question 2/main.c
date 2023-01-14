#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

void printList(node* head){
	node* ptr = head;
	while(ptr){
		printf("%d —> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void push(node** head, int data){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

void moveNode(node** destRef, node** sourceRef){
	if (*sourceRef == NULL)	{
		return;
	}
	node* newNode = *sourceRef;
	*sourceRef = (*sourceRef)->next;
	newNode->next = *destRef;
	*destRef = newNode;
}

node* sortedMerge(node* a, node* b){
	node dummy;
	dummy.next = NULL;
	node* tail = &dummy;
	while (1){
		if(a == NULL){
			tail->next = b;
			break;
		}
		else if(b == NULL){
			tail->next = a;
 			break;
		}	
		if(a->data <= b->data){
			moveNode(&(tail->next), &a);
		}
		else{
			moveNode(&(tail->next), &b);
		}
		tail = tail->next;
	}
	return dummy.next;
}

int main(void){
	int keys[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(keys)/sizeof(keys[0]);
	
	node *a = NULL, *b = NULL;
	for (int i = n - 1; i >= 0; i = i - 2){
		push(&a, keys[i]);
	}
	for (int i = n - 2; i >= 0; i = i - 2){
		push(&b, keys[i]);
	}
	printf("First List: ");
	printList(a);
	printf("Second List: ");
	printList(b);
	node* head = sortedMerge(a, b);
	printf("After Merge: ");
	printList(head);
	return 0;
}