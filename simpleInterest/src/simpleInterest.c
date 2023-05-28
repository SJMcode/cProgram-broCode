/*
 ============================================================================
 Name        : simpleInterest.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int p;
	float r, n, si;
	setbuf(stdout, NULL);
	printf("Enter principle amount: ");
	scanf("%d", &p);
	printf("Enter interest rate");
	scanf("%f", &r);
	printf("Enter number of years: ");
	scanf("%f", &n);
	printf("Simple interest for the entered amount is: ");
	si = (p * r * n) / 100;
	printf("%.2f ", si);

	return EXIT_SUCCESS;
}
