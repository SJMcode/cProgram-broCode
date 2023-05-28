/*
 ============================================================================
 Name        : arraySum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, limit, arr[10],sum=0;
	setbuf(stdout, NULL);
	printf("Limit");
	scanf("%d", &limit);
	printf("Enter values for array:");
	for (i = 1; i <= limit; i++) {

		scanf("%d", &arr[i]);
	}

	for(i=1; i<=limit; i++){

		sum=sum+arr[i];
	}

	printf("Array sum is: %d : ", sum);
	return EXIT_SUCCESS;
}
