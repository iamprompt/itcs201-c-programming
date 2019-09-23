#include <stdio.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n < 2 || n > 29 || n % 2 == 0);

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {

            if (x == y || x == n - 1 - y)
            {
                printf("%d", (y + 1) % 10);
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
    }

    return 0;
}