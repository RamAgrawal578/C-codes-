#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter day, month, and year: ");
    scanf("%d %d %d", &day, &month, &year);

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month < 1 || month > 12) {
        printf("The date %d/%d/%d is not valid.\n", day, month, year);
        return 0;
    }

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
        printf("The date %d/%d/%d is not valid.\n", day, month, year);
    } else {
        printf("The date %d/%d/%d is valid.\n", day, month, year);
    }

    return 0;
}
