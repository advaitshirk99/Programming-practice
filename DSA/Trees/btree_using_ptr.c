#include<stdio.h>
#include<stdlib.h>

typedef struct btree{
    struct btree *rchild, *lchild;
    int info;
}btree;

btree *create_tree(){
    btree *new_node;
    new_node = NULL;
    int data;
    printf("\nEnter data: ");
    scanf("%d", &data);
    if(data != 9999){
        new_node = (btree *)malloc(sizeof(btree));
        new_node->info = data;

        printf("Enter the left child of %d", data);
        new_node->lchild = create_tree();
        printf("Enter the right child of %d", data);
        new_node->rchild = create_tree();
    }
    return new_node;  
}

void preorder(btree *root) {
    if (root != NULL) {
        printf("%d\n", root->info);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void inorder(btree *root) {
    if (root != NULL) {
        inorder(root->lchild);
        printf("%d\n", root->info);
        inorder(root->rchild);
    }
}

void postorder(btree *root) {
    if (root != NULL) {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d\n", root->info);
    }
}
int main(){
    btree *root;
    root = NULL;
    root = create_tree();
    printf("Pre-order: \n");
    preorder(root);
    printf("\n");
    printf("In-order: \n");
    inorder(root);
    printf("\n");
    printf("Post-order: \n");
    postorder(root);
    printf("\n");
    return 0;
}