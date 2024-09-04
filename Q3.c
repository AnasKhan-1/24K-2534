// QUESTION 3

#include <stdio.h>
int main()
{
	float Tax_Rate;
	int Salary;
	int Taxed_Salary;
	int New_Salary;
	
	printf("Enter Tax Rate and Salary: \n");
	scanf("%f%d", &Tax_Rate, &Salary);
	
	
	Taxed_Salary = (Salary * Tax_Rate);
	New_Salary = (Salary - Taxed_Salary);
	printf("Your Salary is: %d", New_Salary);
}

