/*
 * Program to calculate the elapsed time
 * Chapter 8 - Exercise 3
 */
 
#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time time1, time2;

struct time elapsedTime(struct time time1, struct time time2);
struct time inputTime(struct time input);


int main(void)
{
    printf("Enter the initial time (hh:mm:ss): ");
    time1 = inputTime(time1);
    printf("Enter the final time (hh:mm:ss): ");
    time2 = inputTime(time2);
    
    printf("The elapsed time is: %.2dh %.2dm %.2ds\n", elapsedTime(time1, time2).hours, elapsedTime(time1, time2).minutes, elapsedTime(time1, time2).seconds);
    
    return 0;
}


struct time elapsedTime(struct time time1, struct time time2)
{
    struct time elapsed;
    
    if (time1.seconds > time2.seconds)
    {
        time2.seconds += 60;
        time2.minutes -= 1;
    }
    elapsed.seconds = time2.seconds - time1.seconds;
    
    if (time1.minutes > time2.minutes)
    {
        time2.minutes += 60;
        time2.hours -= 1;
    }
    elapsed.minutes = time2.minutes - time1.minutes;
    
    if (time1.hours > time2.hours)
    {
        time2.hours += 24;
    }
    elapsed.hours = time2.hours - time1.hours;
    
    return (elapsed);
}


struct time inputTime(struct time input)
{
    scanf("%d:%d:%d", &input.hours, &input.minutes, &input.seconds);
    while (input.hours > 23 || input.hours < 0 || input.minutes > 59 || input.minutes < 0 || input.seconds > 59 || input.seconds < 0)
    {
        printf("Invalid time, please type again: ");
        scanf("%d:%d:%d", &input.hours, &input.minutes, &input.seconds);
    }
    
    return (input);       
}