/*
 ============================================================================
 Name        : pattern12_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int i,j,m=1,n;
							setbuf(stdout, NULL);
							printf("Enter no. of rows : \n");
							scanf("%d", &n);
				for(i=1; i<=n; i++){
					for(j=1; j<=pow(2,i); j++){
						printf("* " );
					}printf("\n");
					for(int k=1; k<=m; k++){
						printf("*\n");
					}m=m+2;
				}


	return EXIT_SUCCESS;
}
