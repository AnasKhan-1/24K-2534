//QUESTION 9
#include <stdio.h>

int main() {
    float Length;
    float Width;
    float Perimeter;

    printf("Enter Length: ");
    scanf("%f", &Length);

    printf("Enter Width: ");
    scanf("%f", &Width);

    Perimeter = 2*Length + 2*Width;

    printf("The Perimeter is: %f\n", Perimeter);

}
