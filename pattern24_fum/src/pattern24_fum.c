/*
 ============================================================================
 Name        : pattern24_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, limit;
				setbuf(stdout, NULL);
				printf("Enter limit: ");
				scanf("%d", &limit);

				for(i=1; i<=limit; i++){
					for(j=1; j<=((i-1)*2+1); j++){

						printf("* ");
					}
					printf("\n");
				}


	return EXIT_SUCCESS;
}
