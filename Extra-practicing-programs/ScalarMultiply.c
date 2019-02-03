#include <stdio.h>

int main(void)
{
    void ScalarMultiply(int matrix[3][5], int scalar);
    void DisplayMatrix(int matrix[3][5]);
    
    int samplematrix[3][5] =
    {
        {7, 16, 55, 13, 12},
        {12, 10, 52, 0, 7},
        {-2, 1, 2, 4, 9}
    };
    
    printf("Original matrix:\n");
    
    DisplayMatrix(samplematrix);
    
    ScalarMultiply(samplematrix, 2);
    
    printf("\nMultiplied by 2:\n");
    DisplayMatrix(samplematrix);
    
    ScalarMultiply(samplematrix, -1);
    
    printf("\nThen multiplied by -1:\n");
    DisplayMatrix(samplematrix);
    
    return 0;
}

void ScalarMultiply(int matrix[3][5], int scalar)
{
    int row, column;
    
    for (row = 0; row < 3; ++row)
    {
        for (column = 0; column < 5; ++column)
        {
            matrix[row][column] *= scalar;
        }
    }
}

void DisplayMatrix(int matrix[3][5])
{
    int row, column;
    
    for (row = 0; row < 3; ++row)
    {
        for (column = 0; column < 5; ++column)
        {
            printf("%5d", matrix[row][column]);
        }
        printf("\n");
    }
}