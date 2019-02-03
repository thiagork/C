/*
 * Chapter 9 - Program 2 - Programming in C 
 * Function to count the number of characters in a string
 */
 
#include <stdio.h>

int stringLength(const char string[]);

int main(void)
{
    const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
    const char word2[] = {'a', 't', '\0'};
    const char word3[] = {'a', 'w', 'e', '\0'};
    
    printf("%d %d %d\n", stringLength(word1), stringLength(word2), stringLength(word3));
    
    return 0;
}


int stringLength(const char string[])
{
    int count = 0;
    
    while (string[count] != '\0')
    { 
        ++count;
    }
    
    return count;    
}