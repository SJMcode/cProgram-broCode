/*
 ============================================================================
 Name        : arrayDeletion.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	 int array[100], position, i, n, num;
	 setbuf(stdout, NULL);
	  printf("Enter number of elements in array\n");
	  scanf("%d", &n);
	  printf("Enter array elements:\n");
	   for (i = 0; i < n; i++)
	     scanf("%d", &array[i]);
	  printf("Enter the location from where you wish to delete the element:\n");
	  scanf("%d", &position);

	  num = array[position-1];
	   if (position >= n+1 || position < 0)         /*n+1, since user will count element as position 1
	    onwards. Internally though indexing starts from 0,
	    which user would not know.*/
	     printf("Deletion not possible as entered location is invalid.\n");
	  else
	  {
	     for (i = position - 1; i < n - 1; i++)
	        array[i] = array[i+1];
	     printf("Resultant array after deletion of element %d from location %d:\n", num, position);
	     for (i = 0; i < n - 1; i++)
	        printf("%d\n", array[i]);
	  }
	  return 0;
	}
