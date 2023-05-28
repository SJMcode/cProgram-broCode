/*
 ============================================================================
 Name        : leftArrowPattern.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,n,l;
	setbuf(stdout, NULL);

	printf("Enter rows: ");
	scanf("%d", &n);


	for(i=-n; i<=n; i++){

		if(i<0)
			l=-i;
		else
			l=i;

		for(j=0; j<l+1; j++){
			printf("* ");
		}


		printf("\n");
	}

	return EXIT_SUCCESS;
}
