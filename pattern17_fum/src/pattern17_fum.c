/*
 ============================================================================
 Name        : pattern17_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,k,m;
	setbuf(stdout, NULL);
	printf("Enter rows: ");
	scanf("%d", &m);

	for(i=1; i<=m; i++){
		for(j=1; j<=i; j++){
			printf(" ");
		}
		for(k=1; k<=m; k++){
			printf("* ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
