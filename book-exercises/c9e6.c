/*
 * Chapter 9 - Exercise 6 - Programming in C 
 * Function to remove a specified number of characters from a string
 */
 
#include <stdio.h>


void removeString(char inputString[], int start, int count);
void readLine(char buffer[]);


int main(void)
{
    char string[81];
    int stringStart, stringCount;
    
    printf("Type a line: ");
    readLine(string);
    
    printf("Type the start and how many characters should be deleted: ");
    scanf("%d%d", &stringStart, &stringCount);
    
    removeString(string, stringStart, stringCount);
    
    return 0;
}


void removeString(char inputString[], int start, int count)
{   
    for (int i = start; i < start + count; ++i)
    {
        inputString[i] = inputString[count + i];
        inputString[count + i] = '\0';
    }
    
    printf("%s\n", inputString);
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