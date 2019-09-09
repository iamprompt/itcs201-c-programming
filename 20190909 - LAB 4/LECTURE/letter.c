#include <stdio.h>

int main()
{
    int i;
    char letter;

    letter = 'a';
    for (i = 1; i <= 26; i++ && letter++)
    {
        printf("%c ", i, letter);
    }
}