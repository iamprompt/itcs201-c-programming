#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int m = 1, a = 1;

    do
    {
        a = a * m;
        if (m == n)
        {
            break;
        }

        m = m + 1;
    } while (m != n);

    printf("%d", a);
}