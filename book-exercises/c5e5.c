#include <stdio.h>

int main(void)
{
	int number, rightdigit;
	_Bool neg=0;

	printf("Enter the number you want to reverse: ");
	scanf("%d",&number);
	
	if (number < 0)
	{
		number *= -1;
		neg = 1;
	}

	while(number != 0)
	{
		rightdigit = number % 10;
		printf("%d", rightdigit);
		number /= 10;
	}
	
	if (neg == 1)
		printf("-");
	printf("\n");
	return 0;
}

