#include <stdio.h>

int main(void)
{
	int n,number,trinum;

	printf("What triangular number do you want? ");
	scanf("%d",&number);

	trinum=0;

	for(n=1;n<=number;++n)
		trinum+=n;

	printf("Triangular number %d is %d\n",number,trinum);

	return 0;
}
