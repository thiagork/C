#include <stdio.h>

// Programa para gerar infinitas notas 0-10 e contabilizar

int main(void)
{
  int contador[11], n, nota;

  for(n = 0; n <=10; n++)
  {
    contador[n] = 0;
  }

  printf("De sua nota de 0 a 10:\n");

  while( nota != 999 )
  {
    scanf("%d", &nota);

    if(nota < 0 || nota >10)
    {
      printf("Nota invalida\n");
    }
    else
    {
      contador[nota]++;
    }
  }

  printf("Contagem das notas:\n");
  printf("Nota    Quantidade\n");

  for(n = 0; n <= 10; n++)
  {
    printf("%2d   %2d\n", n, contador[n]);
  }

  return 0;

}
