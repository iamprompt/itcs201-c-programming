#include <stdio.h>

int main()
{
    int i, n, count = 0;

    scanf("%d", &n);

    for (i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        //printf("Count = %d\n", count);
    }

    if (count == 2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}