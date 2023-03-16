#include<iostream>
using namespace std;

void revArr(int *arr, int n){
	cout<<"The array in reverse order is: "<<endl;
	for(int i=n-1; i>=0; i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	cout<<"Enter the size of the array: "<<endl;
	int size;
	cin>>size;
	cout<<"Enter the elements of the array"<<endl;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	revArr(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}