/* 
 * Chapter 9 - Exercise 13 - Programming in C 
 * Converts lowercase into Uppercase
 */
 
#include <stdio.h>

void readLine(char buffer[]);
void uppercase(char input[]);

int main(void)
{
    char input[81];
    printf("Type a phrase: \n");
    readLine(input);
    
    uppercase(input);
    
    return 0;
    
}


void uppercase(char input[])
{
    char buffer[81];
    
    for (int i = 0; input[i] != '\0'; ++i)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            buffer[i] = input[i] - 'a' + 'A';
        }
        
        else
        {
            buffer[i] = input[i];
        }
        
        buffer[i + 1] = '\0';
    }
    
    printf("%s\n", buffer);
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