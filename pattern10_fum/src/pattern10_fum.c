/*
 ============================================================================
 Name        : pattern10_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,k,n;
					setbuf(stdout, NULL);
					printf("Enter no. of rows : \n");
					scanf("%d", &n);

					for(i=1; i<=n; i++){


											for(j=1; j<=(5*i); j++){
												printf("* ");

											}printf("\n");

											for(k=1;k<=2*i;k++)
											 {
											 printf("*\n");
											 }

					}



	return EXIT_SUCCESS;
}
