#include <stdio.h>

int main(void) {
    int num1;
    float num2, sum;
    setbuf(stdout, NULL);
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("The sum is: %.2f\n", sum);

    return 0;
}
