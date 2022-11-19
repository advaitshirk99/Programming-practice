#include<math.h>
#include "header.h"

float simple_interest(float principal, float rate_of_interest, int time){

	return principal*rate_of_interest*time/100;

}

float compound_interest(float principal, float rate_of_interest, int time, int compounding_frequency){

	return (principal * pow((1 + (rate_of_interest/compounding_frequency)), (compounding_frequency / (float)time)) - principal);

}