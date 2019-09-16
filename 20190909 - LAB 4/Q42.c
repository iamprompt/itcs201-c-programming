#include <stdio.h>

int main()
{
    char n, i, even, in;
    even = 0;

    while (in != 'q')
    {
        //int ch;
        //while ((ch = getchar()) != '\n' && ch != EOF);
        
        scanf(" %c", &in);

        if (in % 2 == 0)
        {
            even = even + 1;
        }
        
    }

    printf("%d", even);
}