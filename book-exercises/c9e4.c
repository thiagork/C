/*
 * Chaper 9 - Exercise 4
 * Program to extract a portion of a string
 */
 
#include <stdio.h>


void substring(char string[], int start, int count, char result[]);
void readLine(char buffer[]);


int main(void)
{
    char userInput[81], result[81];
    int stringStart, stringCount;
    
    printf("Type a line: ");
    readLine(userInput);
    
    printf("Type the start and the size: ");
    scanf("%d%d", &stringStart, &stringCount);
    
    substring(userInput, stringStart, stringCount, result);
    
    printf("\n%s\n", result);
    
    return 0;
}


void substring(char string[], int start, int count, char result[])
{
    int i, j = 0;
    
    for (i = start; i < start + count; ++i)
    {
        result[j] = string[i];
        ++j;
    }
    
    result[j+1] = '\0';
    
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