/*
 ============================================================================
 Name        : array-1.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[10];

	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}

	for(int i=0; i<10; i++){
			printf("%d\n", a[i]);
		}


	return EXIT_SUCCESS;
}
