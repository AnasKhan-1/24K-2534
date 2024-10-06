#include <stdio.h>

int main() {
    float Liters, Cost = 1.50, TotalCost = 0, CurrentCost;
    int continuePurchase;

    do {
        printf("Enter how much liters of fuel you want to purchase: ");
        scanf("%f", &Liters);

        CurrentCost = Cost * Liters;
        TotalCost = TotalCost + CurrentCost;

        printf("Cost for this purchase: %.2f\n", CurrentCost);

        do {
            printf("Do you want to purchase more fuel? Enter 1 for Yes, 0 for No: ");
            scanf("%d", &continuePurchase);

            if (continuePurchase != 0 && continuePurchase != 1) {
                printf("Invalid choice! Please enter 1 to continue or 0 to stop \n");
            }

        } while (continuePurchase != 0 && continuePurchase != 1);


    printf("Final Total Bill: %.2f\n", TotalCost);


    return 0;
}

