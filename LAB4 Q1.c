#include <stdio.h>

int main() {
    int Number;
    printf("Enter a number: ");
    scanf("%d", &Number);
    
    if (Number % 3 == 0) {
        printf("The number you entered is a multiple of 3");
    } else {
        printf("This number you entered is not multiple of 3");
    }
    
}
