/* 
 * Programa para calcular o maximo divisor comum
 * de valores positivos
 */
 
 #include <stdio.h>
 
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
 
 int main(void)
 {
     int a, b;
     printf("Digite 2 valores para calcular o MDC: ");
     scanf("%d %d", &a, &b);
     
     printf("O MDC entre %d e %d é %d\n", a, b, mdc(a,b));
     
     return 0;
 }