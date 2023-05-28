/*
 ============================================================================
 Name        : breakContinue.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;

	for(i=1; i<10; i++){

		printf("HI\n");
		//if(i==5){break;}
		if(i==5){printf("%d\n",i);continue;}
	}

	printf("HELLO\n");

	return EXIT_SUCCESS;
}
