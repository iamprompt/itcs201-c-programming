#include <stdio.h>

int find_max(int n1, int n2);

int main()
{
    int n, m, max;
    scanf("%d %d", &n, &m);

    int numarr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &numarr[i][j]);
            if (i == 0 && j == 0)
            {
                max = numarr[i][j];
            }
            max = find_max(max, numarr[i][j]);
        }
    }

    printf("%d\n", max);

    return 0;
}

int find_max(int n1, int n2)
{
    int max;

    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    return max;
}