#include "header.h"
#include<stdio.h>

char* w_day(int day){
	
	switch(day){
	
		case 1: return "st";
		case 2: return "nd";
		case 3: return "rd";
		default: return "th";
	}
}

char* w_month(int month){

	switch(month){
	
		case 1: return "January";
		case 2: return "February";
		case 3: return "March";
		case 4: return "April";
		case 5: return "May";
		case 6: return "June";
		case 7: return "July";
		case 8: return "August";
		case 9: return "September";
		case 10: return "October";
		case 11: return "November";
		case 12: return "December";
		default: return "Invalid";
	}
}
void worded_format(int day, int month, int year){

	printf("\nThe date in worded format is:\n");
	printf("%d%s %s, %d.\n", day, w_day(day), w_month(month), year);
}
