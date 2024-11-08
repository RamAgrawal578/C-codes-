#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, total, percentage;

    printf("Enter marks of subject 1: ");
    scanf("%f", &s1);
    printf("Enter marks of subject 2: ");
    scanf("%f", &s2);
    printf("Enter marks of subject 3: ");
    scanf("%f", &s3);
    printf("Enter marks of subject 4: ");
    scanf("%f", &s4);
    printf("Enter marks of subject 5: ");
    scanf("%f", &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500) * 100;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
