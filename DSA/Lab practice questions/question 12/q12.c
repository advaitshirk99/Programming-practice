#include<stdio.h>
#include<stdlib.h>

typedef struct node
{  int data;
   struct node *left,*right;
}node;

int leaf=0,tot=0;
node* createBT()
{ int dat;
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
void inorder(node *root)
{ if(root==NULL) return;
  inorder(root->left);
  printf("%d ",root->data);
  inorder(root->right);
}
 
 void calc(node *root)
{ if(root==NULL) return;
  if(root->right==NULL && root->left==NULL) leaf++;
  calc(root->left);
  calc(root->right);
  tot++;
}

int main()
{ node *root;
  root=createBT();
  calc(root);
  printf("\nNumber of leafs:%d\nTotal:%d",leaf,tot);
  printf("\nInorder:");
  inorder(root);
  return 0;
}