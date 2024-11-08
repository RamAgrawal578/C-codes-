#include <stdio.h>

int main() {
    int N;

    printf("Enter an integer: ");
    scanf("%d", &N);

    printf("N^1 = %d\n", N);
    printf("N^2 = %d\n", N * N);
    printf("N^3 = %d\n", N * N * N);

    return 0;
}
