/*
 ============================================================================
 Name        : deleteEleArray.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,j, a[100];
	setbuf(stdout, NULL);
	printf("Enter limit: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for(int i=0; i<n; i++){

		scanf("%d", &a[i]);
	}

	for(int i=0; i<n; i++){

		for(j=i; j<n; j++){

			if(a[i] % 2 ==0){
				for(int k=i; k<n; k++){
					a[k] =a[k+1];
				}

			j--;
			n--;
			}
		}
		}
	for(int i=0; i<n; i++){

			printf("%d ", a[i]);
		}

	return EXIT_SUCCESS;
}
