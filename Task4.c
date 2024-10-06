#include <stdio.h>

int main() 
{
    int Num, TempNum, Remainder;
    int Ans = 0;

    printf("Enter a number: ");
    scanf("%d", &Num);
	TempNum = Num;

    while (TempNum != 0) {
        Remainder = TempNum % 10;
        Ans = Ans +  (Remainder * Remainder * Remainder);
        TempNum = TempNum / 10;
    }

    if (Ans == Num)
        printf("Armstrong number \n", Num);
    else
        printf("Not Armstrong number \n", Num);

    return 0;
}

