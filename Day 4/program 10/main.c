#include "header.h"
#include<stdio.h>

int main(){

	int day, month, year;
	printf("Enter the day: ");
	scanf ("%d", &day);

	printf("Enter the month: ");
	scanf("%d", &month);

	printf("Enter the year: ");
	scanf("%d", &year);

	worded_format(day, month, year);

	return 0;
}
