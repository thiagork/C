#include <stdio.h>

int main(void)
{
	int n, a,number,trinum, counter;

	printf("How many triangular numbers do you want to calculate? ");
	scanf("%d",&counter);
	for (a = 1; a <= counter; ++a)
	{
		printf("What triangular number do you want? ");
		scanf("%d",&number);

		trinum = 0;

		for(n = 1 ; n <= number ; ++n)
		{
			trinum += n;
		}

	printf("Triangular number %d is %d\n",number,trinum);
	}
	
	return 0;
}
