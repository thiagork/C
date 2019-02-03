/*
 * Chapter 10 - Program 15 - Programming in C 
 * Function to count the characters in a string using pointers
 */
 
#include <stdio.h>

int stringLength(const char *string)
{
    const char *cptr = string;
    
    while (*cptr)
    {
        ++cptr;
    }
    
    return (cptr - string);
}


int main(void)
{
    int stringLength(const char *string);
    
    printf("%d ", stringLength("stringLength test"));
    printf("%d ", stringLength(""));
    printf("%d\n", stringLength("complete"));
    
    return 0;
}