#include <stdio.h>

int main(void)
{
	int n, TriangularNumber;
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n    Sum from 1 to n\n");
	printf("---   ---------------\n");

	TriangularNumber=0;
	
	for ( n=1; n <=100; ++n) {
		TriangularNumber += n;
		printf("%-2d           %d\n",n,TriangularNumber);
	}
	return 0;
}

