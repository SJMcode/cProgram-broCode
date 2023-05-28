/*
 ============================================================================
 Name        : pattern16_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j;
	setbuf(stdout, NULL);

	char arr[6] ={'I','N','D','I','A'};
	for(i=1; i<=5; i++){
		for(j=0; j<i; j++){
			printf("%c", arr[j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
