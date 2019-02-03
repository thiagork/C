#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Type two numbers: ");
	scanf("%d %d", &a, &b);
	a%b==0 ? printf("It is evenly divisible\n") : printf("It is not evenly divisible\n");
}

