#include <stdio.h>
int main() {
    float FscMarks, NtsMarks;


    printf("Enter FSC marks: ");
    scanf("%f", &FscMarks);

    printf("Enter your NTS marks: ");
    scanf("%f", &NtsMarks);


    if (FscMarks > 70) {
        if (NtsMarks >= 70)
            printf("You are eligible for Oxford University: IT");
        else if (NtsMarks >= 60)
            printf("You are eligible for Oxford University: Electronics");
        else if (NtsMarks >= 50)
            printf("You are eligible for Oxford University: Telecommunication");
        else 
            printf("You are not eligible for Oxford University");
        
    }
    else if (FscMarks >= 60 && FscMarks <= 70 && NtsMarks >= 50) 
        printf("You are eligible for MIT: IT");
    
    else if (FscMarks >= 50 && FscMarks < 60 && NtsMarks >= 50) 
        printf("You are eligible for MIT: Chemical");
    
    else if (FscMarks >= 40 && FscMarks < 50 && NtsMarks >= 50) 
        printf("You are eligible for MIT: Computer");
    

    else 
        printf("You are not eligible for any university");
    

    return 0;
}


