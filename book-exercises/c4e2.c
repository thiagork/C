#include <stdio.h>

int main(void)
{
	printf(" n      n2\n\n");

	for (int n=1; n<=10; n++)
	{
		printf("%2d      %d\n",n,n*n);
	}
	
	return 0;
}
