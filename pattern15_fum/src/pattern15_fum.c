/*
 ============================================================================
 Name        : pattern15_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,m,n,k;
	setbuf(stdout, NULL);
	printf("Number of rows: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		m=1;
		for(j=i; j<=n; j++){
			printf("-");
		}
		for(k=1; k<=i; k++){
			printf("%d ", m);
			m++;
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
