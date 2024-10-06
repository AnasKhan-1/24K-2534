#include <stdio.h>
int main()
{
	int n, total = 0;
	while (n!=0)
	{
		printf("Enter Number: ");
		scanf("%d", &n);
		total = total + n;
		printf("Total is: %d \n", total);
	}
}