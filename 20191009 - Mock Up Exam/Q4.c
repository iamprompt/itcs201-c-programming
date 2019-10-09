#include <stdio.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n < 0);

    int numarray[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numarray[i]);
    }

    int count[n];

    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (numarray[i] == numarray[j])
            {
                count[i] = count[i] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        //printf("At %d = %d\n", numarray[i], count[i]);
    }

    int maxval = 0;
    int maxpos = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxval < count[i])
        {
            maxval = count[i];
            maxpos = i;
        }
    }

    //printf("%d at position = %d", numarray[maxpos], maxpos);
    printf("%d", numarray[maxpos]);

    return 0;
}