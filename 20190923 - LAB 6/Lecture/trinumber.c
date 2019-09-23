#include <stdio.h>

int main()
{
    for (int line = 0; line < 10; line++)
    {
        for (int j = 0; j <= line; j++)
        {
            printf("%d ", line);
        }
        printf("\n");
    }
}