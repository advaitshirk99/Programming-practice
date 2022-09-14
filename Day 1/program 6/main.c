#include<stdio.h>
#include "header.h"

int main(){

	int year;

	printf("Enter a year: \n");
	scanf("%d", &year);

	check_leap_year(year);

}
