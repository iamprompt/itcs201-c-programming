#include <stdio.h>

int main()
{
    int n;
    while (n < 2 || n > 9)
    {
        scanf("%d", &n);
    }

    for (int line = n; line > 0; line--)
    {
        for (int i = line; i > 0; i--)
        {
            printf("%d%d ", line,i);
        }
        printf("\n");
    }
    return 0;
}