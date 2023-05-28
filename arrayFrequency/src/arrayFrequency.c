#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[] = {1, 2, 3, 2, 1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int frequency[MAX_SIZE] = {0};

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] > 0) {

            printf("Frequency of %d: %d\n", i, frequency[i]);
        }
    }

    return 0;
}