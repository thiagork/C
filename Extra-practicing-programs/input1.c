#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("Enter the first value:\n");
	scanf("%d", &a);
	printf("Enter the second value:\n");
	scanf("%d", &b);
	printf("The sum of %d and %d is:\n%d\n", a, b, a+b);
	return 0;
}

