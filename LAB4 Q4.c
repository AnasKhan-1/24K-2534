#include <stdio.h>
int main(){
	
	float Amount, SavedAmount, DiscountAmount;
	printf("What is the total cost of the items you purchased? ");
	scanf("%f", &Amount);
	
	if (Amount >=500 && Amount <2000)
	{
		SavedAmount = (0.05*Amount);
		DiscountAmount = Amount - SavedAmount;
	}
	else if(Amount >=2000 && Amount <4000)
	{
		SavedAmount = (0.10 * Amount);
		DiscountAmount = Amount - SavedAmount;
	}
	else if(Amount >=4000 && Amount <6000)
	{
		SavedAmount = (0.20 * Amount);
		DiscountAmount = Amount - SavedAmount;
	}
	else if(Amount >=6000)
	{
		SavedAmount = (0.35 * Amount);
		DiscountAmount = Amount - SavedAmount;
	}
	else{
	DiscountAmount = Amount;
	printf("There is no discount for items costing less than 500\n");
	}
	printf("The Total Amount before discount was: %.2f\n", Amount);
	printf("The Discount you got was: %.2f\n", SavedAmount);
	printf("The Amount after discount was: %.2f\n", DiscountAmount);
	

	
	return 0;
}