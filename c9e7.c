/*
 * Chapter 9 - Exercise 6 - Programming in C 
 * Function to remove a specified number of characters from a string
 */
 
#include <stdio.h>


void insertString(char originalString[], char insertString[], int start);
void readLine(char buffer[]);


int main(void)
{
    char originalString1[81], insertString1[81];
    int start;
    
    printf("Type a line: ");
    readLine(originalString1);
    
    printf("Type you wanna insert: ");
    readLine(insertString1);
    
    printf("Type the start: ");
    scanf("%d", &start);
    
    insertString(originalString1, insertString1, start);
    
    return 0;
}


void insertString(char originalString[], char insertString[], int start)
{
    int i, j = 0, count = 0;
    char buffer[81];
    
    for (i = start; originalString[i] != '\0'; ++i, ++j)
    {
        buffer[j] = originalString[i];
        
        if (insertString[j] != '\0')
        {
            originalString[i] = insertString[j];
            ++count;
        }
    }
    buffer[j] = '\0';
    
    for (i = start + count, j = 0; buffer[j] != '\0'; ++i, ++j)
    {
        originalString[i] = buffer[j];
    }
    originalString[i] = '\0';
  
    printf("%s\n", originalString);
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