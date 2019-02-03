/*
 * Calculate the number of days between 2 dates
 * Chapter 8 - Exercise 2
 */

#include <stdio.h>

struct date 
{
    int day;
    int month;
    int year;    
};

int numberOfDays(struct date d);

int main(void)
{
    struct date d1, d2;
    int N1, N2;
    
    printf("Type the first date (dd mm yyyy): ");
    scanf("%d%d%d", &d1.day, &d1.month, &d1.year);
    printf("Type the second date (dd mm yyyy): ");
    scanf("%d%d%d", &d2.day, &d2.month, &d2.year);
    
    N1 = numberOfDays(d1);
    N2 = numberOfDays(d2);
    printf("Number of elapsed days is %d\n", N2 - N1);

    return 0;
}


int numberOfDays(struct date d)
{
    int f, g;
    int N;
    
    if (d.month <= 2)
    {
        f = d.year - 1;
        g = d.month + 13;
    }
    else
    {
        f = d.year;
        g = d.month + 1;
    }
    
    N = ((float)1461 * f) / 4 + 153 * g / 5 + d.day;
    
    return (N);
}