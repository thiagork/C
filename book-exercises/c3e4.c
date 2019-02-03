#include <stdio.h>

int main(void)
{
	float F;
	
	printf("Type the temperature in ºF you want converted to ºC: ");
	scanf("%f",&F);
	printf("%6.1fºF = %6.1fºC\n", F, (F-32)/1.8);
	return 0;
}

