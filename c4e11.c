#include <stdio.h>

int main(void)
{
	int number, sum=0;
	
	printf("Type a number: ");
	scanf("%d",&number);

	while ( number != 0 )
	{
		sum += number % 10;
		number /= 10;
	}

	printf("The sum of the digits is %d\n", sum);
	
	return 0;
}
