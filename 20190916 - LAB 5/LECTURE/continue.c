#include <stdio.h>

int main()
{
    int a = -7, i = 0, j = 0, k = 0;

    while (a < 0)
    {
        //printf("%d %d %d %d\n", a, i, j, k);
        a++;
        i++;
        if (i > 5)
        {
            continue;
        }
        j++;
        k++;
    }

    printf("%d %d %d %d", a, i, j, k);
}