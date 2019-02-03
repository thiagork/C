/*
 * Chapter 9 - Exercise 5 - Programming in C 
 * Program to determine if a string exists inside another string
 */
 
#include <stdio.h>


void findString(char str1[], char str2[]);
void readLine(char buffer[]);


int main(void)
{
    char string1[81], string2[81];
    
    printf("Enter the first string: ");
    readLine(string1);
    
    printf("Enter the second string: ");
    readLine(string2);
    
    findString(string1, string2);
    
    return 0;
}


void findString(char str1[], char str2[])
{
    int start, i, j = 0;
    _Bool isEqual = 0, wholeStringFound = 0;
    
    for (i = 0; str1[i] != '\0'; ++i)
    {
        if (str1[i] == str2[j] && isEqual == 0)
        {
            ++j;
            isEqual = 1;
            start = i;
        }
        
        if (str1[i] == str2[j] && isEqual == 1)
        {
            ++j;
            if (str2[j] == '\0')
            {
                wholeStringFound = 1;
                break;
            }
        }
    }
    
    if (wholeStringFound == 1)
    {
        printf("String starts at %d\n", start);
    }
    else
    {
        printf("String 1 doesnt contain string 2\n");
    }
}


void readLine(char buffer[])
{
    char character;
    int i = 0;
    
    do
    {
        character = getchar();
        buffer[i] = character;
        ++i;
    }
    while (character != '\n');
    
    buffer[i - 1] = '\0';
}