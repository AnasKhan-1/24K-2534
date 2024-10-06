#include <stdio.h>

int main() {
    int Number, LastDigit, ReversedNumber = 0;

    printf("Enter number to be reversed: ");
    scanf("%d", &Number);

    do {
        LastDigit = Number % 10;
        ReversedNumber = ReversedNumber * 10 + LastDigit;
        Number = Number / 10;
    } while (Number != 0);

    printf("Reversed Number: %d\n", ReversedNumber);

    return 0;
}

