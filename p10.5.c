/*
 * Chapter 10 - Program 5 - Programming in C 
 * Function to use structures containing pointers
 */
 
#include <stdio.h>

int main(void)
{
    struct intPtrs
    {
        int *p1;
        int *p2;
    };
    
    struct intPtrs pointers;
    int i1 = 100, i2;
    
    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;
    
    printf("i1 = %d, *pointers.p1 = %d\n", i1, *pointers.p1);
    printf("i2 = %d, *pointers.p2 = %d\n", i2, *pointers.p2);
    
    return 0;
}