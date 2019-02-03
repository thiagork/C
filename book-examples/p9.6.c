/* 
 * Chapter 9 - Program 6 - Programming in C 
 * Reading lines of Data
 */
 
#include <stdio.h>


void readLine(char buffer[]);


int main(void)
{
    char line[]="\0";
    
    for (int i = 0; i < 3; ++i)
    {
        readLine(line);
        printf("%s\n\n", line);
    }
    
    return 0;
}


void readLine(char buffer[])
{
    char character;
    int i = 0;
    
    printf("Enter a line of text:\n");
    
    do
    {
        character = getchar();
        buffer[i] = character;
        ++i;
    }
    while (character != '\n');
    
    buffer[i - 1] = '\0';
}