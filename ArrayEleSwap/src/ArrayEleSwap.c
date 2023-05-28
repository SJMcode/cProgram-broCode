/*
 ============================================================================
 Name        : ArrayEleSwap.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit, i, a[10], b[10], temp;
	setbuf(stdout, NULL);
	printf("Enter the size of arrays: ");
	scanf("%d", &limit);
	printf("Enter the values of Array 1");
	for (i = 1; i <= limit; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter the values of Array 2");
	for (i = 1; i <= limit; i++) {
		scanf("%d", &b[i]);
	}

	for (i = 1; i <= limit; i++) {

		temp = a[i];
		a[i] = b[i];
		b[i] = temp;

	}
	printf("Arrays after swapping:");
	printf("\nArray 1: ");
	for (i = 1; i <= limit; i++) {
		printf("%d ", a[i]);
	}
	printf("\nArray 2: ");
	for (i = 1; i <= limit; i++) {
		printf("%d ", b[i]);
	}
	return EXIT_SUCCESS;
}
