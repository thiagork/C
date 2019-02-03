#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Type two numbers: ");
	scanf("%d %d", &a, &b);

	while ( b==0 ) {
		printf("You can't divide by zero, type another number: \n");
		scanf("%d",&b);
	}
	
	printf("%d/%d=%.3f\n", a, b, (float)a/b);

	return 0;
}

