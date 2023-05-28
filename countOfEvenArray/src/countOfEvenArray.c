/*
 ============================================================================
 Name        : countOfEvenArray.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit, i, a[10],count=0;
		setbuf(stdout, NULL);
		printf("Enter the size of an array ");
		scanf("%d", &limit);
		printf("Enter the values of array ");
		for (i = 1; i <= limit; i++) {
			scanf("%d", &a[i]);
		}
			for (i = 1; i <= limit; i++) {

				if(a[i]%2 == 0){
					count++;}
				}

		printf("Number of even numbers in the given array is %d", count);
	return EXIT_SUCCESS;
			}

