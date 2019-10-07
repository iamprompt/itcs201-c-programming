#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    int maxp = 0, minp = 0; // MAX & MIN Position
    scanf("%d", &n);
    float numarr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &numarr[i]);
        if (numarr[maxp] <= numarr[i])
        {
            maxp = i;
        }
        else if (numarr[minp] >= numarr[i])
        {
            minp = i;
        }
    }

    sum = numarr[maxp] + numarr[minp];
    printf("%.2f", sum);
}