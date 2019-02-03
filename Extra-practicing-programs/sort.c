/* 
 * Program to sort numbers
*/

#include <stdio.h>

void sort(int a[], int n)
{
    int temp;
    
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;            
            }
        }
    }
}

int main(void)
{ 
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
 	
	void sort(int a[], int n);
    
    printf("The array before the sort:\n");
    
    for (int i = 0; i < 16; ++i)
    {
        printf("%d ", array[i]);
    }
	
	sort(array,16);
	
	printf("\n\nThe array after the sort:\n");
	
	for (int i = 0; i < 16; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}