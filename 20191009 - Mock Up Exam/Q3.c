#include <stdio.h>

int main()
{
    int pheight, i, j;
    scanf("%d", &pheight);

    for (i = 0; i < pheight; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            if (i % 2 == 0)
            {
                printf("[O] ");
            }
            else
            {
                printf("[#] ");
            }
        }
        printf("\n");
    }

    //printf("i = %d, j = %d\n", i, j);

    for (i = pheight - 1; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            if (i % 2 == 1)
            {
                printf("[O] ");
            }
            else
            {
                printf("[#] ");
            }
        }
        printf("\n");
    }
    return 0;
}