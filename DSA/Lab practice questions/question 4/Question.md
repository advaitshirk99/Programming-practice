4. Write a program to create a single linked list. The address of the head is to be stored in a separate structure which has two fields
struct head {
struct node *head_ptr;
int num;
};
The head_ptr will store the pointer to the head node num: Is the count of the number of elements present in the linked list. Write implementations for insertion and deletion which will update the head structure appropriately.