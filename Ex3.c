#include <stdio.h>
int main()
{
	int Num;
	printf("Enter a Number: \n");
	scanf("%d" ,&Num);
	if (Num % 3 == 0 && Num % 5 == 0)
	{
		printf("Number is divisible by both 3 and 5");
	}
	else{
		printf("Number is not divisible by both 3 and 5");
	}		
}

