/*
 ============================================================================
 Name        : pattern18_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,k,m,p;
	setbuf(stdout, NULL);
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	for(i=1; i<=m;i++){
		p=1;
		for(j=1; j<=i; j++){
			printf(" ");
		}
		for(k=i; k<=m; k++){
			printf("%d ", p*i);
			p++;
		}printf("\n");
	}

	return EXIT_SUCCESS;
}
