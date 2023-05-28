/*
 ============================================================================
 Name        : 2dArray_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j, a[5][5];
	setbuf(stdout, NULL);
	printf("Enter array values: ");
	for(i=0;i<2;i++){
			for(j=0; j<2;j++){
	scanf("%d", &a[i][j]);
			}
	}
	for(i=0;i<2;i++){
		for(j=0; j<2;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
