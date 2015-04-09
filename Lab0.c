/* 
Miguel Quime
Lab 0 Base Converter
Survey of Computer Science
April 2, 2015
*/

#include<stdio.h> 
#include<string.h> 

void convert_bases(char str[20],int,int);
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

// convert_bases method does the conversion with the provided input.
void convert_bases(char str[20], int first_base, int convert_base) 
{ 
    int counter = 0, remainder, integer, x, n = 0, base = 1; 
	/* Iterates through the array of characters.
	 Checks if a letter was inputted, if so it goes through the if statement.
	 If no letter is found then it moves to the else statement.
	 Keeps going until there are no more characters. */
    for(x = strlen(str) - 1; x >= 0; x--) 
        { 
         if(str[x] >= 'A' && str[x] <= 'Z') 
            { 
           		integer = str[x] -'0' - 7; 
            } 
         else 
            { 
            	integer = str[x] - '0'; 
            } 
        n = integer * base + n; 
        base = base * first_base; 
        } 
		// Loops while n does not equal zero.
    while(n != 0) 
    { 
        remainder = n % convert_base; 
        integer = '0' + remainder; 
        if(integer > '9') 
        { 
            integer += 7; 
        } 
         str[counter] = integer; 
         counter++; 
         n = n / convert_base; 
    } 
	// Prints the corresponding ASCII for the converted integer value
	for(x = counter - 1; x >= 0; x--) 
    { 
    	printf("%c", str[x]); 
    } 
	// New line.
 	printf("\n"); 
}
