#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void skipTwoAfterNonPrime(int arr[], int size) {
    int skipped = 0;
    for (int i = 0; i < size; i++) {
        if (!isPrime(arr[i])) {
            skipped = 1;
        }

        if (skipped && i < size - 2) {
            i += 2;
        }

        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {6,8,3,20,30,15,7,4,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Modified Array: ");
    skipTwoAfterNonPrime(arr, size);

    return 0;
}
