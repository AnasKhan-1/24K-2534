#include <stdio.h>

int main() {
    int time;

    printf("Enter the time in 24 hour format: ");
    scanf("%d", &time);

    if (time >= 5 && time <= 11) {
        printf("Good Morning");
    } 
    else if (time >= 12 && time <= 17) {
        printf("Good Evening");
    } 
    else if (time >= 18 && time <= 24) {
        printf("Good Night");
    } 
    else if (time >= 0 && time < 5) {
        printf("It's still night");
    } 
    else
        printf("Invalid time! Please enter a valid time (0-24)");

}
