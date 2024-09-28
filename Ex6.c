#include <stdio.h>

int main() {
    int num;
    char result[10];

    printf("Enter a number: ");
    scanf("%d", &num);


    result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";


    if (num > 0) {
        printf(result, "Positive");
    } else if (num < 0) {
        printf(result, "Negative");
    } else {
        printf(result, "Zero");
    }

    printf("The number is: %s\n", result);

    return 0;
}


