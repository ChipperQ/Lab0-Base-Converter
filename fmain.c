#include <stdio.h>
#include "functions.h"

//void convert_bases(char str[20],int,int);
int main() 
{    
	// Max characters allowed
    char string[20]; 
	// Creates int variables
    int starting_base,converting_base; 
	/* Prompts the user to provide input. 
		It asks for an integer and its current base.
		Then asks what base they want to convert it to. */
    printf("Please enter the number and it's base: "); 
    scanf("%s%d", string, &starting_base); 
    printf("Please enter the base to which it will be converted to: "); 
    scanf("%d", &converting_base); 
	// Calls the convert_base method and accept two parameters.
	convert_bases(string, starting_base, converting_base); 
} 
