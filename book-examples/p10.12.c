/*
 * Chapter 10 - Program 12 - Programming in C 
 * Function to sum the elements of an integer array using pointers Ver. 2
 */
 
#include <stdio.h>

int arraySum(int *array, const int n)
{
    int sum = 0;
    int * const arrayEnd = array + n;
    
    for ( ; array < arrayEnd; ++array)
    {
        sum += *array;
    }
    
    return (sum);
}


int main(void)
{
    int arraySum(int *array, const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    
    printf("The sum is %d\n", arraySum(values, 10));
    
    return 0;
}