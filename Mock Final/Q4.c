#include <stdio.h>

void getMatrix(int *arr, int mrow, int mcolumn);
void printMatrix(int *arr, int mrow, int mcolumn);

int main()
{
    int rowA, columnA, rowB, columnB;
    scanf("%d", &rowA);
    scanf("%d", &columnA);

    int matrixA[rowA * columnA];

    getMatrix(matrixA, rowA, columnA);

    // printMatrix(matrixA, rowA, columnA);

    scanf("%d", &rowB);
    scanf("%d", &columnB);

    int matrixB[rowB * columnB];

    getMatrix(matrixB, rowB, columnB);

    // printMatrix(matrixB, rowB, columnB);

    int resultMatrix[rowA * columnB];

    for (int rA = 0; rA < rowA; rA++)
    {
        for (int cB = 0; cB < columnB; cB++)
        {
            resultMatrix[(rA * columnB) + cB] = 0;

            for (int cA = 0; cA < columnA; cA++)
            {
                resultMatrix[(rA * columnB) + cB] += (matrixA[cA + (rA * columnA)] * matrixB[cA + (rA * columnB)]);
                printf("rxc = %d x %d\n", cA + (rA * columnA), cA + (rA * columnB));
                printf("%d x %d\n", matrixA[cA + (rA * columnA)], matrixB[cA + (rA * columnB)]);
            }
            printf("at %d value %d\n", (rA * columnB) + cB, resultMatrix[(rA * columnB) + cB]);
        }
    }

    printMatrix(resultMatrix, rowA, columnB);
}

void getMatrix(int *arr, int mrow, int mcolumn)
{
    for (int r = 0; r < mrow; r++)
    {
        for (int c = 0; c < mcolumn; c++)
        {
            scanf("%d", &arr[c + (r * mcolumn)]);
        }
    }
}

void printMatrix(int *arr, int mrow, int mcolumn)
{
    for (int r = 0; r < mrow; r++)
    {
        for (int c = 0; c < mcolumn; c++)
        {
            printf("%d ", arr[c + (r * mcolumn)]);
        }
        printf("\n");
    }
}