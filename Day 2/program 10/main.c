#include "header.h"
#include<stdio.h>

int main(){

	int choice;

	printf("Enter the number \n \
1 -> To find the volume of the cube.\n \
2 -> To find the volume of the cuboid.\n \
3 -> To find the volume of the sphere.\n \
4 -> To find the volume of the cylinder.\n \
5 -> To find the volume of the cone.\n");
	scanf("%d", &choice);

	select_shape(choice);

	return 0;

}