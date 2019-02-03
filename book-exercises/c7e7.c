#include <stdio.h>

long int x_to_the_n(int x, int n)
{
    int y = x;
    for (int i = 1; i < n; ++i)
    {
        x = x * y;
    }
    
    return (x);    
}

int main(void)
{
    int number, power;
    
    printf("Type the number: ");
    scanf("%d", &number);
    
    printf("Type the power: ");
    scanf("%d", &power);
    
    printf("%d^%d = %llu\n", number, power, x_to_the_n(number, power));
    
    return 0;
}