#include <stdio.h>

int main(void)
{
	int number, rightdigit;

	printf("Enter the number you want to reverse: ");
	scanf("%d",&number);

	while(number != 0)
	{
		rightdigit = number % 10;
		printf("%d", rightdigit);
		number = number / 10;
	}
	
	printf("\n");
	return 0;
}

