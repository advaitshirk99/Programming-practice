#include<iostream>
using namespace std;

int strLen(char *arr){
	int len=0;
	while(*arr != '\0'){
		len++;
		arr++;
	}
	return len;
}

int main(){
	cout<<"Enter the string: "<<endl;
	char *str;
	cin>>str;
	cout<<"The length of string is: "<<strLen(str)<<endl;

	return 0;
}