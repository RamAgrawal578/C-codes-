#include <stdio.h>

int main() {
    int weekNumber;

    printf("Enter week number (1-7): ");
    scanf("%d", &weekNumber);

    if (weekNumber == 1)
        printf("Monday\n");
    else if (weekNumber == 2)
        printf("Tuesday\n");
    else if (weekNumber == 3)
        printf("Wednesday\n");
    else if (weekNumber == 4)
        printf("Thursday\n");
    else if (weekNumber == 5)
        printf("Friday\n");
    else if (weekNumber == 6)
        printf("Saturday\n");
    else if (weekNumber == 7)
        printf("Sunday\n");
    else
        printf("Invalid week number. Please enter a number between 1 and 7.\n");

    return 0;
}
