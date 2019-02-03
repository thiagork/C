#include <stdio.h>

int main(void)
{
	int i,j;
	printf("Digite o valor de i: ");
	scanf("%d",&i);
	printf("Digite o valor de j: ");
	scanf("%d",&j);
	printf("The next largest even multiple is: %d\n",i+j-i%j);
	return 0;
}
