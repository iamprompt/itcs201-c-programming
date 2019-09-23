#include <stdio.h>

int main()
{
    int n, count = 0;
    do
    {
        scanf("%d", &n);
    } while (n < 2 || n > 999);

    for (int i = 1; i < n+1; i++)
    {
        count = 0;
        for (int div = 1; div < n+1; div++)
        {
            if (i % div == 0)
            {
                count = count + 1;
            }
        }
        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}