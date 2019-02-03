#include <stdio.h>

int mdc(int u, int v);
int mmc(int u, int v);

int main(void)
{
    int a, b;
    
    printf("Digite 2 numeros: ");
    scanf("%d %d", &a, &b);
    
    printf("O MMC de %d e %d é %d\n", a, b, mmc(a, b));
    
    return 0;
}

int mmc(int u, int v)
{
    int resultadoMMC;
    
    resultadoMMC = u * v / mdc(u, v);
    
    return(resultadoMMC);
}

int mdc(int u, int v)
{
    int temp;
    
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
     
    return u;
}