#include <stdio.h>

int main(void)
{
  int conj[10], n, sum=0;

  for(n = 0; n < 10; n++)
  {
    conj[n] = 0;
  }

  printf("Type 10 values:\n");

  for(n = 0; n < 10; n++)
  {
    scanf("%d", &conj[n]);
    sum += conj[n];
  }

  printf("The average is %.2f\n", (float)sum/10);

  return 0;
}
