#include <stdio.h>
#include <string.h>
#define N 21

int main()
{
    char in_str[N]; // Declare
    int rsym = 0;
    int i = 0;

    // scanf("%[^\n]s", in_str);
    fgets(in_str, N, stdin);

    for (int i = 0; i < N; i++)
    {
        if (in_str[i] == '\n')
        {
            break;
        }

        printf("%c\n", in_str[i]);
        if ((in_str[i] >= 'a' && in_str[i] <= 'z') || (in_str[i] >= 'A' && in_str[i] <= 'Z') || (in_str[i] >= '0' && in_str[i] <= '9') || in_str[i] == ' ' || in_str[i] = '\n')
        {
            printf("Heyyy %c\n", in_str[i]);
        }
        else
        {
            *(in_str + i) = '\0';
            rsym++;
        }
    }

    printf("Removed %d\n", rsym);
    printf("%s\n", in_str);

    return 0;
}