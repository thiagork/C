/*
 * Chapter 9 - Program 4 - Programming in C 
 * Function to determine if two strings are equal
 */
 
#include <stdio.h>

_Bool equalStrings(const char s1[], const char s2[]);


int main(void)
{
    const char stra[] = "string compare test";
    const char strb[] = "string";
    
    printf("%d\n", equalStrings(stra, strb));
    printf("%d\n", equalStrings(stra, stra));
    printf("%d\n", equalStrings(strb, "string"));
    
    return 0;
}


_Bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    _Bool areEqual;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }
    
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        areEqual = 1;
    }
    else
    {
        areEqual = 0;
    }
    
    return (areEqual);
}