#include "header.h"

int left_shift(int index){

	if (index == 0) return 1;
	else return 2<<index-1;

}