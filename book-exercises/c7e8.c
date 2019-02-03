#include <stdio.h>

int main(void)
{
    float Square_Root(float x);
    float Absolute_Value(float x);
    
    float a, b, c, x1, x2;
    
    printf("Enter the value of a: ");
    scanf("%f", &a);
    
    printf("Enter the value of b: ");
    scanf("%f", &b);
    
    printf("Enter the value of c: ");
    scanf("%f", &c);
    
    if (b * b - 4 * a * c < 0)
    {
        printf("Imaginary roots\n");
    }
    else
    {
        x1 = (-b + Square_Root(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - Square_Root(b * b - 4 * a * c)) / (2 * a);
        
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
    
    return 0;    
}

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