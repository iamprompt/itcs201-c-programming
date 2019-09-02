#include <stdio.h>

int main()
{
    // Declare Variables
    char c1, c2, c3;
    int first;
    
    scanf("%c %c %c", &c1, &c2, &c3);

    first = c1;

    if (c2 < first)
    {
        first = c2;
    }

    if (c3 < first)
    {
        first = c3;
    }
    
    printf("%c", first);    
}