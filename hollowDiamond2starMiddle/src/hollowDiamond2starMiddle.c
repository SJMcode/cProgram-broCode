/*
 ============================================================================
 Name        : leftArrowPattern.c
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

	printf("Enter rows for hollow diamond: ");
	scanf("%d", &n);
n=n-1;

	for(i=0; i<=n; i++){

		for(j=0; j<=2*n+1; j++){

			if((n-i < j)&&( j<n+i+1))
				printf("  ");
			else
				printf("* ");
		}
		printf("\n");
	}
	for(i=0; i<=n; i++){

			for(j=0; j<=2*n+1; j++){

				if((i < j)&&( j<2*n+1-i))
					printf("  ");
				else
					printf("* ");
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}
