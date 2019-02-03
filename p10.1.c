/*
 * Chapter 10 - Program 1 - Programming in C 
 * Program to illustrate pointers
 */
 
#include <stdio.h>

int main(void)
{
    int count = 10, x;
    int* int_pointer;
    
    int_pointer = &count;
    x = *int_pointer;
    
    printf("count = %d\nx = %d\n", *int_pointer, &x);
    
    return 0;
}