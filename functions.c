/* 
Miguel Quime
Lab 0 Base Converter
Survey of Computer Science
April 2, 2015
*/

#include<stdio.h> 
#include<string.h> 
#include "functions.h"

//void convert_bases(char str[20],int,int);

// convert_bases method does the conversion with the provided input.
void convert_bases(char str[20],int first_base,int convert_base) 
{ 
	/* Iterates through the array of characters.
	 Checks if a letter was inputted, if so it goes through the if statement.
	 If no letter is found then it moves to the else statement.
	 Keeps going until there are no more characters. */
    int counter = 0, remainder, integer, x, n = 0, base = 1; 
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
        integer ='0' + remainder; 
        if(integer > '9') 
        { 
            integer += 7; 
        } 
         str[counter]= integer; 
         counter++; 
         n = n / convert_base; 
    } 
	// Prints the corresponding ASCII for the converted integer value
	for(x = counter-1; x>= 0; x--) 
    { 
    	printf("%c", str[x]); 
    } 
	// New line.
 	printf("\n"); 
	
	
}
