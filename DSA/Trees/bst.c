#include<stdio.h>
#include<stdlib.h>

typedef struct btree{
    struct btree *rchild, *lchild;
    int info;
}btree;

btree *CreateBST(btree *root, int item){
    if(root == NULL){
        root = (btree *)malloc(sizeof(btree));
        root->lchild = root->rchild = NULL;
        root->info = item;
        return root;
    }
    else{
        if(item < root->info)
            root->lchild = CreateBST(root->lchild, item);
        else if(item > root->info)
            root->rchild = CreateBST(root->rchild, item);
        else
            printf("No duplicates allowed");
        return(root);
    }
}

btree *search(btree *root, int key){
    while(root != NULL){
        if(root->info == key) return root;
        if(root->info > key) return root->lchild;
        else root = root->rchild;
    }
    return NULL;
}

void preorder(btree *root){
    if (root != NULL) {
        printf("%d\n", root->info);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void inorder(btree *root){
    if (root != NULL) {
        inorder(root->lchild);
        printf("%d\n", root->info);
        inorder(root->rchild);
    }
}

void postorder(btree *root){
    if (root != NULL) {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d\n", root->info);
    }
}

int main(){
    btree *root = NULL;
    int choice, item, n, i, srch;

    do{
        printf("\n\nBinary Search Tree Operations\n");
        printf("\n1. Creation of BST");
        printf("\n2. Traverse in Inorder");
        printf("\n3. Traverse in Preorder");
        printf("\n4. Traverse in Postorder");
        printf("\n5. Search an element");
        printf("\n6. Exit\n");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            root = NULL;
            printf("\n\nBST for how many nodes? ");
            scanf("%d",&n);
            for(i = 1; i <= n; i++){
                printf("\nEnter data for node %d : ", i);
                scanf("%d",&item);
                root = CreateBST(root,item);
            }
            printf("\nBST with %d nodes is ready to use\n", n);
            break;
        case 2:
            printf("\nBST Traversal in INORDER \n");
            inorder(root);
            break;
        case 3:
            printf("\nBST Traversal in PREORDER \n");
            preorder(root);
            break;
        case 4:
            printf("\nBST Traversal in POSTORDER \n");
            postorder(root);
            break;
        case 5:
            printf("\nEnter the element to be searched: ");
            scanf("%d", &srch);
            if((search(root, srch))->info != srch){
                printf("Element not found\n");
            }
            else 
                printf("Element found");
            break;
        case 6:
            printf("\n\n Terminating\n\n");
            break;
        default:
            printf("\n\nInvalid option, try again\n\n");
            break;
        }
    }while(choice != 6);
    return 0;
}