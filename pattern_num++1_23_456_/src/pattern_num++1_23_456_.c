/*
 ============================================================================
 Name        : pattern_num++1_23_456_.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,j, num=1;
	setbuf(stdout, NULL);
	printf("Enter number of Rows: ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){

			printf("%d ", num);
			num++;
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}