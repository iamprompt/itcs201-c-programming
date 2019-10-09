#include <stdio.h>

int main()
{
    int n, negn;
    do
    {
        scanf("%d", &n);
    } while (n < 0);

    negn = -n;

    //printf("%d %d", negn, n);

    for (int i = negn; i <= n; i++)
    {
        if (i % 2 == 0 && i != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}