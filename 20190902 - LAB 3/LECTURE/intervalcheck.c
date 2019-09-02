#include <stdio.h>

int main()
{
    int n;

    // Input a number
    printf("Enter a number : ");
    scanf("%d", &n);

    // Check if number is negatve
    if (n >= 24 || n < 16)
    {
        printf("A number %d is in the range of criteria.\n", n);
    }
    else
    {
        printf("A number %d is out of the range of criteria.\n", n);
    }

    printf("Ps. The criteria is greater than or equal to 25 or less than 16.");
}