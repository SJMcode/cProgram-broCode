/*
 ============================================================================
 Name        : patternQninExtraAsgnmnts.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,n,k;
	setbuf(stdout, NULL);

	printf("Enter limit");
	scanf("%d", &n);

	for(i=0; i<n; i++){

		for(j=n-1; j>0; j--){

		}
		for(k=0; k<=i; k++){

			printf("*\n");
		}
	}

	return EXIT_SUCCESS;
}
