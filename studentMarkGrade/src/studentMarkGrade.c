#include <stdio.h>

int main() {
    float total_mark;
    setbuf(stdout, NULL);
    printf("Enter the student's Total marks: ");
    scanf("%f", &total_mark);

    if (total_mark >= 90) {
        printf("Grade: A\n");
    } else if (total_mark >= 80 && total_mark <= 89) {
        printf("Grade: B\n");
    } else if (total_mark >= 70 && total_mark <= 79) {
        printf("Grade: C\n");
    } else if (total_mark >= 60 && total_mark <= 69) {
        printf("Grade: D\n");
    } else if (total_mark >= 50 && total_mark <= 59) {
        printf("Grade: E\n");
    } else {
        printf("Grade: Failed\n");
    }

    return 0;
}