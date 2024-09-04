//QUESTION 7
//PART 2)
#include <stdio.h>

int main() {
    float Fahrenheit;
    float Celsius;


    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    // Convert Fahrenheit to Celsius
    Celsius = ((Fahrenheit - 32) * 5 / 9);

    // Display the result
    printf("%f in Fahrenheit is %f in Celsius\n", Fahrenheit, Celsius);

}

