/*
 * Chapter 8 - Program 8.2
 * Program to determine tomorrow's date
 */
 
#include <stdio.h>
 
int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };  // Prestar atenção no ; ao final da declaração do struct
    
    struct date today, tomorrow;
    
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d%d%d", &today.day, &today.month, &today.year);
    
    if (today.day != daysPerMonth[today.month - 1])
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if(today.month == 12)
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
    
    printf("Tomorrow's date is %d/%d/%d.\n", tomorrow.day, tomorrow.month, tomorrow.year);
    
    return 0;
}