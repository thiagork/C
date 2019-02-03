/*
 * Chapter 10 - Program 3 - Programming in C 
 * Using Pointers in Expressions
 */

#include <stdio.h>

int main(void)
{
    int i1, i2;
    int *p1, *p2;
    
    i1 = 5;
    p1 = &i1;
    i2 = *p1 / 2 + 10;
    p2 = p1;
    
    printf("i1 = %d\ni2 = %d\n*p1 = %d\n*p2 = %d\n", i1, i2, *p1, *p2);
    
    return 0;
}