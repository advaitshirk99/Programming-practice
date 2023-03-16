#include<iostream>
using namespace std;

int sumDigits(int num){
	int sum=0;
	while(num != 0){
		int r = num%10;
		sum += r;
		num /= 10;
	}
	return sum;
}

int main(){
	cout<<"Enter the number: "<<endl;
	int num;
	cin>>num;
	cout<<"The sum of the digits of "<<num<<" is: "<<sumDigits(num)<<endl;

	return 0;
}