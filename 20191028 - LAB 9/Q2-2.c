#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int diagonal[n];
    float sumOfdiagonal = 0;
    float diagonalavg = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonal[i] = matrix[i][j];
                sumOfdiagonal += diagonal[i];
            }
        }
    }

    diagonalavg = sumOfdiagonal / n;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", diagonal[i]);
    }

    printf("\n%.2f\n", diagonalavg);
}