#include <stdio.h>

int main()
{
    int n;

    // Input a number
    printf("Enter a number : ");
    scanf("%d", &n);

    // Check if number is negatve
    if (n > 0 && n < 100)
    {
        if (n % 2 == 0)
        {
            printf("A number %d is an even number between 0-100.", n);
        }
        else
        {
            printf("A number %d is a odd number between 0-100.", n);
        }
    } else
    {
        printf("A number %d is not between 0-100.", n);
    }
    
}