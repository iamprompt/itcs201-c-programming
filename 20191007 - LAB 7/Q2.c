#include <stdio.h>

int main()
{
    int n, input;
    do
    {
        scanf("%d", &n);
    } while (n < 0);

    int narr1[n], narr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        narr1[i] = input;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        narr2[i] = input;
    }

    int prod = 0, netprod = 0;

    for (int i = 0; i < n; i++)
    {
        prod = narr1[i] * narr2[i];
        netprod = netprod + prod;
    }

    printf("%d", netprod);
}