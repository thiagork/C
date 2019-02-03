#include <stdio.h>

int calculateTriangularNumber(int n)
{
    int triangularNumber = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        triangularNumber += i;
    }
    
    return triangularNumber;
}

int main(void)
{
    
    int calculateTriangularNumber(int n);

    int number;

    for (int i = 1; i <= 5; ++i)
    {
        printf("What triangular number do you want? ");
        scanf("%d", &number);
        
        printf("Triangular number %d is %d\n\n", number, calculateTriangularNumber(number));
    }
    
    return 0;
}