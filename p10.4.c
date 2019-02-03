/*
 * Chapter 10 - Program 4 - Programming in C 
 * Using Pointers to Structures
 */

#include <stdio.h>

int main(void)
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    
    struct date today, *datePtr;
    
    datePtr = &today;
    
    datePtr -> day = 25;
    datePtr->month = 9;
    datePtr->year = 2015;
    
    printf("Today's date is %d/%d/%d.\n", today.day, datePtr->month, datePtr->year);
    
    return 0;
}