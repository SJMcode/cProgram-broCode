/*
 ============================================================================
 Name        : prime.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i, flag=0;

	printf("Enter Number\n");
	scanf("%d", &n);

	for(i=2; i<n/2; i++){

		if(n%i == 0){
			flag=1;
		}
	}
	if(flag==0){
		printf("%d is prime\n", n);
	}
	else{
		printf("%d is not prime\n", n);
	}
	return EXIT_SUCCESS;
}
