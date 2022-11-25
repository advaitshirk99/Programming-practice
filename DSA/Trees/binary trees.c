#include<stdio.h>
#include<stdlib.h>

typedef struct binarytree{
    int info;
    struct binarytree *lchild;
    struct binarytree *rchild;
}binarytree;

binarytree createBT(){
    binarytree *newNode;
    newNode = NULL;
    int data;

    printf("Enter the data: ");
    scanf("%d", &data);

    if(data != 999){
        newNode = (binarytree *)malloc(sizeof(binarytree));
    }
}

