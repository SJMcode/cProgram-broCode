/*
 ============================================================================
 Name        : multiplyAdjescentnumbers_array.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,a[100], c[100];
	setbuf(stdout, NULL);
	printf("Enter limit");
	scanf("%d", &n);

	printf("Enter array numbers: ");
	for(i=0; i<n; i++){
		scanf("%d",& a[i]);
	}

	for(i=0; i<n-1; i++){
		c[i] = a[i] * a[i+1];
		printf("%d ", c[i]);
	}


	return EXIT_SUCCESS;
}
