#include<stdio.h>
#include<stdlib.h>

typedef struct node{  
   int data;
   struct node *left,*right;
}node;

int height(node* node){
    if(node == NULL)
        return 0;
    else{
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

void printCurrentLevel(node* root, int level){
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1){
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

void levelOrder( node* root){  
    int h = height(root);
    for (int i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

node* add2Tree(node *root,int ele){ 
    if(root==NULL){ 
        node *temp=(node*)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->data=ele;
        return temp;
    }  
    if(ele<root->data)
        root->left=add2Tree(root ->left,ele);
    else if(ele>root->data) 
        root->right=add2Tree(root->right,ele);
    return root;   
}

node* nextInorder(node* root)
{ 
    node *cur=root;
    while(cur && cur->left!=NULL)
        cur=cur->left;
    return cur;  
}

node* deleteNode(node *root,int ele){ 
    if(root==NULL) return root;
    if(ele < root->data)
        root->left = deleteNode(root->left, ele);
    else if(ele > root->data)
        root->right = deleteNode(root->right, ele);
    else{
        if(root->left == NULL){
            node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){ 
            node *temp=root->left;
            free(root);
            return temp;
        }
        node* next = nextInorder(root->right);
        root->data = next->data;
        root->right = deleteNode(root->right,next->data);
    }           
    return root;
}

int main()
{  
    node *root=NULL;
    int ch,ele;
    while(1)
    { 
        printf("\n1.Add node\n2.Delete node\n3.Display tree\n4.Exit");
        scanf("%d",&ch);
        switch(ch)
        { 
            case 1: printf("\nEnter data:");
                    scanf("%d",&ele);
                    root=add2Tree(root,ele);
                    break;
            case 2: printf("\nEnter element to remove:");
                    scanf("%d",&ele);
                    root=deleteNode(root,ele);
                    break;
            case 3: printf("\nTree:\n");
                    levelOrder(root);
                    break;
            default :exit(0);
                    break;

        }
    }
    return 0;
}