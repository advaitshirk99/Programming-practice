#include<iostream>
#include<array>
using namespace std;

int findMaxEle(int *arr, int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int main(){
    int arr[] = {20, 12, 32, 91, 66, 36};
    int max = findMaxEle(arr, sizeof(arr)/sizeof(arr[0]));
    cout<<"Max element is: "<<max<<endl;
    return 0;
}
