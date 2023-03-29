/*
 ============================================================================
 Name        : sumofnumbers.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, sum=0;
	printf("\nEnter limit\n");
	scanf("%d", &n);

	for(int i=1; i<=n; i++){

		if(n%2 == 0){
		sum=sum+i;

		}
	}

	printf("Sum of first %d even numbers is %d: ", n, sum);


return 0;
}
