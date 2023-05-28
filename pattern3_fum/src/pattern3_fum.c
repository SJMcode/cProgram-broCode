/*
 ============================================================================
 Name        : pattern3_fum.c
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
	setbuf(stdout, NULL);
	printf("Enter number of rows: \n");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		printf("*\n");
		for(j=1; j<=i; j++){
			printf("* * * \n");
		}

	}



	return EXIT_SUCCESS;
}
