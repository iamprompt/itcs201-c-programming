#include <stdio.h>

// Define USD & JPY
float THBtoUSD = 32.86;
float THBtoJPY = 0.29;

float thb2usd(float thb)
{
    float usd = thb / THBtoUSD;
    return usd;
}

float thb2jpy(float thb)
{
    float jpy = thb / THBtoJPY;
    return jpy;
}

int main()
{
    int n;
    scanf("%d", &n);

    float thb[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &thb[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%.2f %.2f\n", thb2usd(thb[i]), thb2jpy(thb[i]));
    }

    return 0;
}