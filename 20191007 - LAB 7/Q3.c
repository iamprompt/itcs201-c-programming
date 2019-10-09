#include <stdio.h>

int main()
{
    int n, input;
    do
    {
        scanf("%d", &n);
    } while (n < 0);

    int numarr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numarr[i]);
    }
    int replace[2];
    int found = 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &replace[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (numarr[i] == replace[0])
        {
            numarr[i] = replace[1];
            found++;
        }
    }

    if (found > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", numarr[i]);
        }
    }
    else
    {
        printf("not found");
    }
}