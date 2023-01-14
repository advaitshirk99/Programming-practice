#include<stdio.h>
#include<stdlib.h>

typedef struct node{  
    int data;
    struct node *left,*right;
}node;

node* createBT(){  
    int dat;
    printf("\nEnter data (-1 to stop):");
    scanf("%d",&dat);
    if(dat==-1) return NULL;
    node *root;
    root=(node*)malloc(sizeof(node));
    root->data=dat;
    printf("\nLeft node of %d",root->data);
    root->left=createBT();
    printf("\nRight node of %d",root->data);
    root->right=createBT();
    return root;
}

void preOrder(node *root){ 
    if(root==NULL) return;
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inorder(node *root){ 
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void postOrder(node* root){ 
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}

int main(){   
    node *root;
  	root=createBT();
  	printf("\nInorder:");
  	inorder(root);
  	printf("\nPreorder:");
  	preOrder(root);
  	printf("\nInorder:");
  	postOrder(root);
  	return 0;
}