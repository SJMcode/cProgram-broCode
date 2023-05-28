/*
 ============================================================================
 Name        : pattern20_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, m, count, p=65,num=1;
		setbuf(stdout, NULL);
		printf("Enter no. of rows: ");
		scanf("%d", &m);
	for(i=1; i<=m; i++){

		for(j=1; j<=i; j++){

			if(i%2 == 0){
				printf("%d", num);
				count=1;
			}
			else{
				printf("%c", p);
			}
		}printf("\n");
		if(count==1){
			num++;
		}
		else{
			p++;
		}
	}

	return EXIT_SUCCESS;
}
