/*
 * Chapter 9 - Exercise 8 - Programming C 
 * Combines functions from previous exercises to find, remove and insert a string
 */
 
#include <stdio.h>

void replaceString(char source[], char string1[], char string2[]);
int findString(char str1[], char str2[]);
void removeString(char inputString[], int start, int count);
void insertString(char originalString[], char insertString[], int start);
void readLine(char buffer[]);


int main(void)
{
    char sourceString[81], stringToBeRemoved[81], stringBeingInserted[81];
    
    printf("Type a line: ");
    readLine(sourceString);
    
    printf("Type what you want replaced: ");
    readLine(stringToBeRemoved);
    
    printf("Type what you want inserted: ");
    readLine(stringBeingInserted);
    
    replaceString(sourceString, stringToBeRemoved, stringBeingInserted);
    
    return 0;
}

void replaceString(char source[], char string1[], char string2[])
{
    int start = 0, count = 0;
    
    start = findString(source, string1);
    
    for (int i = 0; string1[i] != '\0'; ++i)
    {
        count = i;
    }
    count += 1;
    
    removeString(source, start, count);
       
    insertString(source, string2, start);
    
    printf("%s\n", source);
    
}


int findString(char str1[], char str2[])
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
        //printf("String starts at %d\n", start);
    }
    else
    {
        printf("String 1 doesnt contain string 2\n");
        
        return 0;
    }
    
    return (start);
}


void removeString(char inputString[], int start, int count)
{   
    char buffer[81];
    int i, stringSize = 0;
    
    for (i = 0; inputString[i] != '\0'; ++i)
    {
        buffer[i] = inputString[i];
        ++stringSize;
    }
    buffer[stringSize] = '\0';
    
    for (i = start; inputString[i - 1] != '\0'; ++i)
    {
        inputString[i] = buffer[i + count];
    }
    inputString[i - 1] = '\0';

}


void insertString(char originalString[], char insertString[], int start)
{
    char buffer[81];
    int i, j, countOriginal = 0, countInsert = 0;
    
    for (i = 0; originalString[i] != '\0'; ++i)
    {
        buffer[i] = originalString[i];
        ++countOriginal;
    }
    
    for (i = 0; insertString[i] != '\0'; ++i)
    {
        ++countInsert;
    }
    
    for (i = start, j = 0; i < start + countInsert; ++i, ++j)
    {
        originalString[i] = insertString[j];
    }
    
    for (i = start + countInsert, j = start; i < countOriginal + countInsert; ++i, ++j)
    {
        originalString[i] = buffer[j];
    }
    originalString[i] = '\0';

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