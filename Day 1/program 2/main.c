#include<stdio.h>
#include "header.h"

int main()
{

	float rad, area;
	
	printf("Enter the radius: \n");
	scanf("%f", &rad);

	area = area_of_circle(rad);

	printf("Area of the circle of radius %.2f units is: %.2f \n", rad, area);

	return 0;
}