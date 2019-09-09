#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, p, result;

    scanf("%d %d", &n, &m);

    result = 0;
    for (p = 0; p <= m; p++)
    {
        result = result + (n * pow(2,p));
    }

    printf("%d", result);
}
