/*
 ============================================================================
 Name        : pattern19_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, m;
	setbuf(stdout, NULL);
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	for (i = m - 1; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
