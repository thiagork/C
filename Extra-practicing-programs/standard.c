#include <stdio.h>

int Funcao(int x)
{
	x = 1;
	return x;
}


int main(void)
{
	int n = 0;
	n = Funcao(n);
	
	printf("%d\n", n);

	return 0;
}
