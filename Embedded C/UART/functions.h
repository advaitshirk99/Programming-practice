#include<lpc214x.h>
#include<stdint.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int isPalindrome(char *str){
	unsigned int length = strlen(str);
	unsigned int i=0;
	length -= 1;
	while(i < length){
		if(str[i++] != str[length--]) return 1;
	}
	return 0;
}

int isArmstrong(char *num){
	unsigned int i, rem, q, sum = 0;
	i = atoi(num);
	q = i/10;
	rem = i%10;
	while(q != 0){
		sum += (rem*rem*rem);
		rem = q/10;
		q = q/10;
	}
	if(i == sum) return 1;
	else return 0;
}
