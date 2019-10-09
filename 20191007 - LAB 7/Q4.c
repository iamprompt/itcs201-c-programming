#include <stdio.h>
#include <math.h>

int main()
{
    int n, input;
    do
    {
        scanf("%d", &n);
    } while (n < 0);

    int numarr[n];
    int decimal = 0;
    for (int i = 0; i < n; i++)
    {
        do
        {
            scanf("%d", &numarr[i]);
        } while (numarr[i] != 0 && numarr[i] != 1);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", numarr[i]);
        decimal = decimal + (numarr[i] * (int)pow(2, i));
    }
    printf("\n");

    printf("%d", decimal);

    return 0;
}