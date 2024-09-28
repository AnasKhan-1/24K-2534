#include <stdio.h>

int main() {
    int Age = 0;
    char Is_Citizen;

    printf("Enter your age: ");
    scanf("%d", &Age);

    printf("Are you a citizen of Pakistan? Y or N: ");
    scanf(" %c", &Is_Citizen);

    if (Age >= 18 && (Is_Citizen == 'y' || Is_Citizen == 'Y')) {
        printf("You are eligible to vote\n");
    } else {
        printf("You are not eligible to vote\n");
    }

    return 0;
}

