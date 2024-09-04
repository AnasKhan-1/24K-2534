//QUESTION 5

#include <stdio.h>

int main() {
    float P;
    float R;
    float T;
    float SimpleInterest;

    printf("Enter the Principal amount (It should be between 100 and 1000000): ");
    scanf("%f", &P);


    printf("Enter the Rate of Interest (between 5 and 10): ");
    scanf("%f", &R);


    printf("Enter the Time Period in years (between 1 and 10): ");
    scanf("%f", &T);


    SimpleInterest = (P * R * T) / 100;

    printf("The Simple Interest is: %f\n", SimpleInterest);

}

