/*
 ============================================================================
 Name        : arrayInsertion.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,pos,value, a[10];
	setbuf(stdout, NULL);
	printf("Enter the limit \n");
	scanf("%d", &n);
	printf("Enter array values");
	for(i=0; i<=n-1; i++ )
		scanf("%d", &a[i]);
	printf("Enter position \n");
	scanf("%d", &pos);
	printf("Enter the value to insert: ");
	scanf("%d", &value);

	for(i=n-1; i>=pos-1; i--){

		a[i+1] = a[i];
	}
		a[pos-1] =value;

	for(i=0; i<=n; i++ )
			printf("%d ", a[i]);

	return EXIT_SUCCESS;
}