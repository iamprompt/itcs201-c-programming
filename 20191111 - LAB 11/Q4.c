#include <stdio.h>

int compute_gcd(int index, int n1, int n2)
{
    int gcd;
    n1 = (index == 0) ? n2 : n1;
    int max = (n1 > n2) ? n1 : n2;

    for (int i = max; i >= 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    return gcd;
}

int main()
{
    int n, gcd;
    do
    {
        scanf("%d", &n);
    } while (n < 2);

    int numarr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numarr[i]);
        gcd = compute_gcd(i, gcd, numarr[i]);
        // printf("gcd of %d and %d is %d\n", gcd, numarr[i], gcd);
    }

    printf("%d\n", gcd);

    return 0;
}