/*
 ============================================================================
 Name        : pattern_incrementing.c
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
	printf("Enter rows: ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			printf("%d ", j+1);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
