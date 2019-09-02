#include <stdio.h>

int main()
{
    int n;

    // Input a number
    printf("Enter a number : ");
    scanf("%d", &n);

    // Check if number is negatve
    if (n % 2 == 0)
    {
        printf("A number %d is an even number.", n);
    }
    else
    {
        printf("A number %d is a odd number.", n);
    }
}