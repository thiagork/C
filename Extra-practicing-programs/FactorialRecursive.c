/*
 * Program to calculate factorials recursively
 */

#include <stdio.h>

int main(void)
{
    unsigned long int factorial(unsigned int n);
    
    for (int i = 0; i < 11; ++i)
    {
        printf("%2u! = %lu\n", i, factorial(i));
    }
    
    return 0;
}

unsigned long int factorial(unsigned int n)
{
    unsigned long int result;
    
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        result = n * factorial(n - 1);
    }
    
    return result;
}