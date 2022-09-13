#include "header.h"
#include<stdio.h>

float fahrenheit_to_celcius(float fahrenheit){

	return (fahrenheit - 32) * 5 / 9;

}

float celcius_to_fahrenheit(float celcius){

	return (celcius * 9) / 5 + 32;

}



