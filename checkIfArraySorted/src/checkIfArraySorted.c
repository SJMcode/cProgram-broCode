/*
 ============================================================================
 Name        : ArraySort.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n, a[5],flag;
	setbuf(stdout, NULL);

	n=sizeof(a)/sizeof(a[0]);
	printf("Enter array elements: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("size of Array: %d\n", n);

	for(i=1; i<n; i++){

			if(a[i] < a[i-1])
				flag=1;
				break;

	}

	if(flag==1){

				printf("Array not sorted");
	}
	else {
		printf("Array sorted");
	}


	return EXIT_SUCCESS;
}