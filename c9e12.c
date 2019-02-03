/*
 * Chapter 9 - Program 12 - Programming in C 
 * Function to convert a string to a float
 */
 
#include <stdio.h>
#include <math.h>


float strToFloat(char string[]);


int main(void)
{
    printf("function strToFloat = %.4f\n", strToFloat("-867.6921"));
    
    return 0;
}


float strToFloat(char string[])
{
    _Bool isNegative = 0;
    int dotPosition = 0, countDecimals = 0, digit = 0;
    char buffer[81];
    float number = 0;
    
    for (int i = 0; string[i] != '\0'; ++i)
    {
        buffer[i] = string[i];
        buffer[i + 1] = '\0';
    }
    
    // Check if the string is a negative number
    if (string[0] == '-')
    {
        isNegative = 1;
        
        // If its negative, turns it into positive
        for (int i = 0; string[i + 1] != '\0'; ++i)
        {
            buffer[i] = string[i + 1];
            buffer[i + 1] = '\0';
        }
    }
    
    // Finding the dot position and turning the integers into float
    for (int i = 0; buffer[i] != '.'; ++i)
    {
        ++dotPosition;
        digit = buffer[i] - '0';
        number = number * 10 + digit;
    }
    
    // Counting the number of decimal places and adding the decimals to the float
    for (int i = dotPosition + 1; buffer[i] != '\0'; ++i)
    {
        ++countDecimals;
        digit = buffer[i] - '0';
        number = number * 10 + digit;
    }
    
    // Adding the decimal places to the float
    for (int i = 0; i < countDecimals; ++i)
    {
        number /= 10;
    }
    
    if (isNegative)
    {
        number *= -1;
    }
    
    return (number);
    
}