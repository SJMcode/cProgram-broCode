#include <stdio.h>
int main() {
	int a[20];
	int limit, i, j;
	setbuf(stdout, NULL);
	printf("Enter limit: ");
	scanf("%d", &limit);
	printf("Enter array Elements: ");
	for (i = 1; i <= limit; i++) {

		scanf("%d", &a[i]);
	}

	for (i = 0; i < limit; i++) {

		int count = 1;
		if (a[i] == -1)
			continue;
		for (j = i + 1; j <=limit; j++) {

			if (a[i] == a[j]) {
				count++;
				a[j] = -1;
			}
		}
		if (count > 1) {
			printf("%d : %d\n", a[i], count);
		}



	}

	return 0;
}
