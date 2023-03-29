/*
 ============================================================================
 Name        : pattern-1.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,n;
	printf("Enter number of rows\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){

			printf("* ");
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
