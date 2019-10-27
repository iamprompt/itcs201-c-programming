#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int matrix[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if ((i + j) % 2 == 0)
            {
                matrix[i][j] = 0;
            }
            else if ((i + j) % 2 == 1)
            {
                matrix[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}