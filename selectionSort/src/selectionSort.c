/*
 ============================================================================
 Name        : selectionSort.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j, arr[100],limit, temp;
		setbuf(stdout, NULL);
		printf("Enter array limit\n");
		//fflush(stdout);
		scanf("%d",&limit);
		printf("Enter array values\n");
		//fflush(stdout);
		for(i=0; i<limit; i++ ){
			scanf("%d",&arr[i]);
		}

		for(i=0; i<limit; i++){
			for( j=i+1; j<limit; j++){
				if(arr[i] > arr[j]){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		printf("\nSorted array: \n");
		//fflush(stdout);
		for(i=0; i<limit; i++ ){
					printf("\t%d\n",arr[i]);
					//fflush(stdout);
				}

	return EXIT_SUCCESS;
}
