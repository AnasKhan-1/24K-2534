//QUESTION 7
//PART 1)

#include <stdio.h>

int main() {
    float Celsius;
    float Fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = ((Celsius * 9 / 5) + 32);

    // Display the result
    printf("%f in Celsius is %.2f in Fahrenheit\n", Celsius, Fahrenheit);


}
