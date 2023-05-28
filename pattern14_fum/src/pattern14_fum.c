/*
 ============================================================================
 Name        : pattern14_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,n,m,k;
	setbuf(stdout, NULL);

	printf("Enter number of rows: ");
	scanf("%d", &n);
	m=n;

	for(i=1; i<=n; i++){

		for(j=1; j<=(m-1); j++){
			printf(" ");
		}
		for(k=1; k<=(2*i-1); k++){
			printf("*");
		}
		m--;
		printf("\n");
	}

	return EXIT_SUCCESS;
}
