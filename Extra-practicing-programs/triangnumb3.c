#include <stdio.h>

int main(void)
{
	int n=1, number, trinum, counter=1, repetition;

	printf("How many triangular numbers do you want to calculate? ");
	scanf("%d",&repetition);
	
	while ( counter <= repetition )
	{
		printf("What triangular number do you want? ");
		scanf("%d",&number);
		
		trinum = 0;
		
		counter++;

		while (n <= number)
		{
			trinum += n;
			n++;
		}
		
		printf("Triangular number %d is %d\n\n",number,trinum);
	}
	return 0;
}
	
