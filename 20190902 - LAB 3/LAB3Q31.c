#include <stdio.h>

int main()
{
    // Declare Variables
    int n;
    
    scanf("%d", &n);

    if (n >= -100 && n <= 100)
    {
        printf("1");
    } else
    {
        printf("0");
    }
}