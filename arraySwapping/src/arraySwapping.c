/*
 ============================================================================
 Name        : arraySwapping.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,limit, arr1[10],arr2[10];
	setbuf(stdout, NULL);
	printf("Limit");
	scanf("%d", &limit);
	printf("Enter values for array:1");
		for(i=1; i<=limit; i++){

			scanf("%d", &arr1[i]);
		}
		printf("Enter values for array:2");
			for(i=1; i<=limit; i++){

				scanf("%d", &arr2[i]);
			}



	return EXIT_SUCCESS;
}
