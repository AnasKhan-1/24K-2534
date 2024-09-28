#include <stdio.h>

int main() {
    int Num, Sum;

    printf("Enter Number: ");
    scanf("%d", &Num);
    Sum = 0;

    while (Num >= 10) {

        while (Num != 0) {
            Sum = Sum + (Num % 10);
            Num = Num / 10;
        }

        Num = Sum;
    }

    printf("The sum is: %d\n", Num);

    return 0;
}

