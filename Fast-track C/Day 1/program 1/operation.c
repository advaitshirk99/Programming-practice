#include "header.h"

char uppercase_to_lowercase(char ch){
	
	if ( ch < 65 || ch > 90) return "*";

	else return ch + 32;
}
