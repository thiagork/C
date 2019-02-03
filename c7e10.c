#include <stdio.h>

int isPrime(int n);

int main(void)
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (isPrime(numero) == 1)
	{
		printf("%d é primo\n", numero);
	}
	else
	{
		printf("%d não é primo\n", numero);
	}
	
	return 0;
}

int isPrime(int n)
{
	_Bool prime = 1;
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			prime = 0;
			break; 
		}
	}
	return(prime);
}
