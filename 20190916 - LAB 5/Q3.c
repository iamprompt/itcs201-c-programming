#include <stdio.h>

int main()
{
    int i, n1, n2, max, min;

    scanf("%d %d", &n1, &n2);

    max = n1;

    if (n2 > max)
    {
        max = n2;
        min = n1;
    }
    else
    {
        max = n1;
        min = n2;
    }

    i = min;

    //printf("Max = %d, Min = %d, i = %d\n", max, min, i);

    while (max % i != 0 || min % i != 0)
    {
        i--;
    }

    printf("%d", i);

    return 0;
}