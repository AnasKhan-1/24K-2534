#include <stdio.h>
int main(){
	float Num1, Num2, Answer;
	char operator;
	
	printf("Enter an Operator( + , - , * , / ): ");
	scanf("%c", &operator);
	printf("Enter 1st Number: ");
	scanf("%f", &Num1);
	printf("Enter 2nd Number: ");
	scanf("%f", &Num2);

	
	switch(operator){
		case '+':
		Answer = Num1 + Num2;
		printf("The Answer is: %.2f", Answer);
		break;

		case '-':
		Answer = Num1 - Num2;
		printf("The Answer is: %.2f", Answer);	
		break;
		
		case '*':
		Answer = Num1 * Num2;
		printf("The Answer is: %.2f", Answer);
		break;		
		
		case '/':
		Answer = Num1 / Num2;
		printf("The Answer is: %.2f", Answer);
		break;
		
		default:
            printf("Please use an operator from the lise (+, -, *, or /).\n");
	}
}
