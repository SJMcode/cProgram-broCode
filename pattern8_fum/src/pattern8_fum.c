/*
 ============================================================================
 Name        : pattern8_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,k,n;
			setbuf(stdout, NULL);
			printf("Enter no. of rows : \n");
			scanf("%d", &n);

			for(i=1; i<=n; i++){

				if(i%2 == 0){
					printf("*****");
					printf("\n");
				}
				else{
					printf("***");
					printf("\n");
				}
				if(i==n)
					break;
				for(k=1; k<=2; k++){
					printf("*");
					printf("\n");
				}

			}

	return EXIT_SUCCESS;
}
