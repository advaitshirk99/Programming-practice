#define MAX_HEAP_SIZE 1000

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
int extract_max(int arr[], int n);
void insert_heapify(int arr[], int n, int i);
void insert_node(int arr[], int n, int key);
void print_array(int arr[], int n);