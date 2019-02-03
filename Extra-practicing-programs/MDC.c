/* Programa para calcular o Maximo Divisor Comum
   de dois valores positivos */

#include <stdio.h>

int main(void)
{
	int u,v,temp;
	printf("Please type in two nonnegative integers.\n");
	scanf("%d%d",&u,&v);

	while(v != 0)
	{
		temp = u%v;
		u=v;
		v=temp;
	}
	
	printf("Their greatest common divisor is %d\n",u);
	return 0;
}
