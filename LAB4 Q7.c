#include <stdio.h>

int main() {
    int lightIntensity;

    printf("Enter the light intensity (0 - 1000): ");
    scanf("%d", &lightIntensity);

    if (lightIntensity > 500 && lightIntensity <= 1000) {
        printf("Exposed under sunshine");
    }
    else if (lightIntensity >= 0 && lightIntensity <= 100) {
        printf("Evening");
    }
    else if (lightIntensity > 100 && lightIntensity <= 500) {
        printf("Lighting ");
    }
    else {
        printf("Please enter a value between 0 and 1000");
    }

}
