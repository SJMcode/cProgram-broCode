/*
 ============================================================================
 Name        : sumFunction.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();

int main(void) {

	sum();

	return EXIT_SUCCESS;
}

void sum(){
	int num1 , num2, sum=0;
	setbuf(stdout, NULL);
	printf("Enter Value of number 1 \n");
	scanf("%d", &num1);
	printf("Enter Value of number 2 \n");
	scanf("%d", &num2);
	sum = num1+num2;

	printf("Sum of two numbers: %d", sum);

}
