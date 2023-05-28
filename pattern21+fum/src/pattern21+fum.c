/*
 ============================================================================
 Name        : pattern21+fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, k, l, limit;
	setbuf(stdout, NULL);
	printf("Enter limit: ");
	scanf("%d", &limit);

	for (i = 1; i <= limit; i++) {

		for (j = 1; j <= (2 * i - 1); j++) {

			printf("* ");
		}
		printf("\n");

		for (k = 1; k <= i; k++) {

			for (l = 1; l <= i; l++) {

				printf("* ");
			}
			printf("\n");
		}
	}

	return EXIT_SUCCESS;
}
