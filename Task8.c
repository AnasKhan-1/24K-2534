#include <stdio.h>
int main() {
    
    int num1 = 0, num2 = 1, next, till;
    printf("Enter Number: ");
    scanf("%d", &till);
    while(num1+num2<till){
        if(num1==0){
            printf("0\n1\n");
        }
        next = num1+num2;
        printf("%d\n",next);
        num1 = num2;
        num2 = next;
     }
    return 0;
}
