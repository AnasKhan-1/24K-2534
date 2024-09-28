#include <stdio.h>

int main() {
    int Num;
    printf("Enter a number: ");
    scanf("%d", &Num);

    if (Num > 0) {
        printf("Positive\n");

        if (Num % 2 == 0) 
            printf("Even\n");
        else 
            printf("Odd\n");
    }
    else if (Num < 0){
        	printf("Negative\n");
        }
    else if (Num != 0){
	
    		printf("Invalid Input\n");
		}
    else
    	printf("Number is 0");
		
		return 0;
    }
    


