/*
 ============================================================================
 Name        : pattern22_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, limit;
		setbuf(stdout, NULL);
		printf("Enter limit: ");
		scanf("%d", &limit);

		for (i = 0; i < limit; i++) {

				for (j = 0; j <= i; j++) {

					printf("%d ",i+1);
				}
				printf("\n");

		}


		return EXIT_SUCCESS;
}
