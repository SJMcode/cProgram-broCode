/*
 ============================================================================
 Name        : ButterflyPattern.c
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




		//DOWN ARROW

		for(i=0; i<=n; i++){

				for(j=-n; j<=n; j++){

					//up arrow condition : -i < j && j < i
					// down arrow condition : -(n-i) < j && j < (n-i)
					if(-(n-i) < j && j < (n-i))
						printf("  ");
					else
						printf("* ");
				}


					printf("\n");
				}


		for(i=0; i<=n; i++){

		for(j=-n; j<=n; j++){

			//up arrow condition : -i < j && j < i
			// down arrow condition : -(n-i) < j && j < (n-i)
			if((-(i)<j)  && j<(i) )
				printf("  ");
			else
				printf("* ");
		}


			printf("\n");
		}

	return EXIT_SUCCESS;
}
