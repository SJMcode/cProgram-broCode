#include <stdio.h>

int main() {

	int i, j, n;
	setbuf(stdout, NULL);

	printf("Enter rows: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++) {

			/*
			 * print numbers diagonal ->
			 *
			 */

			if(i == j){
				printf("%d ", i+1);
			}
			else if(n == j+i+1){
				printf("%d ", j+1);
			}

			else
				printf("  ");


//			if((i == j) || (n == j+i+1))
//				printf("* ");
//			else
//				printf("  ");
		}

		printf("\n");

	}
		return 0;

}