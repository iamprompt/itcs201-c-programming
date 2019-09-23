#include <stdio.h>

int main()
{
    int num;
    for (int line = 0; line < 5; line++)
    {
        for (int dash = 0; dash < line + 1; dash++)
        {
            printf("_ ");
        }

        for (int i = 0; i < 5 - line - 1; i++)
        {
            printf("%d ", line + 1);
        }

        printf("\n");
    }
}