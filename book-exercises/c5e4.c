// Basic calculator

#include <stdio.h>

int main(void)
{
	float x,y=0;
	char oper;
	
	printf("Basic Calculator\n+ - * / S E\n");

	while( oper != 'E' )
	{
		printf("Type the number and the operator: ");
		scanf("%f %c", &x, &oper);
				
		while ( x == 0  &&  oper == '/' )
		{
			printf("Division by zero impossible, try again: ");
			scanf("%f %c", &x, &oper);
		} 
	
		switch (oper)
		{
			case '+':
				printf("%.2f + %.2f = %.2f\n", y, x, y+x);
				y += x;
				break;
			case '-':
				printf("%.2f - %.2f = %.2f\n", y, x, y-x);
				y -= x;
				break;
			case '*':
				printf("%.2f * %.2f = %.2f\n", y, x, y*x);
				y *= x;
				break;
			case '/':
				printf("%.2f / %.2f = %.2f\n", y, x, y/x);
				y /= x;
				break;
			case 'S':
				printf("--------------\n%.2f S\n", x);
				y = x;
				break;
			case 'E':
				oper = 'E';
				break;
			default:
				printf("Unknown operator, try again: ");
				scanf("%f %c", &x, &oper);
				break;
		}
	}		
	
	return 0;
}

