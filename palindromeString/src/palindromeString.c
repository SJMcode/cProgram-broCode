/*
 ============================================================================
 Name        : palindromeString.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {


	char str[50];
	int len,i,flag=0;
	setbuf(stdout, NULL);
	printf("Enter the string: \n");
	gets(str);
	len = strlen(str);
	for(i=0; i<len/2; i++){
		if(str[i]!=str[len-i-1]){
			flag=1;
			break;
		}
	}

	if(flag==0)
		printf("Entered string is a palindrome");
	else
		printf("Entered string is not palindrome");

	return EXIT_SUCCESS;
}