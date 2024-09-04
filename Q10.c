//QUESTION 10
#include <stdio.h>

int main() {
    float Weight;
    float BMI;
    float Height;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &Weight);

    printf("Enter your height in meters: ");
    scanf("%f", &Height);

    //the formula for BMI is weight in kilograms (kg) divided by height in meters (m) squared
    BMI = Weight / (Height * Height);

    printf("Your Body Mass Index is: %f\n", BMI);

}
