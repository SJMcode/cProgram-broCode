#include <stdio.h>

int main() {
    int limit;
    int sum = 0;
    setbuf(stdout, NULL);
    printf("Enter a limit: ");
    scanf("%d", &limit);

    printf("Input: %d\n", limit);

    for (int i = 1; i <= limit; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}