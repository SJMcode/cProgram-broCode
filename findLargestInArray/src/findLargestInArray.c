/*
 ============================================================================
 Name        : findLargestInArray.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,max,n, a[5];
	setbuf(stdout, NULL);

	n=sizeof(a);
	printf("Enter array elements: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("size of Array: %d", n);
	for(i=0; i<n; i++){
		if(max<a[i])
			max=a[i];

	}
	printf("largest element in Array: %d", max);

	return EXIT_SUCCESS;
}
