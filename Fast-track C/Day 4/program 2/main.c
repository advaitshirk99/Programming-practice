#include<stdio.h>
#include "header.h"

int main(){

	int x, y;
	printf("Enter the values of x and y:\n");
	scanf("%d\n%d", &x, &y);

	swap(x,y);

	return 0;
}