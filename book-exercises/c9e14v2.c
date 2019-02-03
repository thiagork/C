/* 
 * Chapter 9 - Exercise 14 - Programming in C 
 * Converts int to string
 */
 
#include <stdio.h>

void intToStr(int input);


int main(void)
{
    int input;
    printf("Type a number: \n");
    scanf("%d", &input);
    
    intToStr(input);
    
    return 0;
    
}


void intToStr(int input)
{
    _Bool isNegative = 0;
    char numberString[81];
    int reverseNumber = 0, numberSize = 0;
    
    if (input < 0)
    {
        isNegative = 1;
        input *= -1;
    }
    
    while (input != 0)
    {
        reverseNumber = reverseNumber * 10 + input % 10;
        input /= 10;
        ++numberSize;
    }
    
    for (int i = isNegative; i < numberSize + isNegative; ++i)
    {
        numberString[i] = '0' + reverseNumber % 10;
        reverseNumber /= 10;
        numberString[i + 1] = '\0';
    }
        
    if (isNegative)
    {
        numberString[0] = '-';        
    }
    
    printf("string = %s\n", numberString);
}