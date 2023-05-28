/*
 ============================================================================
 Name        : selectionSort1.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,limit,temp, arr[10];
		setbuf(stdout, NULL);
		printf("Enter the size of an array ");
		scanf("%d", &limit);
		printf(" Enter the values of array ");
			for(i=1; i<=limit; i++){

				scanf("%d", &arr[i]);
			}

			for(i=1; i<=limit-1; i++){
				for(j=i+1; j<=limit; j++){

					if(arr[i] < arr[j]){
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}

			printf("Sorted array: ");
			for(i=1; i<=limit; i++){

							printf("%d,", arr[i]);
						}

	return EXIT_SUCCESS;
}
