#include<stdio.h>
#include "header.h"

int main(){

	int units;
	float total_cost;

	printf("Enter the units consumed:\n");
	scanf("%d", &units);

	total_cost = consumption_cost(units);

	printf("The cost for %d units is %.2f\n", units, total_cost);

	return 0;
}