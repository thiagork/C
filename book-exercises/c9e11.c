/*
 * Chapter 9 - Exercise 11 - Programming in C 
 * Function to convert a string to an integer
 */
 
#include <stdio.h>


int stringToInt(const char string[]);


int main(void)
{
    printf("%d\n", stringToInt("-245"));
    printf("%d\n", stringToInt("100") - 125);
    printf("%d\n", stringToInt("13x15"));
    
    return 0;
}


int stringToInt(const char string[])
{
    int intValue, result = 0;
    
    if (string[0] == '-')
    {
        for (int i = 1; string[i] >= '0' && string[i] <= '9'; ++i)
        {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
        }
        result *= -1;
    }
    else
    {
        for (int i = 0; string[i] >= '0' && string[i] <= '9'; ++i)
        {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
        }
    }
    
    return (result);
}