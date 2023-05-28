/*
 ============================================================================
 Name        : pattern25_fum_assignmentQn.c
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
	printf("Enter rows: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=(2*i); j++){
			printf("* ");
		}

		printf("\n");
		if(i==n)
			break;
		for(k=1; k<=(3*i); k++){
			printf("*\n");
		}
	}
	return EXIT_SUCCESS;
}
