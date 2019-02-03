#include <stdio.h>

int main(void)
{
	float ScaleStart, ScaleEnd;
	printf("Type the lowest value of the table (in F): ");
	scanf("%f", &ScaleStart);
	printf("Type the highest value of the table (in F): ");
	scanf("%f", &ScaleEnd);
	while (ScaleStart <= ScaleEnd)
	{
		printf("%6.2f degrees F = %6.2f degrees C\n", ScaleStart, (ScaleStart-32.0)*5.0/9.0);
		ScaleStart = ScaleStart + 10;
	}
	return 0;
}

