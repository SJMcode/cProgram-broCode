#include <stdio.h>

void printCrossroads(int count, char s[100]) {

	if (count < 8) {
		printf("%s \n", s);
		printCrossroads(count + 1, s);
	}
}

int main() {
	char s[100];
	setbuf(stdout, NULL);
	printf("Enter the word: \n");
	scanf("%s", &s);
	printCrossroads(1, s);
	return 0;
}
