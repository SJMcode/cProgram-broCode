/*
 ============================================================================
 Name        : sumFunctionArg.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum(int, int);

int main(void) {
	int a,b;
	setbuf(stdout, NULL);
	printf("Enter number\n");
	scanf("%d%d",&a,&b);
	sum(a, b);

	return EXIT_SUCCESS;
}

void sum(int num1, int num2){
	int result;

	result = num1+num2;

	printf("Sum of two numbers: %d", result);

}