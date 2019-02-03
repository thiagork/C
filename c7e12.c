/*
 *
 *  Chapter 7 - Exercise 11
 *  Matrix Transposition
 *
 */

#include <stdio.h>

int** transposeMatrix(int rows, int columns, int matrix[rows][columns], int transposed_matrix[rows][columns]); // Se não declarar rows e columns antes da pau
void printMatrix(int rows, int columns, int matrix[rows][columns]); // vide

int main(void)
{
    int m_rows, m_columns; // Se não declarar antes do loop (for) da pau
    
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &m_rows);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &m_columns);
    
    int matrix[m_rows][m_columns]; // Se não pegar os valores antes de declarar a matrix da pau   
    int transposed_matrix[m_rows][m_columns];
    
    for (int i = 0; i < m_rows; ++i)
    {
        for (int j = 0; j < m_columns; ++j)
        {
            printf("Digite o %dº elemento da %dª linha da matriz: ", j+1, i+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("A matriz digitada é: \n");
    printMatrix(m_rows, m_columns, matrix); // Se colocar matrix[][] da pau
    
    printf("A matriz transposta é: \n");
    transposeMatrix(m_rows, m_columns, matrix, transposed_matrix);
    //int transposed_matrix = transposeMatrix(m_rows, m_columns, matrix);
    //printMatrix(m_rows, m_columns, transposed_matrix);   

    return 0;
}


int** transposeMatrix(int rows, int columns, int matrix[rows][columns], int transposed_matrix[rows][columns])
{
    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            transposed_matrix[j][i] = matrix[i][j];
        }
    }
    
    return transposed_matrix; // Retornar uma array da erro ao compilar
}


void printMatrix(int rows, int columns, int matrix[rows][columns])
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}