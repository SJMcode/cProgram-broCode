/*
 ============================================================================
 Name        : switch.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c;
	printf("1. meals\n 2. lunch \3. dinner\n");
	printf("Enter your choice\n");
	scanf("%d", &c);
	switch(c){
	case 1:
		printf("You have selected meals\n");
		break;

	case 2:

			printf("You have selected lunch\n");
			break;
	case 3:

			printf("You have selected dinner\n");
			break;
	default:
		printf("you have selected default choice : appam");
		break;

	}


	return 0;
}
