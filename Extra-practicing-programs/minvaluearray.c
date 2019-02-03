/*
 * Program to find the minimum value in an array
 */

#include <stdio.h>

int minimum(int values[], int number_of_elements)
{
    int minvalue;
    minvalue = values[0];
    
    for (int i = 1; i < number_of_elements; i++)
        if (values[i] < minvalue)
            minvalue = values[i];
    return minvalue;
}

int main(void)
{
    int array_size;
    int minimum(int values[], int number_of_elements);
    
    printf("Please enter the number of elements: ");
    scanf("%d", &array_size);
    
    int scores[array_size];
    
    printf("Please enter the scores:\n");
    
    for (int i = 0; i < array_size; i++)
        scanf("%d", &scores[i]);
    
    printf("\nMinimum score is %d\n", minimum(scores, array_size));
    
    return 0;
}