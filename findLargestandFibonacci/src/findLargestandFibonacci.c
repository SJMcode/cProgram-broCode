/*
 ============================================================================
 Name        : findLargestandFibonacci.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int findlargest(int a[10], int n, int largest);
int fibonacci(int c);

int main(void) {
int i,largest, a[10], n,c,fibo;
setbuf(stdout, NULL);
printf("Enter array size");
scanf("%d", &n);

printf("Enter array: ");

	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	largest = a[0];
	n = sizeof(a)/ sizeof(a[0]);
c = findlargest(a, n, largest);
fibo = fibonacci(c);

	return EXIT_SUCCESS;
}


int findlargest(int a[10], int n, int largest){


		for(int i=0; i<n; i++){

			if(a[i]> largest)
				largest = a[i];
		}


		return largest;
	}
int fibonacci(int c){

	int fibo=1;
	for (int i=1; i<c; i++){
		fibo*=i;
	}
	return fibo;

}