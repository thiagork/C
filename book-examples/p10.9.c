/*
 * Chapter 10 - Program 9 - Programming in C 
 * Using pointers to exchange values
 */
 
#include <stdio.h>

void exchange (int * const pint1, int * const pint2)
{
    int temp;
    
    temp = *pint1;
    *pint1 = *pint2;
    *pint2 = temp;
}

int main(void)
{
    void exchange (int * const pint1, int * const pint2);
    int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;
    
    printf("i1 = %d, i2 = %d\n", i1, i2);
    
    exchange(p1, p2);
    printf("i1 = %d, i2 = %d\n", i1, i2);
    
    exchange(&i1, &i2);
    printf("i1 = %d, i2 = %d\n", i1, i2);
    
    return 0;
}