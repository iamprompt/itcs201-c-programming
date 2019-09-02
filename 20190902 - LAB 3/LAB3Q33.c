#include <stdio.h>

int main()
{
    // Declare Variables
    int n;

    scanf("%d", &n);

    if (n % 3 != 0 && n % 5 != 0 && n >= 0)
    {
        printf("1");
    } else
    {
        printf("0");
    }
}