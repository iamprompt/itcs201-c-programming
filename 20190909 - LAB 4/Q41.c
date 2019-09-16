#include <stdio.h>

int main()
{
    char n, i, sum, in;
    sum = 0;

    while (in != 'q')
    {
        //int ch;
        //while ((ch = getchar()) != '\n' && ch != EOF);
        
        scanf(" %c", &in);

        //printf("%d\n", in);
        switch (in)
        {
        case 'q':
            in = in;
            break;
        
        default:
            n = in - '0';
            //printf("%d", n);
            sum = sum + n;
            break;
        }
    }

    printf("%d", sum);
}
