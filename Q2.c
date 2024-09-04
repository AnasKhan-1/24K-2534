//QUESTION 2

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    
    printf("Enter the first Integer: ");
    scanf("%d", &a);
    
    printf("Enter the second Integer: ");
    scanf("%d", &b);
    
    c = a;
    a = b;
    b = c;
    
    printf("The swapped numbers are: %d, %d\n", a, b);

}
