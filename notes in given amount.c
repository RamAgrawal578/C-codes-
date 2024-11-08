#include <stdio.h>

int main() {
    int amount;
    int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes1 = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 100) {
        notes100 = amount / 100;
        amount %= 100;
    } else {
        notes100 = 0;
    }

    if (amount >= 50) {
        notes50 = amount / 50;
        amount %= 50;
    } else {
        notes50 = 0;
    }

    if (amount >= 20) {
        notes20 = amount / 20;
        amount %= 20;
    } else {
        notes20 = 0;
    }

    if (amount >= 10) {
        notes10 = amount / 10;
        amount %= 10;
    } else {
        notes10 = 0;
    }

    if (amount >= 5) {
        notes5 = amount / 5;
        amount %= 5;
    } else {
        notes5 = 0;
    }

    if (amount >= 1) {
        notes1 = amount / 1;
        amount %= 1;
    } else {
        notes1 = 0;
    }

    printf("Notes of 100: %d\n", notes100);
    printf("Notes of 50: %d\n", notes50);
    printf("Notes of 20: %d\n", notes20);
    printf("Notes of 10: %d\n", notes10);
    printf("Notes of 5: %d\n", notes5);
    printf("Notes of 1: %d\n", notes1);

    return 0;
}
