// Program to illustrate arrays of structures

#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time timeUpdate(struct time now);
    struct time testTimes[5] = {{11, 59, 59}, {12, 0, 0}, {1, 29, 59}, {23, 59, 59}, {19, 12, 27}};
    
    for (int i = 0; i < 5; ++i)
    {
        printf("Time is %.2d:%.2d:%.2d", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
        testTimes[i] = timeUpdate(testTimes[i]);
        printf("...one second later it's %.2d:%.2d:%.2d\n", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
    }
    
    return 0;
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