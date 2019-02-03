#include <stdio.h>

int main(void)
{
  int i, numfibo;

  printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
  scanf("%i", &numfibo);

  if(numfibo < 1 || numfibo > 75)
  {
    printf("Bad number, sorry!\n");
    return 1;
  }

  unsigned long long int fibo[numfibo];

  fibo[0] = 0;
  fibo[1] = 1;

  for(i = 2; i < numfibo; ++i)
  {
    fibo[i] = fibo[i-2] + fibo[i-1];
  }

  for(i = 0; i < numfibo; ++i)
  {
    printf("%llu ", fibo[i]);
  }

  printf("\n");

  return 0;
}
