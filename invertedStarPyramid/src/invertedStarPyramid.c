/*
 ============================================================================
 Name        : pattern26_box.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,n,s;
	setbuf(stdout, NULL);

	printf("Enter rows: ");
	scanf("%d", &n);

	for(i=0; i<n; i++){

		for(s=0; s<((2*i)+1); s++){


				printf("* ");
		}
		for(j=0; j<(n-i-1); j++){


				printf(" ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
