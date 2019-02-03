#include <stdio.h>

int arraySum(int matrix[], int matrix_size);

int main(void)
{
    int matrix_size;
    
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &matrix_size);
    
    int matrix[matrix_size];
    
    for (int i = 0; i < matrix_size; ++i)
    {
        printf("Digite o %do elemento da matriz: ", i+1);
        scanf("%d", &matrix[i]);
    }
    
    printf("A matriz digitada é: \n");
    
    for (int i = 0; i < matrix_size; ++i)
    {
        printf("%d ", matrix[i]);
    }
    
    printf("\n");
    
    printf("A soma dos elementos da matriz é: %d\n", arraySum(matrix, matrix_size));
}

int arraySum(int matrix[], int matrix_size)
{
    int sum = 0;
    
    for (int i = 0; i < matrix_size; ++i)
    {
        sum += matrix[i];
    }
    
    return(sum);
}