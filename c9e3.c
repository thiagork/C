/*
 * Chapter 9 - Exercise 3 - Programming in C 
 * Counting words in a piece of text
 * Includes numbers with commas and periods
 */
 
#include <stdio.h>


_Bool alphabetic(const char c);
_Bool numeric(const char c);
void readLine(char buffer[]);
int countWords(const char string[]);


int main (void)
{
    char text[81];
    int totalWords = 0;
    _Bool endOfText = 0;
    
    printf("Type in your text.\n");
    printf("When you are done, press 'RETURN' twice.\n\n");
    
    while (! endOfText)
    {
        readLine(text);
        
        if (text[0] == '\0')
        {
            endOfText = 1;
        }
        else
        {
            totalWords += countWords(text);
        }
    }
    
    printf("\nThere are %d words in the above text.\n", totalWords);
    
    return 0;
}


_Bool alphabetic(const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '\'')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


_Bool numeric(const char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
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


int countWords(const char string[])
{
    int wordCount = 0;
    _Bool lookingForWord = 1;
    
    for (int i = 0; string[i] != '\0'; ++i)
    {
        if (alphabetic(string[i]) || numeric(string[i]))
        {
            if (lookingForWord)
            {
                ++wordCount;
                lookingForWord = 0;
            }
        }
        else if (string[i] == '.' || string[i] == ',')
        {
            if (numeric(string[i - 1]) && numeric(string[i + 1]))
            {
                if (lookingForWord)
                {
                    ++wordCount;
                    lookingForWord = 0;
                }
            }
        }
        else
        {
            lookingForWord = 1;
        }
    }
    
    return (wordCount);
}