#include <stdio.h>

int main()
{
    // Declare Variables
    int n;

    scanf("%d", &n);

    if (n < 0)
    {
        if (-n % 10 == 9)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        printf("0");
    }
}