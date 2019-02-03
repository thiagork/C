// Prime numbers by Sieve of Erastosthenes algorithm.

#include <stdio.h>

int main(void)
{
  int i=2, n, P[150]={0};

  for(i = 2 ; i < 150; i++)
  {
    for(n=2; (n*i) < 150; n++)
    {
      P[n*i] = 1;
    }
  }

  for(i=2; i<150; i++)
  {
    if(P[i] == 0)
      printf("%i ", i);
  }
  printf("\n");

  return 0;
}
