#include <stdio.h>
#include <math.h>

int main() {
    int N;

    printf("Enter an integer: ");
    scanf("%d", &N);

    printf("N^1 = %.0f\n", pow(N, 1));
    printf("N^2 = %.0f\n", pow(N, 2));
    printf("N^3 = %.0f\n", pow(N, 3));

    return 0;
}
