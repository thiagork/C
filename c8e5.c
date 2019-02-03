/*
 * Chapter 8 - Exercise 5
 */
 
#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
struct time
{
    int hours;
    int minutes;
    int seconds;
};
struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

struct dateAndTime clockKeeper(struct dateAndTime event);
struct time timeUpdate(struct time now);
struct date dateUpdate(struct date today);
int numberOfDays(struct date d);
_Bool isLeapYear(struct date d);
const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main(void)
{
    struct dateAndTime event;
    
    printf("Digite hora e data (hh:mm:ss dd/mm/aaaa): ");
    scanf("%d:%d:%d %d/%d/%d", &event.stime.hours, &event.stime.minutes, &event.stime.seconds, &event.sdate.day, &event.sdate.month, &event.sdate.year);
    
    event = clockKeeper(event);
    printf("The updated time and date is:\n");
    printf("%.2d:%.2d:%.2d %.2d/%.2d/%.4d\n", event.stime.hours, event.stime.minutes, event.stime.seconds, event.sdate.day, event.sdate.month, event.sdate.year); 

    return 0;
}


struct dateAndTime clockKeeper(struct dateAndTime event)
{
    event.stime = timeUpdate(event.stime);
    
    if (event.stime.hours == 0 && event.stime.minutes == 0 && event.stime.seconds == 0)
    {
        event.sdate = dateUpdate(event.sdate);
    }
    
    return (event);
}


struct time timeUpdate(struct time now)
{
    ++now.seconds;
    
    if (now.seconds == 60)
    {
        now.seconds = 0;
        ++now.minutes;
        
        if (now.minutes ==60)
        {
            now.minutes = 0;
            ++now.hours;
            
            if (now.hours == 24)
            {
                now.hours = 0;
            }
        }
    }
    
    return (now);
}


struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    
    if (today.day != numberOfDays(today))
    {
        tomorrow = (struct date){today.day + 1, today.month, today.year};   
    }
    else if (today.month == 12)
    {
        tomorrow = (struct date){1, 1, today.year + 1};
    }
    else
    {
        tomorrow = (struct date){1, today.month + 1, today.year};
    }
    
    return (tomorrow);
}


int numberOfDays(struct date d)
{
    int days;
    
    if (isLeapYear(d) == 1 && d.month == 2)
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