#include <stdio.h>

int main(void)
{
	int n=1, TriangularNumber;
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n    Sum from 1 to n\n");
	printf("---   ---------------\n");

	TriangularNumber=0;
	

	while (n <= 100)
	{
		TriangularNumber += n;
		printf("%2d           %d\n",n,TriangularNumber);
		n++;
	}
	return 0;
}

