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

float Square_Root(float x)
{
    const float precision = 0.00001;
    float guess = 1.0;
    
    if (x < 0)
    {
        printf("Negative value.\n");
        return -1.0;
    }
    
    while (Absolute_Value(guess * guess - x) >= precision)
    { 
        guess = (x / guess + guess) / 2;  
    }
    return (guess);
}

int main(void)
{
    float number;
    
    printf("Type the number: ");
    scanf("%f", &number);
    
    if (Square_Root(number) != -1.0)
    {
        printf("%.2f\n", Square_Root(number));
    }
    
    return 0;
}