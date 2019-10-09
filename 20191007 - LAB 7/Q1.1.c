#include <stdio.h>

int main()
{
    int n;
    float avg, sum = 0;
    scanf("%d", &n);
    float numarr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &numarr[i]);
        sum = sum + numarr[i];
    }

    avg = sum / n;
    printf("%.2f", avg);
}