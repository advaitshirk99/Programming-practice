#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a, b;
	cout<<"Enter the two numbers: "<<endl;
	cin>>a>>b;
	cout<<"Numbers before swapping: "<<a<<" "<<b<<endl;
	swap(a, b);
	cout<<"Numbers after swapping: "<<a<<" "<<b<<endl;

	return 0;
}