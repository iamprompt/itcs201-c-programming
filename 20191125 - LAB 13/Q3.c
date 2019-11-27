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
    char *pos;
    if ((pos = strchr(in_str, '\n')) != NULL)
        *pos = '\0';

    while (in_str[i] != '\0')
    {
        char character = in_str[i];
        //printf("%d %c\n", i, character);
        if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') || (character >= '0' && character <= '9') || character == ' ')
        {
            //printf("Heyyy %c\n", in_str[i]);
        }
        else
        {
            int j = i;
            while (in_str[j] != '\0')
            {
                in_str[j] = in_str[j + 1];
                j++;
            }
            rsym++;
            i--;
        }
        i++;
    }

    printf("%d %s\n", rsym, in_str);

    return 0;
}