#include <stdio.h>
int main(){
	char Character;
	printf("Enter a character: ");
	scanf("%c", &Character);
	
	if(Character >= 'a' && Character <= 'z'){
		printf("The character is in lower case");
	}
	else if(Character >='A' && Character <= 'Z'){
	
		printf("The character is in upper case");
	}
	else if (Character >= '0' && Character <= '9') {
        printf("The character is a digit");
	}	
	else{
		printf("The character is a special character");
		
	}
}