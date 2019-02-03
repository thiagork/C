#include <stdio.h>

void Calculate_Triangular_Number(int n)
{
    int i, triangular_number = 0;
    
    for (i = 1; i <= n; i++)
    {
        triangular_number += i;
    }
    printf("Triangular number %d is %d\n", n, triangular_number);
}

int main(void)
{
    int number;
    
    printf("Type a number: ");
    scanf("%d", &number);
    Calculate_Triangular_Number (number);
    
    return 0;
}