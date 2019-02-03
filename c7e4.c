/*
 * Program to calculate the Square Root of a Number
 * Newton-Raphson Method
 */
 
#include <stdio.h>

float Absolute_Value(float x)
{
    if (x < 0)
        x = -x;
    return (x);
}

float Square_Root(float x, float y)
{
    float guess = 1.0;
    
    if (x < 0)
    {
        printf("Negative value.\n");
        return -1.0;
    }
    
    printf("%.3f\n", guess);
    
    while (Absolute_Value(guess * guess - x) >= y)
    { 
        guess = (x / guess + guess) / 2;
        printf("%.3f\n", guess);  
    }
    
    return (guess);
}

int main(void)
{
    float number, precision;
    
    printf("Type the number: ");
    scanf("%f", &number);
    
    printf("Type the precision: ");
    scanf("%f", &precision);
    
    if (Square_Root(number, precision) != -1.0)
    {
        printf("%.3f\n", Square_Root(number, precision));
    }
    
    return 0;
}