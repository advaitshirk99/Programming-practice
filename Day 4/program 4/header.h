
int *get_array(int size);
void display_array(int *arr, int size);

int search(int *arr, int element, int size);
int insert(int *arr, int element, int position); //return the current position of i in the pointer array
int set_union(int *arr1, int size1, int *arr2, int size2, int *union_array);
int set_intersection(int *arr1, int size1, int *arr2, int size2, int *intersection_array);