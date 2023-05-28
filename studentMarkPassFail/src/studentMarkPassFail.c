#include <stdio.h>

int main() {
    float mark;
    setbuf(stdout, NULL);
    printf("Enter the student's mark: ");
    scanf("%f", &mark);

    if (mark >= 50) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}
