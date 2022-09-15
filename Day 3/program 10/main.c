#include "header.h"
#include<stdio.h>

int main(){

	int choice;

	printf("Enter the number \n \
1 -> To find the square root of a number.\n \
2 -> To find the natural log of a number.\n \
3 -> To find the log base 10 of a number.\n \
4 -> To find the power of a number.\n \
5 -> To find the cosine of a radian angle.\n");
	scanf("%d", &choice);

	select_operation(choice);

	return 0;
}