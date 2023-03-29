/*
 ============================================================================
 Name        : multArray.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j, arr[3][3];
			setbuf(stdout, NULL);

			printf("Enter values \n");
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){

					scanf("%d", &arr[i][j]);
				}
			}

			for(i=0; i<3; i++){
							for(j=0; j<3; j++){

								printf("%d\t", arr[i][j]);
							}
							printf("\n");
						}

	return EXIT_SUCCESS;
}
