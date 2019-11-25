#include <stdio.h>
#include <string.h>
#define N 20

int main()
{
    char string[N];              // Declare
    fgets(string, N + 1, stdin); // Input

    int letter = 0, digit = 0, i = 0;

    while (string[i] != '\0')
    {
        // printf("%c\n", string[i]);
        if (string[i] >= '0' && string[i] <= '9')
            digit++;
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
            letter++;
        i++;
    }

    printf("%d %d\n", letter, digit);

    return 0;
}