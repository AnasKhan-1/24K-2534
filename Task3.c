#include <stdio.h>
int main()
{
	int Pin, CorrectPin, count;
	count = 1;
	
	CorrectPin = 2459;
	printf("Enter the pin: ");
	scanf("%d", &Pin);
	while(Pin != CorrectPin && count <=2){
	
	printf("Enter Pin Correctly! ");
	scanf("%d", &Pin);
	if (Pin == CorrectPin)
	{
		printf("Correct Pin");
	}
	else
		count = count + 1;
	}	
		return 0;

}	
