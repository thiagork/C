#include <stdio.h>

int main(void)
{
  int fib, n1=0, n2=1, i;

  for(i = 2; i < 15; ++i)
  {
    fib = n1 + n2;
    printf("%d\n", fib);
    n1 = n2;
    n2 = fib;
  }

return 0;
}
