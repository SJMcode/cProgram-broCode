/*
 ============================================================================
 Name        : array-1.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,a[10];
	setbuf(stdout, NULL);
	printf("\n\nRead n number of values in an array and display it in reverse order:\n");
	printf("Input the number of elements :");
	   scanf("%d",&n);

	   printf("Input number of elements in the array :\n");
	      for(i=0;i<n;i++)
	         {
	   	  printf("element - %d : ",i);
	   	  scanf("%d",&a[i]);
	   	  }

	     printf("Numbers in reverse order :\n");

	      for(int i=n-1; i>=0; i--){
	    	  printf("%d ", a[i]);
	      }

	return EXIT_SUCCESS;
}
