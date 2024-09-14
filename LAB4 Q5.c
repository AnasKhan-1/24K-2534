#include <stdio.h>
int main()
{
	int customerID, UnitConsumed;
	char Name[100];
	float TotalBill, SurchargeAmount, NetBill;
	
	printf("Enter the CustomerID: ");
	scanf("%d", &customerID);
	
	printf("Enter the User Name: ");
	scanf(" %s", &Name);
	
	printf("Enter the Units consumed: ");
	scanf("%d", &UnitConsumed);
	
	if (UnitConsumed>0 && UnitConsumed <=199){
		TotalBill = UnitConsumed * 16.20;
	}
	else if (UnitConsumed >=200 && UnitConsumed <=299){
		TotalBill = UnitConsumed * 20.10;
	}
	else if (UnitConsumed >= 300 && UnitConsumed <= 499){
		TotalBill = UnitConsumed * 27.10;
	}
	else if (UnitConsumed >=500){
		TotalBill = UnitConsumed * 35.90;
	}
	else{
		printf("Enter Valid Number of units");	
	}
	
	if (TotalBill >18000){
		SurchargeAmount = TotalBill * 0.15;
		NetBill = TotalBill + SurchargeAmount;
	}
	printf("Customer Name: %s\n", Name);
	printf("Units Consumed: %d\n", UnitConsumed);
	printf("Amount Charges before Surcharge: %.2f\n",TotalBill);
	printf("Surcharge Amount: %.2f\n", SurchargeAmount);
	printf("Amount Charges(if Exceeding 500 units): %.2f\n", NetBill);
	
	
}