/*
 ============================================================================
 Name        : deleteMult5.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, a[100], j, size;
	setbuf(stdout, NULL);
	printf("enter the size");
	scanf("%d", &size);
	printf("enter the values");
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < size; i++) {
		if (a[i] % 5 == 0) {
			for (j = i; j < size ; j++) {
				a[j] = a[j + 1];
				printf("value of i: inner loop %d\n", i);
			}

		size--;
		--i;
		printf("value of i: outer loop %d s", i);

	}
}


		printf("new array values\n");
		for(i=0;i<size;i++)
		{
		printf("%d ",a[i]);
		}

	return EXIT_SUCCESS;
	}