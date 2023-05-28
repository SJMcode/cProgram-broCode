/*
 ============================================================================
 Name        : pattern23_fum.c
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

			for(i=limit; i>=1; i--){
				for(j=i; j<=limit; j++){

					printf("%d ",j);
				}
				printf("\n");
			}

	return EXIT_SUCCESS;
}
