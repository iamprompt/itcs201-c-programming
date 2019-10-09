#include <stdio.h>

int main()
{
    float temp;
    char unit;
    float result = 0;

    scanf("%f %c", &temp, &unit);
    //printf("%f %c\n", temp, unit);

    if (unit == 'c')
    {
        result = ((9.00 / 5.00) * temp) + 32;
    }

    if (unit == 'f')
    {
        result = (temp - 32) * (5.00 / 9.00);
    }

    printf("%.2f", result);

    return 0;
}