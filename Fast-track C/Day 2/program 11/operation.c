#include "header.h"

float consumption_cost(int units){

	float cost=0;

	if (units<200){

		return units * 1.00;

	}

	else if (units>200 && units<300){

		return 200 + (units - 200) * 1.5;

	}

	else return 350 + (units - 300) * 2;

}