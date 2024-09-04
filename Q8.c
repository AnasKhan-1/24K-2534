//QUESTION 8

#include <stdio.h>

int main() {
    float Kilometers;
    float Miles;

    printf("Enter distance in Kilometers: ");
    scanf("%f", &Kilometers);

    Miles = Kilometers * 1/1.609344;

    printf("%f in Kilometers is %f in Miles\n", Kilometers, Miles);

}

