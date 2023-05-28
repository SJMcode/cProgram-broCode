/*
 ============================================================================
 Name        : pattern5_fum.c
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
	printf("Number of rows: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){

		for(j=1; j<=(4*i); j++){
		printf("* ");


		}printf("\n");
		if(n==i)
			break;
		for(k=1; k<=i+1; k++){
			printf("* ");}
		printf("\n");
		}
			return EXIT_SUCCESS;
}
