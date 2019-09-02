#include <stdio.h>

int main()
{
    // Declare Variables
    char c, cc;

    scanf("%c", &c);
    //cc = c;

    // Convert Uppercase to Lowercase
    cc = c >= 'A' && c <= 'Z' ? c + 32 : c;

    printf("%c\n", cc);
}