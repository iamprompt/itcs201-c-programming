#include <stdio.h>

int main()
{
    int n;

    // Input a number
    printf("Enter a number : ");
    scanf("%d", &n);

    // Check if number is negatve
    if (n % 10 == 7)
    {
        printf("A number %d is end with 7.", n);
    }
    else
    {
        printf("A number %d is not end with 7.", n);
    }
}