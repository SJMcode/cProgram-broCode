#include <stdio.h>

int main() {
    int number;
    setbuf(stdout, NULL);
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Input: %d\n", number);
    printf("Output:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, number, i * number);
    }

    return 0;
}
