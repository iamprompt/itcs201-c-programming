#include <stdio.h>
#include <string.h>
#define N 20

int main()
{
    char string[N];          // Declare
    fgets(string, N, stdin); // Input

    int letter = 0, digit = 0, i = 0;

    while (string[i] == '\0')
    {
        if(string[i] >= '0' && string[i] <= '9') digit++;
        if(string[i] >= 'a' && string[i] <= 'Z') digit++;
    }

    printf("%d", digit);

    return 0;
}