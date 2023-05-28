/*
 ============================================================================
 Name        : pattern26.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, limit=65,arr1[10];
					setbuf(stdout, NULL);
					printf("Enter limit: ");
					scanf("%d", &limit);

					for(i=1; i<=limit; i++){
						for(j=1; j<=i; j++){

							printf("%c ",64+j);
						}
						printf("\n");
					}



	return EXIT_SUCCESS;
}
