/*
 * Chapter 8 - Program 8.4
 * Program to determine tomorrow's date
 */
 
#include <stdio.h>
 
struct date
{
    int month;
    int day;
    int year;
};
 
struct date dateUpdate(struct date today);
int numberOfDays(struct date d);
_Bool isLeapYear(struct date d);
const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
int main(void)
{
    struct date thisDay, nextDay;
    
    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d%d%d", &thisDay.day, &thisDay.month, &thisDay.year);
    
    nextDay = dateUpdate(thisDay);
    
    printf("Tomorrow's date is %d/%d/%.2d.\n", nextDay.day, nextDay.month, nextDay.year % 100);
    
    return 0;     
}


struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    
    if (today.day != numberOfDays(today))
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12)
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    
    return (tomorrow);
}


int numberOfDays(struct date d)
{
    int days;
    
    if (isLeapYear(d) == 1 && d.month == 2) // Nao esquecer de colocar o argumento (d) em isLeapYear
    {
        days = 29;
    }
    else
    {
        days = daysPerMonth[d.month - 1];    
    }
    
    return (days);
}


_Bool isLeapYear(struct date d)
{
    _Bool leapYearFlag;
    
    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    {
        leapYearFlag = 1;
    }
    else
    {
        leapYearFlag = 0;
    }
    
    return (leapYearFlag);
}