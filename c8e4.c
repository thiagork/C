/*
 * Program to tell what day of the week a certain date falls
 * Chapter 8 - Exercise 4
 */
 
#include <stdio.h>

struct date 
{
    int day;
    int month;
    int year;    
};

int numberOfDays(struct date d);
struct date inputDay(void);
void dayOfTheWeek(int input);


int main(void)
{
    struct date desiredDate;
    printf("Please type a date(dd/mm/yyyy): ");
    desiredDate = inputDay();
    printf("%.2d/%.2d/%.4d is a ", desiredDate.day, desiredDate.month, desiredDate.year);
    dayOfTheWeek(numberOfDays(desiredDate));
    
    return 0;
}

int numberOfDays(struct date d)
{
    int f, g, N;
    
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
    N = N - 621049;
    N %= 7;
    
    return (N);
}


struct date inputDay(void)
{
    struct date input;
    scanf("%d/%d/%d", &input.day, &input.month, &input.year);
    while (input.day < 1 || input.day > 31 || input.month < 0 || input.month > 12)
    {
        printf("Invalid date, please type again(dd/mm/yyyy): ");
        scanf("%d/%d/%d", &input.day, &input.month, &input.year);
    }
    
    return (input);
}


void dayOfTheWeek(int input)
{
    switch (input)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
    }
}