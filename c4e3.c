#include <stdio.h>

int main(void)
{
	int triangularnumber;

	for (int n=5; n<=50; n=n+5)
	{
		triangularnumber = n * (n + 1) / 2;
		printf("%2d	%d\n",n,triangularnumber);
	}

	return 0;
}
