#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m = 1, a = 1;

    do
    {
        a = a * m;
        m = m + 1;
    } while (m != n);

    printf("%d", a);
}