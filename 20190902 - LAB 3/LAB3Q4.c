#include <stdio.h>

int main()
{
    // Declare Variables
    char c;

    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        switch (c)
        {
        case 'E':
            printf("Hello\n");
            break;
        case 'C':
            printf("Ni hao\n");
            break;
        case 'J':
            printf("Konnichi wa\n");
            break;
        case 'T':
            printf("Sawasdee\n");
            break;

        default:
            printf("Go away!!\n");
            break;
        }
    }
    printf("Bye!!\n");
}