a#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D;
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;

    if (D > 0) {
        printf("Roots are real and distinct: %.2f and %.2f\n", (-b + sqrt(D)) / (2 * a), (-b - sqrt(D)) / (2 * a));
    } else if (D == 0) {
        printf("Root is real and equal: %.2f\n", -b / (2 * a));
    } else {
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", -b / (2 * a), sqrt(-D) / (2 * a), -b / (2 * a), sqrt(-D) / (2 * a));
    }

    return 0;
}