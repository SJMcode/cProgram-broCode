#include <stdio.h>
int main(void) {
	int n, i, j, k;
	setbuf(stdout, NULL);
	printf("enter no of rows: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 2 * i; j++) {
			printf("*");
			if (j % i == 0)
				printf("\n");
		}

		for (k = 1; k <= 3 * i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

