#include <stdio.h>

int main() {
    int n, i, j;
setbuf(stdout, NULL);
    printf("Enter the number of rows (should be an odd number): ");
    scanf("%d", &n);

    // Upper half of the butterfly pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n; j++) {
            // Print stars in the first half of each row
            if (j <= i || j > 2 * n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half of the butterfly pattern
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= 2 * n; j++) {
            // Print stars in the second half of each row
            if (j <= i || j > 2 * n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
