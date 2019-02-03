#include <stdio.h>

int main(void)
{
	int number, rightdigit;

	printf("Enter the number you want to reverse: ");
	scanf("%d",&number);

	do
	{
		rightdigit = number % 10;
		printf("%d", rightdigit);
		number = number / 10;
	}
	while (number != 0);	

	printf("\n");
	return 0;
}

