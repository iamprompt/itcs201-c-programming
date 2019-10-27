#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int matrix[row + 1][column + 1];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        matrix[i][column] = 0;

        for (int j = 0; j < column; j++)
        {
            matrix[i][column] += matrix[i][j];
        }
    }

    for (int j = 0; j < column; j++)
    {
        matrix[row][j] = 0;

        for (int i = 0; i < row; i++)
        {
            matrix[row][j] += matrix[i][j];
        }
    }

    matrix[row][column] = matrix[row - 1][column] + matrix[row][column - 1];

    for (int i = 0; i < row + 1; i++)
    {
        for (int j = 0; j < column + 1; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}