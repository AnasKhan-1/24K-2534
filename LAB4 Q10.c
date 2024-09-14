#include <stdio.h>

int main() {
    float Temperature;

    printf("Enter the temperature: ");
    scanf("%f", &Temperature);


    if (Temperature < 0) 
        printf("Freezing weather");
    
    else if (Temperature >= 0 && Temperature <= 10) 
        printf("Very cold weather");
    
    else if (Temperature >= 11 && Temperature <= 20) 
        printf("Cold weather");
    
    else if (Temperature >= 21 && Temperature <= 30) 
        printf("Normal temperature");
    
    else if (Temperature >= 31 && Temperature < 40) 
        printf("Hot weather");
    
    else if (Temperature == 40) 
        printf("Very hot weather");
    
    else 
        printf("Weather is extremely hot");
    
    return 0;
}


