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

	int i,j,n,l,s;
	setbuf(stdout, NULL);

	printf("Enter rows: ");
	scanf("%d", &n);


	for(i=-n; i<=n; i++){

		if(i<0)
			l=-i;
		else
			l=i;

		for(s=0; s<l; s++){
					printf(" ");
				}
		for(j=0; j<(n-l)+1; j++){
//			printf("%d%d", l,j);
//		}
			if(j==0)
				printf("* ");
			else if(l+j == n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
