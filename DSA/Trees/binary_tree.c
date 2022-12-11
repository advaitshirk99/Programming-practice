#include <stdio.h>
#include <stdlib.h>

typedef struct bNode{
    int data;
    struct bNode *left;
    struct bNode *right;
}bNode;

void insert(bNode **tree, int data){
    bNode *temp, *previous, *current;

    if (*tree == NULL) {
        temp = (bNode *)malloc(sizeof(bNode));
        temp->data = data;
        temp->left = temp->right = NULL;
        *tree = temp;
        return;
    }

    if (data < (*tree)->data){
        insert(&(*tree)->left, data);
    } 
    else if (data > (*tree)->data){
        insert(&(*tree)->right, data);
    }
}

void delete(bNode *root) {
    if (root != NULL) {
        delete(root->left);
        delete(root->right);
        free(root);
    }
}

bNode* search(bNode **tree, int data) {
    if (*tree == NULL) {
        return NULL;
    }

    if (data < (*tree)->data) {
        search(&((*tree)->left), data);
    } else if (data > (*tree)->data) {
        search(&((*tree)->right), data);
    } else if (data == (*tree)->data) {
        return *tree;
    }
}

void preorder(bNode *root) {
    if (root != NULL) {
        printf("%d\n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(bNode *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

void postorder(bNode *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n", root->data);
    }
}

int main() {
    int choice, value;
    bNode *root = NULL;
    printf("\n:: Binary Tree using Linked List ::\n");
    while (1) {
        printf("\nChoose from below Menu\n");
        printf("1. Insert\n2. Delete Tree\n3. Search in Tree\n4. Display preorder\n5. Display inorder\n6. Display postorder\n7. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insert(&root, value);
                break;
            case 2: delete(root);
                break;
            case 3: printf("Enter the value to be searched in the tree: ");
                scanf("%d", &value);
                bNode *node = search(&root, value);
                if (node != NULL) {
                    printf("\nSearched node found => %d\n", node->data);
                } else {
                    printf("\nData Not found in tree.\n");
                }
                break;
            case 4: preorder(root);
                break;
            case 5: inorder(root);
                break;
            case 6: postorder(root);
                break;
            case 7: exit(0);
            default: printf("\nWrong selection!!! Please try again!!!\n");
        }
    }
}