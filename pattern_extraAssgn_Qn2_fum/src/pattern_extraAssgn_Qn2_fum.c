/*
 ============================================================================
 Name        : pattern_extraAssgn_Qn2_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, m;
	setbuf(stdout, NULL);
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	for (i = 1; i <= m; i++) {
		for (j = i; j <= m; j++) {
			printf("-");
		}

		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}

		for (j = i - 1; j >= 1; j--) {
			printf("%d ", j);
		}

		printf("\n");
	}
	return 0;
}




//	In this program, the printPattern function takes the number of rows as a parameter and prints the desired pattern. The outer loop i is used to iterate over the rows.
//
//	Inside the loop, the first inner loop j is used to print the required spaces before the numbers. The number of spaces decreases with each row.
//
//	The second inner loop j is used to print the numbers in increasing order from 1 to i.
//
//	The third inner loop j is used to print the numbers in decreasing order from i-1 to 1.
//
//	Finally, the number 1 is printed at the end of each row.
//
//	In the main function, we set rows to 6 to print the pattern with 6 rows as shown in your example.

