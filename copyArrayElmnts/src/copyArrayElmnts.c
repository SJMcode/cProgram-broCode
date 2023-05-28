/*
 ============================================================================
 Name        : copyArrayElmnts.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[100],b[100],i,limit;
	setbuf(stdout, NULL);
		printf("Limit");
		scanf("%d", &limit);
		printf("Enter values for array:");
		for (i = 1; i <= limit; i++) {

			scanf("%d", &a[i]);
		}


		for (i = 1; i <= limit; i++) {

					b[i]=a[i];
				}
		printf("Array 1: ");
		for (i = 1; i <= limit; i++) {

					printf("%d ", a[i]);
				}
		printf("\nArray 2: ");
		for (i = 1; i <= limit; i++) {

					printf("%d ", b[i]);
				}


	return EXIT_SUCCESS;
}
