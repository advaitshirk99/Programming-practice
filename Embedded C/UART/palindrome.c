#include<lpc214x.h>
#include<stdint.h>
#include "functions.h"
#include "pll.h"
#include "uart.h"

int main(){
	char *temp;
	init_pll();
	init_uart0();
	char *str1 = "Palindrome";
	char *str2 = "Not palindrome";
	while(1){
		temp = receive_string_uart0();
		if(!isPalindrome(temp)){
			transmit_string_uart0(str1);
		}
		if(isPalindrome(temp)){
			transmit_string_uart0(str2);
		}
	}
}
