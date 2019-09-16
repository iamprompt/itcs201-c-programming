#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int m = 1, a = 1;

    while (m != n)
    {
        a = a * m;
        m = m + 1;
        printf("a = %d m = %d\n", a, m);
    }

    printf("%d", a);
}