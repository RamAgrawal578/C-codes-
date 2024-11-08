#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char citizenship[4];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (yes/no): ");
    scanf("%s", citizenship);

    if (age >= 18 && strcmp(citizenship, "yes") == 0)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}
