#include <stdio.h>

int main(void)
{
	int n=1, factorial=1;	
	
	while ( n <= 10 )
	{
		factorial *= n;
		printf("%2d!	%d\n",n,factorial);
		n++;
	}

	return 0;
}
