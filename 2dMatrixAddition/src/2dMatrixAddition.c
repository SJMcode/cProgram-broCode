/*
 ============================================================================
 Name        : 2dMatrixAddition.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, limit, arr1[50][50], arr2[50][50], sum = 0;
	setbuf(stdout, NULL);
	printf("Enter the size of an arrays ");
	scanf("%d", &limit);
	printf("Enter the values of array 1:  \n");
	for (i = 0; i <limit; i++) {
		for (j = 0; j <limit; j++) {

		scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter the values of array 2 \n");
	for (i = 0; i < limit; i++) {
			for (j = 0; j <limit; j++) {

			scanf("%d", &arr2[i][j]);
			}
		}

	printf("array 1: ");

	printf("Sum of 2 arrays is: \n");

	for (i = 0; i < limit; i++) {
			for (j = 0; j < limit; j++) {

			sum = arr1[i][j] + arr2[i][j];
			printf("%d ", sum);
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}


