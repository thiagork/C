#include <stdio.h>

int main(void)
{
	int number, remainder;
	
	printf("Type number to be tested: ");
	scanf("%d",&number);

	remainder = number % 2;

	if (remainder == 0)
		printf("The number is even.\n");
	else
		printf("The number is odd.\n");

	return 0;
}
