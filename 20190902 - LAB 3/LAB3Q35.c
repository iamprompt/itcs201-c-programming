#include <stdio.h>

int main()
{
    // Declare Variables
    int n;

    scanf("%d", &n);

    if (n > 420 && n < 1250)
    {
        if (n % 2 == 0 && n % 10 != 6)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        printf("0\n");
    }
}