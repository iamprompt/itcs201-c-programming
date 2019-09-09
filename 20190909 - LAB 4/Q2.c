#include <stdio.h>

int main()
{
    int n, i, multiple;

    scanf("%d", &n);

    for (i = 0; i < 12; i++)
    {
        multiple = n * (i + 1);
        printf("%dx%d=%d\n", n, i + 1, multiple);
    }
}
