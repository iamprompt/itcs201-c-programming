#include <stdio.h>

int main()
{
    int n, i;
    i = 1;

    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 5 == 0)
        {
            printf("%d ", i);
        }

        i++;
    }
    
}
