//QUESTION 4

#include <stdio.h>

    int main() {
    
    float TotalCost;
    float TotalFuel;
    float FuelAverage;
    float DistanceTotal;
    int Distance = 1207;
    float ForwardPrice = 118.0;
    float BackPrice = 123.0;

    printf("Enter the car's fuel average (How many km it travels in 1 liter): ");
    scanf("%f", &FuelAverage);

    DistanceTotal = 2 * Distance;
    TotalFuel = DistanceTotal / FuelAverage;
    TotalCost = (Distance / FuelAverage) * ForwardPrice + (Distance / FuelAverage) * BackPrice;

    printf("Total fuel it took: %.f liters\n", TotalFuel);
    printf("Total fuel it cost: %.f\n", TotalCost);

