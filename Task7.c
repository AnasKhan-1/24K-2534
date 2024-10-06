#include <stdio.h>

int main() {
    int Num, Factorial = 1;
	int i;
    printf("Enter number to get its factorial: ");
    scanf("%d", &Num);

    if (Num < 0) {
        printf("Enter a positive number \n");
    } else {
        for (i = Num; i >= 1; --i) {
            Factorial = Factorial * i;
        }
        printf("Factorial of %d is %d\n", Num, Factorial);
    }

    return 0;
}

