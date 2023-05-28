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

	int i,j,n;
	setbuf(stdout, NULL);

	printf("Enter rows: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){

		for(j=1; j<=n; j++){

			if(i==1 || j==1 || i==n || j==n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
