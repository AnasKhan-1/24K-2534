#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 0) { 
        if (age <= 12) {
            printf("Child\n");
        } else {
            if (age <= 19) 
                printf("Teenager\n");
            else {
                if (age <= 64) 
                    printf("Adult\n");
                else 
                    printf("Senior\n");
                
            }
        }
    } else {
        printf("Invalid age\n");
    }

    return 0;
}

