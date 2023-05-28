/*
 ============================================================================
 Name        : sumOfValueArray.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,arr[10], sum=0;
	printf("Enter array limit");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Sum of array numbers\n");
	for(i=1; i<=n; i++){

		sum=sum+arr[i];
		}
	printf("\nSum of all number in array: %d", sum);
	return EXIT_SUCCESS;
}
