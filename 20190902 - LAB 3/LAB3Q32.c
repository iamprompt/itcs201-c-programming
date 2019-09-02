#include <stdio.h>

int main()
{
    // Declare Variables
    int n;

    scanf("%d", &n);

    if (n < 0 && n % 2 != 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}