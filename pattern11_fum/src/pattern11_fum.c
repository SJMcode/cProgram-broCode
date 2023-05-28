/*
 ============================================================================
 Name        : pattern11_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,m,n;
						setbuf(stdout, NULL);
						printf("Enter no. of rows : \n");
						scanf("%d", &m);
						n=2*m-1;
						for(i=1; i<=n; i++){

							for(j=1; j<=n; j++){

								if(i==j || j==(n-i+1)){
									printf("*");
								}
								else{
									printf(" ");
								}
							}printf("\n");


						}


	return EXIT_SUCCESS;
}
